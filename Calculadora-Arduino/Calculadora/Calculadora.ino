#include <Keypad.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);
int num1 = 0;
int num2 = 0;
int result = 0;

char key;

const byte rows = 4;
const byte cols = 4;

char keys[rows][cols]=
{
  {'1','2','3','+',},
  {'4','5','6','-',},
  {'7','8','9','*',},
  {'C','0','=','/',},
};
byte rowPins[rows] = {7,6,5,4}; //array com os pinos das linhas
byte colPins[cols] = {3,2,1,0};//array com os pinos das colunas
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, rows, cols);//criação do teclado
void setup() {

  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Calculadora");
  lcd.setCursor(0,1);
  lcd.print("Em arduino");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
}
void loop() {
  key = keypad.getKey();
  switch(key)
    {
      case '0' ... '9':
        lcd.setCursor(0,0);
        num1=num1*10+(key-'0');
        lcd.print(num1);
        break;
      case '+':
        if(result!=0)
          num1=result;
        else
          num1=num1;
        lcd.setCursor(0,0);
        lcd.print("+");
        num2=SecondeNumber();
        result=num1+num2;
        lcd.setCursor(0,0);
        num1=0,num2=0;
        lcd.print(result);
        break;
      case '-':
        num1=(result !=0 ? result : num1);
        lcd.setCursor(0,0);
        lcd.print("-");
        num2=SecondeNumber();
        result=num1-num2;
        lcd.setCursor(0,0);
        num1=0,num2=0;
        lcd.print(result);
        break;
      case '*':
        num1=(result !=0 ? result : num1);
        lcd.setCursor(0,0);
        lcd.print("*");
        num2=SecondeNumber();
        result=num1*num2;
        lcd.setCursor(0,0);
        num1=0,num2=0;
        lcd.print(result);
        break;
      case '/':
        num1=(result !=0 ? result : num1);
        lcd.setCursor(0,0);
        lcd.print("/");
        num2=SecondeNumber();
        result=num1/num2;
        lcd.setCursor(0,0);
        num1=0,num2=0;
        lcd.print(result);
        break;
       case 'C':
        result=0;
        lcd.clear();
        break;
    }
  
}
int SecondeNumber()
{
  while(1)
  {
    key = keypad.getKey();
    if(key >='0' && key <= '9')
    {
      num2=num2*10 + (key -'0');
      lcd.setCursor(0,0);
      lcd.print(num2);
    }
    if(key=='=')
      break;
  }
  return num2;
}
