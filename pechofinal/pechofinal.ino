#include <Servo.h>

//--------------------------------------------------
// SENSOR HC-SR04
//--------------------------------------------------
#define TRIG_PIN 2
#define ECHO_PIN 3

#define DISTANCIA_ACTIVACION 35

//--------------------------------------------------
// SERVOS
//--------------------------------------------------
Servo mg1;   // D7
Servo mg2;   // D5

Servo ds1;   // D10
Servo ds2;   // D11

//--------------------------------------------------
// CALIBRACIÓN
// (Modificar estos valores según tu mecanismo)
//--------------------------------------------------

// MG996R
int MG1_CERRADO = 50;
int MG1_ABIERTO = 160;

int MG2_CERRADO = 180; //listo//
int MG2_ABIERTO = 60;

// DS3235 (invertidos)
int DS1_CERRADO = 160;
int DS1_ABIERTO = 130;

int DS2_CERRADO = 150; //listo//
int DS2_ABIERTO = 100;

//--------------------------------------------------
#define RETRASO_ENTRE_GRUPOS 600
#define VELOCIDAD 15
//--------------------------------------------------

bool abierto = false;
bool esperandoLiberacion = false;

//--------------------------------------------------
// MEDIR DISTANCIA
//--------------------------------------------------
long medirDistancia() {

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  long duracion = pulseIn(ECHO_PIN, HIGH, 25000);

  if (duracion == 0)
    return 999;

  return duracion * 0.034 / 2;
}

//--------------------------------------------------
// MOVER DOS SERVOS AL MISMO TIEMPO
//--------------------------------------------------
void moverPar(
  Servo &s1,
  Servo &s2,
  int inicio1,
  int fin1,
  int inicio2,
  int fin2) {

  int pasos = max(abs(fin1 - inicio1), abs(fin2 - inicio2));

  if (pasos == 0)
    return;

  float pos1 = inicio1;
  float pos2 = inicio2;

  float inc1 = (float)(fin1 - inicio1) / pasos;
  float inc2 = (float)(fin2 - inicio2) / pasos;

  for (int i = 0; i <= pasos; i++) {

    s1.write((int)pos1);
    s2.write((int)pos2);

    pos1 += inc1;
    pos2 += inc2;

    delay(VELOCIDAD);
  }

  s1.write(fin1);
  s2.write(fin2);
}

//--------------------------------------------------
// ABRIR PECHO
//--------------------------------------------------
void abrirPecho() {

  // MG996R primero
  moverPar(
    mg1, mg2,
    MG1_CERRADO, MG1_ABIERTO,
    MG2_CERRADO, MG2_ABIERTO
  );

  delay(RETRASO_ENTRE_GRUPOS);

  // DS3235 después
  moverPar(
    ds1, ds2,
    DS1_CERRADO, DS1_ABIERTO,
    DS2_CERRADO, DS2_ABIERTO
  );
}

//--------------------------------------------------
// CERRAR PECHO
//--------------------------------------------------
void cerrarPecho() {

  // DS3235 primero
  moverPar(
    ds1, ds2,
    DS1_ABIERTO, DS1_CERRADO,
    DS2_ABIERTO, DS2_CERRADO
  );

  delay(RETRASO_ENTRE_GRUPOS);

  // MG996R después
  moverPar(
    mg1, mg2,
    MG1_ABIERTO, MG1_CERRADO,
    MG2_ABIERTO, MG2_CERRADO
  );
}

//--------------------------------------------------
// SETUP
//--------------------------------------------------
void setup() {

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  mg1.attach(7);
  mg2.attach(5);

  ds1.attach(10);
  ds2.attach(11);

  mg1.write(MG1_CERRADO);
  mg2.write(MG2_CERRADO);

  ds1.write(DS1_CERRADO);
  ds2.write(DS2_CERRADO);

  delay(1000);
}

//--------------------------------------------------
// LOOP
//--------------------------------------------------
void loop() {

  long distancia = medirDistancia();

  if (distancia > 0 &&
      distancia <= DISTANCIA_ACTIVACION &&
      !esperandoLiberacion) {

    esperandoLiberacion = true;

    if (!abierto) {

      abrirPecho();
      abierto = true;

    } else {

      cerrarPecho();
      abierto = false;
    }
  }

  // Esperar a que la mano se retire
  if (distancia > DISTANCIA_ACTIVACION + 10) {

    esperandoLiberacion = false;
  }

  delay(50);
}