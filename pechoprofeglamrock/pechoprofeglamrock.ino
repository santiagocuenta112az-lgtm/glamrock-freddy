#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

#define TRIG_PIN 2
#define ECHO_PIN 3
#define DISTANCIA_ACTIVACION 40

#define TIEMPO_ABIERTO 6000
#define RETRASO_APERTURA 600
#define RETRASO_CIERRE 200

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x40);

#define s0 0
#define s1 1
#define s2 2
#define s3 3

int CERRADO[4] = {540, 500, 300, 500};
int ABIERTO[4] = {260, 320, 600, 320};

#define PASO_APERTURA 6
#define VELOCIDAD_APERTURA 4

#define PASO_CIERRE 3
#define VELOCIDAD_CIERRE 20

bool secuenciaActiva = false;

long medirDistancia() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duracion = pulseIn(ECHO_PIN, HIGH, 25000);
  
  if (duracion == 0) return 0;

  return duracion * 0.034 / 2;
}

void moverServo(uint8_t canal, int inicio, int fin, int paso, int velocidad) {
  int dir = (fin > inicio) ? paso : -paso;

  for (int pos = inicio;
       (dir > 0 && pos <= fin) || (dir < 0 && pos >= fin);
       pos += dir) {
    
    pwm.setPWM(canal, 0, pos);
    delay(velocidad);
  }

  pwm.setPWM(canal, 0, fin);
}

void setup() {
  Wire.begin();
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pwm.begin();
  pwm.setPWMFreq(50);

  for(int i = 0; i < 4; i++) {
    pwm.setPWM(i, 0, CERRADO[i]);
  }
}

void loop() {
  long distancia = medirDistancia();

  if ((distancia <= DISTANCIA_ACTIVACION && distancia > 0) && !secuenciaActiva) {
    
    secuenciaActiva = true;

    moverServo(s0, CERRADO[0], ABIERTO[0], PASO_APERTURA, VELOCIDAD_APERTURA);
    moverServo(s2, CERRADO[2], ABIERTO[2], PASO_APERTURA, VELOCIDAD_APERTURA);

    delay(RETRASO_APERTURA);

    moverServo(s1, CERRADO[1], ABIERTO[1], PASO_APERTURA, VELOCIDAD_APERTURA);
    moverServo(s3, CERRADO[3], ABIERTO[3], PASO_APERTURA, VELOCIDAD_APERTURA);

    delay(TIEMPO_ABIERTO);

    moverServo(s0, ABIERTO[0], CERRADO[0], PASO_CIERRE, VELOCIDAD_CIERRE);
    moverServo(s2, ABIERTO[2], CERRADO[2], PASO_CIERRE, VELOCIDAD_CIERRE);

    delay(RETRASO_CIERRE);

    moverServo(s1, ABIERTO[1], CERRADO[1], PASO_CIERRE, VELOCIDAD_CIERRE);
    moverServo(s3, ABIERTO[3], CERRADO[3], PASO_CIERRE, VELOCIDAD_CIERRE);

    secuenciaActiva = false;
  }

  delay(250);
}





















