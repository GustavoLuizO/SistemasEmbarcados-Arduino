#define led 13
int mortraco = 1500; //representa o - em morse
int morbola = 500;   //representa o . em morse
int proxhigh=500;    //tempo de delay para cada brilho no led
int proxletra= 2000; //tempo de delay para cada letra do nome
int fim = 50000;     //demorar pra piscar no final mostrando o fim

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  for(int x=0;x<3;x++)
  {
    //G
    digitalWrite(led, HIGH);
    delay(mortraco);               
    digitalWrite(led, LOW);   
    delay(proxhigh); 
    digitalWrite(led, HIGH);
    delay(mortraco);
    digitalWrite(led, LOW);   
    delay(proxhigh); 
    digitalWrite(led, HIGH);
    delay(morbola);
    digitalWrite(led, LOW);
    
    //tempo de cada letra 
    delay(proxletra);
    
    //u
    digitalWrite(led, HIGH);
    delay(morbola);
    digitalWrite(led, LOW);
    delay(proxhigh);
    digitalWrite(led, HIGH);
    delay(morbola);
    digitalWrite(led, LOW);
    delay(proxhigh);
    digitalWrite(led, HIGH);
    delay(mortraco);               
    digitalWrite(led, LOW);  
    
    delay(proxletra);
    
    //s
    digitalWrite(led, HIGH);
    delay(morbola);
    digitalWrite(led, LOW);
    delay(proxhigh);
    digitalWrite(led, HIGH);
    delay(morbola);
    digitalWrite(led, LOW);
    delay(proxhigh);
    digitalWrite(led, HIGH);
    delay(morbola);
    digitalWrite(led, LOW);
    
    delay(proxletra);
    
    //t
    digitalWrite(led, HIGH);
    delay(mortraco);               
    digitalWrite(led, LOW);   
    
    delay(proxletra);
    
    //a
    digitalWrite(led, HIGH);
    delay(morbola);
    digitalWrite(led, LOW);
    delay(proxhigh);
    digitalWrite(led, HIGH);
    delay(mortraco);               
    digitalWrite(led, LOW);  
    
    delay(proxletra);
    
    //v
    digitalWrite(led, HIGH);
    delay(morbola);
    digitalWrite(led, LOW);
    delay(proxhigh);
    digitalWrite(led, HIGH);
    delay(morbola);
    digitalWrite(led, LOW);
    digitalWrite(led, HIGH);
    delay(morbola);
    digitalWrite(led, LOW);
    delay(proxhigh);
    digitalWrite(led, HIGH);
    delay(mortraco);               
    digitalWrite(led, LOW);  
    
    delay(proxletra);
    
    digitalWrite(led, HIGH);
    delay(mortraco);               
    digitalWrite(led, LOW);   
    delay(proxhigh); 
    digitalWrite(led, HIGH);
    delay(mortraco);
    digitalWrite(led, LOW);  
    delay(proxhigh); 
    digitalWrite(led, HIGH);
    delay(mortraco);
    digitalWrite(led, LOW);  
    
    delay(fim);
    
  }
}
