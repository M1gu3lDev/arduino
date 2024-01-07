// C++ code
//

 
#define LED1 10
#define LED2  9
#define LED3  8

void setup()
{
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void pisca(int LH, int L1, int L2)
{
	digitalWrite(LH,HIGH);
	digitalWrite(L1,LOW);
	digitalWrite(L2,LOW);
	delay(3000);
}

void loop()
{
  //vermelho
  pisca(LED1,LED2,LED3);
  //amarelo
  pisca(LED2,LED1,LED3);
  //verde
  pisca(LED3,LED2,LED1);
 
}
