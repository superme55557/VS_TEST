#include <Servo.h>
Servo servo1; //宣告伺服馬達
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;
Servo servo7;
Servo servo8;
Servo servo9;
Servo servo10;
Servo servo11;
Servo servo12;
//常數宣告，宣告I/O腳號
const int coin = 12; //投幣微動2
const int button = 22; // 按鈕
const int button2 = 24;
const int button3 = 26;
const int button4 = 28;
const int button5 = 30;
const int button6 = 32;
int coinState=-1;
const int led = 7; //LED
const int led2 = 6;
const int led3 = 5;
const int led4 = 4;
const int led5 = 3;
const int led6 = 2;

const int SG1 =  42; // 馬達
const int SG2 =  44;
const int SG3 =  46;
const int SG4 =  48;
const int SG5 =  50;
const int SG6 =  52;
const int SG7 =  43;
const int SG8 =  45;
const int SG9 =  47;
const int SG10 =  49;
const int SG11 =  51;
const int SG12 =  53;

//****led 低準位觸發
//****button 高準位觸發
//****coin 低準位觸發

//變數宣告，執行期間數值會改變
//boolean coinState; //宣告讀取按鍵狀態的變數
int buttonState =LOW;
int button2State=LOW;
int button3State=LOW;
int button4State=LOW;
int button5State=LOW;
int button6State=LOW;

boolean ledState  = LOW; //宣告LED的狀態，一開始預設為不亮(低準位觸發)
boolean led2State = LOW;
boolean led3State = LOW;
boolean led4State = LOW;
boolean led5State = LOW;
boolean led6State = LOW;

void setup(){
  //Serial.begin(9600);
  servo1.attach(SG1);
  servo1.write(10);
  servo2.attach(SG2);
  servo2.write(90);
  servo3.attach(SG3);
  servo3.write(0);
  servo4.attach(SG4);
  servo4.write(90);
  servo5.attach(SG5);
  servo5.write(0);
  servo6.attach(SG6);
  servo6.write(90);
  servo7.attach(SG7);
  servo7.write(0);
  servo8.attach(SG8);
  servo8.write(90);
  servo9.attach(SG9);
  servo9.write(0);
  servo10.attach(SG10);
  servo10.write(90);
  servo11.attach(SG11);
  servo11.write(0);
  servo12.attach(SG12);
  servo12.write(90);
  pinMode(led , OUTPUT); // 初始化LED為輸出
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);

  digitalWrite(led , ledState); //輸出LED狀態至LED，預設為不亮
  digitalWrite(led2, led2State);
  digitalWrite(led3, led3State);
  digitalWrite(led4, led4State);
  digitalWrite(led5, led5State);
  digitalWrite(led6, led6State);

  pinMode(coin ,INPUT);//初始化 按鍵開關 為輸入
  pinMode(button,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(button4,INPUT);
  pinMode(button5,INPUT);
  pinMode(button6,INPUT);

 }

void loop()
{

  coinState = digitalRead(coin); //讀取按鍵開關的狀態
 	Serial.println("coinState");
 	Serial.println(coinState);
 	delay(100);
  //檢查按鍵開關是否被按下，若是，其狀態值為LOW(高準位觸發)
    if (coinState == LOW)
    {
     	

      delay(1000);
      ledState  =! ledState; //將ledState取補數，即HIGH變LOW,LOW變HIGH
      led2State =! led2State;
      led3State =! led3State;
      led4State =! led4State;
      led5State =! led5State;
      led6State =! led6State;
      digitalWrite(led,ledState);//將ledState的值直接輸出至LED
      digitalWrite(led2,led2State);
      digitalWrite(led3,led3State);
      digitalWrite(led4,led4State);
      digitalWrite(led5,led5State);
      digitalWrite(led6,led6State);
      Serial.println(ledState);
      Serial.println(led2State);
      Serial.println(led3State);
      Serial.println(led4State);
      Serial.println(led5State);
      Serial.println(led6State);

      
      buttonState  = digitalRead(button);
      button2State = digitalRead(button2);
      button3State = digitalRead(button3);
      button4State = digitalRead(button4);
      button5State = digitalRead(button5);
      button6State = digitalRead(button6);
      Serial.println(buttonState); 
      Serial.println(button2State); 
      Serial.println(button3State); 
      Serial.println(button4State); 
      Serial.println(button5State); 
      Serial.println(button6State); 
      
    while(1)
    {
      if(buttonState==HIGH)
      {
        servo1.write(90);
        delay(500);
        servo1.write(10);
        delay(500);
        /*Serial.println(buttonState);
        delay(2000);*/
        break;
      }
      else if(button2State==HIGH)
      {
        servo2.write(0);
        delay(500);
        servo2.write(90);
        delay(500);
       
        break;
      }
      else if(button3State==HIGH)
      {       
        servo3.write(90);
        delay(500);
        servo3.write(0);
        delay(500);
        
        break;
      }
      else if(button4State==HIGH)
      {
        servo4.write(0);
        delay(500);
        servo4.write(90);
        delay(500);
        
        break;
      }
      else if(button5State==HIGH)
      {
        servo5.write(90);
        delay(500);
        servo5.write(0);
        delay(500);
         
        break;
      }
      else if(button6State==HIGH)
      {
        servo6.write(0);
        delay(500);
        servo6.write(90);
        delay(500);
                
        break;
      }       

    }
     
    ledState =! ledState; //將ledState取補數，即LOW變HIGH,HIGH變LOW
    led2State =! led2State;
    led3State =! led3State;
    led4State =! led4State;
    led5State =! led5State;
    led6State =! led6State;

    digitalWrite(led,ledState);
    digitalWrite(led2,led2State);
    digitalWrite(led3,led3State);
    digitalWrite(led4,led4State);
    digitalWrite(led5,led5State);
    digitalWrite(led6,led6State);
    delay(20);
    
  
  }
  

    
}


