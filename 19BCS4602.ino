const int switchPin = 9; 
int i,switchState = 0,an=0; 
void setup()
{for(i=0;i<=6;i++)
{pinMode(i, OUTPUT); }
    pinMode(switchPin, INPUT);
 Serial.begin(9600);
 
}
void loop()
{an=analogRead(A0);
 Serial.println(an);
    switchState = digitalRead(switchPin);
 if(an>300)
 {if (switchState == 1) 
    {for(i=0;i<=6;i++)
    {digitalWrite(i, HIGH); 
        delay(500); 
     digitalWrite(i, LOW);}}
     else
     {for(i=0;i<=6;i++)
     {digitalWrite(i, HIGH);
        delay(1000); 
     digitalWrite(i, LOW);}
     }}}
