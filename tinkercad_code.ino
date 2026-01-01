// C++ code
//
void setup()
{
  pinMode(PIN1, OUTPUT);
  pinMode(PIN2, OUTPUT);
  pinMode(PIN3, OUTPUT);
  pinMode(PIN6, OUTPUT);
  pinMode(PIN7, INPUT);
}

void loop()
{
  static int mode = 0;
  static bool pressed = false;
  if (digitalRead(PIN7) == HIGH && !pressed)
  {
    pressed = true;
    if (mode==7)
    {
      mode=0;      
    }
    else if (mode!=7)
    {
      mode=mode+1;  
    }
    
  }
  else if (digitalRead(PIN7) == LOW)
	{
   	 	pressed = false;      // reset when button released
	}
  switch (mode)
  { case 0:
      digitalWrite(PIN1, LOW);
      digitalWrite(PIN2, LOW);
      digitalWrite(PIN3, LOW);
   break;
    case 1:
      digitalWrite(PIN1, HIGH);
      digitalWrite(PIN2, LOW);
      digitalWrite(PIN3, LOW);
   break;
    case 2:
      digitalWrite(PIN1, LOW);
      digitalWrite(PIN2, HIGH);
      digitalWrite(PIN3, LOW);
   break;
    case 3:
      digitalWrite(PIN1, HIGH);
      digitalWrite(PIN2, HIGH);
      digitalWrite(PIN3, LOW);
   break;
 	case 4:
      digitalWrite(PIN1, LOW);
      digitalWrite(PIN2, LOW);
      digitalWrite(PIN3, HIGH);
   break;
    case 5:
      digitalWrite(PIN1, HIGH);
      digitalWrite(PIN2, LOW);
      digitalWrite(PIN3, HIGH);
   break;
    case 6:
      digitalWrite(PIN1, LOW);
      digitalWrite(PIN2, HIGH);
      digitalWrite(PIN3, HIGH);
  	break;
    case 7:
      digitalWrite(PIN1, HIGH);
      digitalWrite(PIN2, HIGH);
      digitalWrite(PIN3, HIGH);
  	break;
  }
    
  //digitalWrite(PIN1, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(PIN2, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(PIN3, HIGH);
  //delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(PIN1, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(PIN2, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
  //digitalWrite(PIN3, LOW);
  //delay(1000); // Wait for 1000 millisecond(s)
}