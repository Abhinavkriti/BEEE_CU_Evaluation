void setup()
	{
	  pinMode(2, OUTPUT);
	  pinMode(12,OUTPUT);
	  pinMode(13,INPUT);
	  pinMode(4,INPUT);
	  Serial.begin(9600);
	}
	

	void loop()
	{
	  float d,t;
	  digitalWrite(12,HIGH);
	  delayMicroseconds(10);
	  digitalWrite(12,LOW);
	  t=pulseIn(13,HIGH);
	  d=0.017*t;
	  Serial.print("Distance");
	  Serial.print(d);
	  if(d>0)
	  {
	    for(int i=0;i<256;i++)
	    {
	      analogWrite(5,i);
	      delay(10);
	    }
	   }
	  else if(d<0)
	  {
	    analogWrite(5,0);
	  }
	   float dd,tt;
	  digitalWrite(2,HIGH);
	  delayMicroseconds(10);
	  digitalWrite(2,LOW);
	  t=pulseIn(4,HIGH);
	  dd=0.017*tt;
	  Serial.print("Distance");
	  Serial.print(dd);
	  if(dd>0)
	  {
	    for(int i=0;i<256;i++)
	    {
	      analogWrite(9,i);
	      delay(20);
	    }
	   }
	  else if(dd<0)
	  {
	    analogWrite(9,0);
	  }
	}

