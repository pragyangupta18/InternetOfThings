int RED = 9;
int GREEN = 11;
// int YELLOW = ;
int BLUE = 12;

char input;

void setup() {
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // for (int i = 1; i < 14; i++) {
  //   Serial.print(i);
  
  for (int i = 1; i < 14; i++) {
    digitalWrite(i, LOW);
    delay(1000);
  }
}
