const int A = 12, B = 11, C = 10, D = 9, E = 8, F = 6, G = 7; 
byte displaySeteSeg[10][7] = {
      {1,1,1,1,1,1,0},
      {0,1,1,0,0,0,0},
      {1,1,0,1,1,0,1},
      {1,1,1,1,0,0,1},      
      {0,1,1,0,0,1,1},
      {1,0,1,1,0,1,1},
      {1,0,1,1,1,1,1},
      {1,1,1,0,0,0,0},
      {1,1,1,1,1,1,1},
      {1,1,1,1,0,1,1},
};
int pins[] = {
    A, B, C, D, E, F, G
};
void setup()
{
  pinMode(A, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(C, OUTPUT);
  pinMode(D, OUTPUT);
  pinMode(E, OUTPUT);
  pinMode(F, OUTPUT);
  pinMode(G, OUTPUT);
}

void loop()
{
  for(int j = 0; j < 10; j++){
    for(int i = 0; i < 7; i++){
        digitalWrite(pins[i], displaySeteSeg[j][i] == 1 ? HIGH : LOW);
    }
    delay(1000);
  }
  
}
