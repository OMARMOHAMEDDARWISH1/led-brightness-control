int counter=0;
int counter1=0;
void setup()
{
pinMode(6,OUTPUT);
pinMode(7,INPUT);
pinMode(4,INPUT);
}
void loop()
{
int Bi = digitalRead(7);
int Bj = digitalRead(4);
  
   if(Bi == 1)
  {
    counter++;
switch (counter)
{   

case 1:
  analogWrite(6,0 );
  break;
  case 2: 
  analogWrite(6,25 ); break;
  case 3:
  analogWrite(6,125); break;
  case 4:
  analogWrite(6, 150); break;
  default:
  analogWrite(6,255 );
  break;
  

}
    while(digitalRead(7) == 1);
}
   if(Bj == 1)
   {
     counter1++;
  switch (counter1)
{     

case 1:
  analogWrite(6, 255);
  break;
  case 2: 
  analogWrite(6,150 ); break;
  case 3:
  analogWrite(6, 125); break;
  case 4:
  analogWrite(6, 25); break;
default :
    analogWrite(6, 0); 
    break;

}
     while(digitalRead(4) == 1);
}
  
}