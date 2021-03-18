int Relay = 12;
int End = 0;
int Lmp = 2;
int btn1 = 4;
int stt;
int jeda=480000;

void setup() {
  
  stt=1;
  //debug mode
  Serial.begin(9600);
  Serial.println("Pengering: Starting...");
  //debug mode
  
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
  Serial.println("Pengering: Ready");
}
void loop()
{
    if(digitalRead(btn1) == HIGH){
      if(stt==0){
        Serial.println("Pengering: ON");
        digitalWrite(Lmp, HIGH);
        digitalWrite(Relay, LOW);
        //delay(480000);
        delay(jeda);
        stt=1;
        Serial.println("Pengering: OFF");
        digitalWrite(Relay, HIGH);
        digitalWrite(Lmp, LOW);
      }
    }else{
      if(stt==1){
        digitalWrite(Relay, HIGH);
        digitalWrite(Lmp, LOW);
        stt=0;
        delay(500);
        Serial.println("Pengering: Reset-Ready");
      }
    }
    
}
