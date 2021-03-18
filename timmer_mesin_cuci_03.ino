int Relay = 12;
int End = 0;
int Lmp = 2;
int btn1 = 4;
int posON;
int cx = 0;

void setup() {
  pinMode(Relay, OUTPUT);
  pinMode(Lmp,OUTPUT);
  digitalWrite(Relay, HIGH);
  digitalWrite(Lmp, HIGH);
  delay(500);
  digitalWrite(Lmp, LOW);
  delay(500);
  digitalWrite(Lmp, HIGH);
  delay(500);
  digitalWrite(Lmp, LOW);
  delay(500);
  digitalWrite(Lmp, HIGH);
  delay(500);
  digitalWrite(Lmp, LOW);
  delay(300);
  digitalWrite(Lmp, HIGH);
  delay(500);
  digitalWrite(Lmp, LOW);
  pinMode(btn1,INPUT);
}
void loop()
{
    if(digitalRead(btn1) == HIGH){
      if(posON==1){
        digitalWrite(Lmp, HIGH);
        digitalWrite(Relay, LOW);
        delay(5000);
        posON=0;
        digitalWrite(Relay, HIGH);
        digitalWrite(Lmp, LOW);
      }
    }else{
      if(posON==0){
        digitalWrite(Lmp, HIGH);
        digitalWrite(Relay, LOW);
        delay(5000);
        posON=1;
        digitalWrite(Relay, HIGH);
        digitalWrite(Lmp, LOW);
      }
    }
}
