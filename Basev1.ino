uint8_t buf[8] = { 0 };

#define PIN_Q 4
#define PIN_W 5
#define PIN_E 6
#define PIN_R 7
#define PIN_T 8
#define PIN_Y 9
#define PIN_U 10
#define PIN_I 11
#define PIN_O 12
#define PIN_P 13
#define PIN_BRK 14
#define PIN_A 15
#define PIN_S 16
#define PIN_D 17
#define PIN_F 18
#define PIN_G 19
#define PIN_H 20
#define PIN_J 21
#define PIN_K 22
#define PIN_COL 23
#define PIN_DOT 24
#define PIN_C 25
#define PIN_V 26
#define PIN_N 27
#define PIN_M 28

void setup(){
  Serial.begin(9600);

  pinMode(PIN_Q,INPUT);
  pinMode(PIN_W,INPUT);
  pinMode(PIN_E,INPUT);
  pinMode(PIN_R,INPUT);
  pinMode(PIN_T,INPUT);
  pinMode(PIN_Y,INPUT);
  pinMode(PIN_U,INPUT);
  pinMode(PIN_I,INPUT);
  pinMode(PIN_O,INPUT);
  pinMode(PIN_P,INPUT);
  pinMode(PIN_BRK,INPUT);
  pinMode(PIN_A,INPUT);
  pinMode(PIN_S,INPUT);
  pinMode(PIN_D,INPUT);
  pinMode(PIN_F,INPUT);
  pinMode(PIN_G,INPUT);
  pinMode(PIN_H,INPUT);
  pinMode(PIN_J,INPUT);
  pinMode(PIN_K,INPUT);
  pinMode(PIN_COL,INPUT);
  pinMode(PIN_DOT,INPUT);
  pinMode(PIN_C,INPUT);
  pinMode(PIN_V,INPUT);
  pinMode(PIN_N,INPUT);
  pinMode(PIN_M,INPUT);
}

void releaseKey(){
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8);
}

void loop(){
  if(digitalRead(PIN_Q) == HIGH){
    buf[2]= 20;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_W) == HIGH){
    buf[2]= 26;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_E) == HIGH){2
    buf[2]= 8;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_R) == HIGH){
    buf[2]= 21;
    Serial.write(buf, 8);
    releaseKey();
  }
  
  if(digitalRead(PIN_T) == HIGH){
    buf[2]= 23;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_Y) == HIGH){
    buf[2]= 28;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_U) == HIGH){
    buf[2]= 24;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_I) == HIGH){
    buf[2]= 12;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_O) == HIGH){
    buf[2]= 18;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_P) == HIGH){
    buf[2]= 19;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_BRK) == HIGH){
    buf[2]= 47;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_A) == HIGH){
    buf[2]= 4;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_S) == HIGH){
    buf[2]= 22;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_D) == HIGH){
    buf[2]= 7;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_F) == HIGH){
    buf[2]= 9;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_G) == HIGH){
    buf[2]= 10;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_H) == HIGH){
    buf[2]= 11;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_J) == HIGH){
    buf[2]= 13;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_K) == HIGH){
    buf[2]= 14;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_L) == HIGH){
    buf[2]= 15;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_COL) == HIGH){
    buf[2]= 51;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_DOT) == HIGH){
    buf[2]= 52;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_C) == HIGH){
    buf[2]= 6;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_V) == HIGH){
    buf[2]= 25;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_N) == HIGH){
    buf[2]= 17;
    Serial.write(buf, 8);
    releaseKey();
  }

  if(digitalRead(PIN_M) == HIGH){
    buf[2]= 16;
    Serial.write(buf, 8);
    releaseKey();
  }
}

void releaseKey(){
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf,8);
}
