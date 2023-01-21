#include "IRremote.h"

IRrecv irrecv(2); // указываем вывод, к которому подключен приемник

decode_results results;

const int resault_open=3;
const int resault_close=4;
const int button_open=6;
const int button_close=7;
void setup() 
{
  pinMode(resault_open, OUTPUT);
  pinMode(resault_close, OUTPUT);
  pinMode(button_open, INPUT);
  pinMode(button_close, INPUT);
  irrecv.enableIRIn(); // запускаем прием
  Serial.begin(9600);
  butt1 = digitalRead(6);
  butt2 = digitalRead(7);
}

void loop() 
{ 

  if ( irrecv.decode( &results )) 
  {
   // Serial.println(results.value);
   // digitalWrite(resault_close, LOW );
    if (results.value == 16753245 || butt1 == HIGH){
      digitalWrite(resault_open, HIGH );
      digitalWrite(resault_close, LOW );
    }
    if (results.value == 16769565 || butt2 == HIGH){ 
      digitalWrite(resault_open, LOW );
      digitalWrite(resault_close, HIGH );
    
  //  switch ( results.value ) 
 //   {
  //  case 16753245:
    //    digitalWrite(resault_open, HIGH );
    //    digitalWrite(resault_close, LOW );
    //    break;
   // case 16769565:
    //    digitalWrite(resault_open, LOW );
    //    digitalWrite(resault_close, HIGH );
     //   break;
   
    }
Serial.println(button_open);
//Serial.println()
    irrecv.resume(); // принимаем следующую команду
  }
}
