# glamrock-freddy
hello superstar!!!!!

<img width="360" height="202" alt="ax7fsq" src="https://github.com/user-attachments/assets/9581755a-cd88-4355-a5c2-69ae0a171763" />

¿who am i?

I'm Glamrock Freddy, an animatronic robot designed to inspire people and make learning complex topics fun, interactive, and accessible. Through me, students can discover how subjects like mechanics, physics, electronics, computer science, and even biology come together to create something that can move, see, speak, and interact with the world.

I was designed to be open, modular, easy to build, and easy to program, so that anyone with curiosity—not necessarily expensive equipment—can learn from me, improve me, and even build their own version.

But... why would someone spend months building an animatronic like me?

Growing up, I often felt that education focused too heavily on memorizing facts instead of understanding how knowledge can be applied to solve real problems. We constantly talk about building a better future, yet that future cannot exist if science and engineering remain confined to textbooks instead of becoming tools for creation and innovation.

That frustration became the beginning of this project.

I was created to show that the subjects many students consider difficult, abstract, or even boring are actually the foundation of incredible things. Every gear demonstrates mechanics. Every servo teaches control systems. Every electronic circuit applies physics. Every line of code becomes intelligence and behavior. Every camera, sensor, and algorithm transforms mathematics into something that can perceive and interact with the world.

My goal is to help reduce educational inequality by bringing robotics directly to students. I hope to visit as many schools as possible, showing that engineering is not just something found in universities or large companies—it is something anyone can learn with curiosity, creativity, and perseverance.

I wasn't built just to entertain people.

I was built to make them curious.

¿Where have I been?

Curiosity shouldn't be limited to a single classroom. That's why my mission is to travel to as many schools and universities as possible—not only across my country, but, why not, around the world. Every stop on this map represents new conversations, new ideas, and new friendships. I don't expect everyone I meet to become an engineer. If one student leaves inspired to become a scientist, an artist, a writer, a teacher, or simply someone who never stops asking questions, then I've accomplished my mission. This is my journey so far.

(My first visit to a school)
Perú-Lima (Villa El Salvador)

<img width="1174" height="611" alt="image" src="https://github.com/user-attachments/assets/9e5d58cc-fa9a-4b3d-b4c8-3c939114d0f8" />
<img width="1600" height="1200" alt="image" src="https://github.com/user-attachments/assets/46a3225f-a7f4-4be1-bbd7-3cb68a12ebc8" />

¿How does my mind work?

Whenever someone wants to talk to me, the first thing they do is open the hatch on my chest. Inside, they'll find a microphone and a "Listen" button. Once the button is pressed, I begin paying attention.

From that moment, I carefully listen to every word. My onboard computer processes what I hear, understands the question using artificial intelligence, and prepares a response. A few moments later, I speak back, moving my mouth in sync with my voice to make the conversation feel as natural as possible.

<img width="360" height="202" alt="ax7ipx" src="https://github.com/user-attachments/assets/fe18b519-94da-4d86-8982-0a1a6da84038" />

But that's only what happens on the outside...

Let's take a look inside my mind.

AI System workflow

1.- The user picks up the microphone and presses the "Listen" button on my screen.
2.- The Raspberry Pi records the user's voice and uses Whisper to transcribe the spoken words into text.
3.- The transcribed text is sent to an api of groq (an AI).
4.- The AI processes the request, generates a response, and sends it back to the Raspberry Pi.
5.- The Raspberry Pi converts the generated text into speech using a Text-to-Speech (TTS) system while simultaneously synchronizing my mouth movements to match the audio.


¿How can I see you?

i use two cameras into my eyes to see 

<img width="1200" height="1600" alt="image" src="https://github.com/user-attachments/assets/f84f175d-8bb1-4ae4-98dc-6e9376127a7b" />

<img width="742" height="484" alt="image" src="https://github.com/user-attachments/assets/7b2039d8-9446-433e-b921-432f04d5627f" />

<img width="738" height="660" alt="image" src="https://github.com/user-attachments/assets/a82b7d3c-ed2e-43a5-9b57-938507ef2be0" />

this cameras are conected to a raspberry pi 5, use yolo to detect objects, persons, and record.

<img width="720" height="1280" alt="image" src="https://github.com/user-attachments/assets/3a29ecfa-9565-4da9-9121-f56fd5b0fa0f" />

<img width="834" height="796" alt="image" src="https://github.com/user-attachments/assets/b5d7e0e8-debc-44e4-9c4a-9917dc3bc104" />


How do I move?
i use servomotors and planetary gearboxes to move mi arms and head

<img width="1204" height="1600" alt="image" src="https://github.com/user-attachments/assets/a4fb1f73-6dbd-4757-908a-926b9e73d07c" />

<img width="728" height="482" alt="image" src="https://github.com/user-attachments/assets/a9fd47d6-170e-4235-903a-b1dfca1454d7" />

<img width="2000" height="1333" alt="image" src="https://github.com/user-attachments/assets/44543841-592c-4b3b-a509-5687a04c7491" />

<img width="2000" height="1333" alt="image" src="https://github.com/user-attachments/assets/b4d6e044-4936-40e0-95ff-0bcf147fb5d5" />

<img width="2000" height="1333" alt="image" src="https://github.com/user-attachments/assets/5395a3fc-5dff-4617-82de-0698618d899b" />

 this is the planetaryt gearbox
 
 <img width="851" height="766" alt="image" src="https://github.com/user-attachments/assets/22ed6394-372a-4d04-8fc4-57fd21e1e85f" />


The project uses Bottango to function. (https://www.bottango.com)


What's inside me?
i use arduinos to control the servos and a raspberry pi 5 for the ai system

<img width="720" height="464" alt="image" src="https://github.com/user-attachments/assets/d0e39bb2-504a-4113-bd1a-5c6bc68a97ce" />

<img width="705" height="423" alt="image" src="https://github.com/user-attachments/assets/e78c0a49-3f9d-41a5-8d23-419e477001f5" />

<img width="739" height="449" alt="image" src="https://github.com/user-attachments/assets/4a3441b4-50ed-4573-8cf1-fd735547a834" />

 to control mi servos I use bottango that is an program to make animations whit servos steppers and other motors, it´s open source, here is the link (https://www.bottango.com)

<img width="260" height="136" alt="ax7j1h (1)" src="https://github.com/user-attachments/assets/37b058a6-ca6a-42dd-a4f0-ae7073b3b969" />

How was I built?

Building me was a long and challenging journey. I wasn't created from a detailed blueprint or years of experience. Instead, I was built through curiosity, experimentation, and countless hours of learning.

Every obstacle became an opportunity to discover something new. Every failed prototype led to a better design. Every mistake became another lesson. Little by little, each improvement helped shape the robot I am today.

the robot in the start of the project
<img width="338" height="190" alt="MVI_4156" src="https://github.com/user-attachments/assets/39673ba1-4ee5-453b-ad71-9f3ceb7d429a" />

a power converter that i destroyed

<img width="752" height="484" alt="image" src="https://github.com/user-attachments/assets/98cf95ac-ab3e-47a2-ad10-26bcc8ed26fe" />

 a piece that i don´t designed in a good way

 the prototipes of the eyes
 
<img width="2000" height="1333" alt="image" src="https://github.com/user-attachments/assets/44e75bca-f013-437f-8afe-0f00bf7adca2" />
 
<img width="495" height="487" alt="image" src="https://github.com/user-attachments/assets/8fe11c74-5c6c-45b6-87c7-84fdeaba5859" />

<img width="2000" height="1333" alt="image" src="https://github.com/user-attachments/assets/eb0863cc-3035-4ceb-be1c-907881e93741" />

 the final eyes
 
<img width="720" height="536" alt="image" src="https://github.com/user-attachments/assets/67d68d1e-92e3-48fb-82f2-c305d542dc60" />

<img width="2000" height="1333" alt="image" src="https://github.com/user-attachments/assets/a4af24d7-9e91-4c48-8377-5eb52f7f32e0" />

Now that my development is nearing completion, I have a new goal.

I want to make my construction process as simple and accessible as possible. Every mechanism, every circuit, and every line of code is being documented so that anyone—regardless of their previous experience—can understand how I work, learn from me, and even build their own version.

After all, knowledge becomes far more valuable when it is shared.

What's next?

i have emore ideas for the robot, there´s most of them

1.- Improve the chest mecanism
2.- do the ai for the robot talk whit the user in more natural way
3.- organize the connections to make them looks more hide
4.- do the 4 missing essays to explain hte concepts
5.- animate the robot whit the content of the essays
6.- do a narrative documentary like cosmos (of carl sagan) to explain more the concepts
7.- go for more schools

more detailed explanation of my build on hack club

https://macondo.hackclub.com/projects/11732


Here´s the bom and the wiring diagram

<img width="889" height="858" alt="image" src="https://github.com/user-attachments/assets/d2fc7911-0a6d-4bfd-9576-a86860b92855" />

<img width="1333" height="2000" alt="image" src="https://github.com/user-attachments/assets/b778e1eb-f973-4fad-b5c2-a299624ae1c7" />

<img width="770" height="796" alt="Captura de pantalla 2026-04-10 235814" src="https://github.com/user-attachments/assets/6798406b-2f85-4916-824b-1927b36c236b" />


(adaptation and translation of the texts form spanish to english are made by chatgpt, because my writing on english is not perfect and i need to made the readme understandable to all the people that see the project)


The project uses some existing files from the internet; here is a direct quote.

Autor: gabgra11
Licencia: CC BY-NC-SA
This model was used to make the animatronic's head; it was modified to fulfill that function
Fuente:
https://www.printables.com/model/553299-glamrock-freddy-wearable-mask-with-hinged-jaw

Autor: Hannah
Licencia: BY-NC-SA
This is the base model of the animatronic's casing; it has been scaled, modified, and adapted to the different mechanisms necessary for the project.
Fuente:
https://www.myminifactory.com/es/object/3d-print-glamrock-freddy-figure-340562

Autor: emccarron
Licencia:CC BY-NC-SA
The model will be used to create the robot's hands; currently, the model is scaled, but it needs to be adapted to fit the project.
Fuente:
https://www.thingiverse.com/thing:7145273

Autor: Paul6700
Licencia: Creative Commons (4.0 International License)
The model was adapted to fit the animatronic; the eyes have a space for an OV5647 model camera.
Fuente:
https://www.printables.com/model/1435865-46mm-animatronic-single-eye-four-servo-design
