
int butpin=2;
int ledpin=13;
int butstate=0;

void setup() {
  // put your setup code here, to run once:
pinMode(butpin,INPUT);
pinMode(ledpin,OUTPUT);
digitalWrite(butpin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
butstate=digitalRead(butpin);
if(butstate==HIGH){
  digitalWrite(ledpin,HIGH);
  }
  else{
    digitalWrite(ledpin,LOW);
    }
}
