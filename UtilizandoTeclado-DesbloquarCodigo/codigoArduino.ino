#include <Keypad.h>

char* secretCode="1234";
char key;
int position=0;
const byte rows = 4;
const byte cols = 4;
char keys[rows][cols]=
{
  {'1','2','3','A',},
  {'4','5','6','B',},
  {'7','8','9','C',},
  {'*','0','#','D',},
};
byte rowPins[rows] = {7,6,5,4}; //array com os pinos das linhas
byte colPins[cols] = {3,2,1,0};//array com os pinos das colunas
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, rows, cols);//criação do teclado
int redPin = 13; //led vermelho
int greenPin = 12; //led verde
void setup() {

pinMode(redPin,OUTPUT);

pinMode(greenPin, OUTPUT);

setLocked(true); //led vermelho ligado, indicando que o sistema está trancado
}
void loop() {
key = keypad.getKey();
if(key=='*' || key=='#')
  {
position = 0;
setLocked(true);
  }
if(key == secretCode[position])
{
position++;
  }
if (position == 4)
{
setLocked(false);
  }
delay(100);
  }
void setLocked(int locked)
{
if(locked)
  {
digitalWrite(redPin, HIGH);
digitalWrite(greenPin,LOW);
  }
else
{
digitalWrite(redPin, LOW);
digitalWrite(greenPin, HIGH);
  }
}
