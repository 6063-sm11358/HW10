unsigned long timeKeep;

void setup() {
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  timeKeep = (millis()/1000)%60;
  Serial.println(timeKeep);
  delay(1000);

  if(timeKeep>=10)
  {
    digitalWrite(8,HIGH);
    if(timeKeep>=20)
    {
      digitalWrite(6,HIGH);
      if(timeKeep>=30)
      {
        digitalWrite(5,HIGH);
        if(timeKeep>=40)
        {
          digitalWrite(4,HIGH);
          if(timeKeep>=50)
          {
            digitalWrite(3,HIGH);
            if(timeKeep>=59)
            {
              digitalWrite(2,HIGH);
            }
          }
        }
      }
    }
  }
  else
  {
    digitalWrite(8,LOW);
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
  }
}
