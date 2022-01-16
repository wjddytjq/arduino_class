#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  // put your setup code here, to run once:
  lcd.init();
  lcd.backlight();
  Serial.begin(9600);
}

int i=15;
int e=i+3;
int d=e+3;
int f=d+3;
int g=f+3;

int c=0;

void loop() {
  // put your main code here, to run repeatedly:  
 
  lcd.clear();
  
  lcd.setCursor(0,c);
  lcd.print("0");
  
  lcd.setCursor(i,0);
  lcd.print("<");
  
  lcd.setCursor(e,1);
  lcd.print("<");
  
  lcd.setCursor(d,1);
  lcd.print("<");
  
  lcd.setCursor(f,0);
  lcd.print("<");
  
  lcd.setCursor(g,1);
  lcd.print("<");

  delay(300);

  if(i>0){
    i--;
  }
  else{
    i=15;
    }
    
  if(e>0){
    e--;
  }
  else{
    e=15;
    }
    
  if(d>0){
    d--;
  }
  else{
    d=15;
    }

  if(f>0){
    f--;
  }
  else{
    f=15;
    }
    
  if(g>0){
    g--;
  }
  else{
    g=15;
    }

  if(analogRead(A0)>700){
   c=1;
  }
  else if(analogRead(A0)<300){
   c=0;
   }

  switch (c){
    case 0:
     switch (i){
      case 0:
       Serial.print("game-over");
       lcd.init();
       lcd.setCursor(0,0);
       lcd.print("game-over");
       delay(100);
       exit(0);
       break;
     }
     switch (f){
      case 0:
       Serial.print("game-over");
       lcd.init();
       lcd.setCursor(0,0);
       lcd.print("game-over");
       delay(100);
       exit(0);
       break;
     }
     break;
  }

  switch (c){
    case 1:
     switch (e){
      case 0:
       Serial.print("game-over");
       lcd.init();
       lcd.setCursor(0,0);
       lcd.print("game-over");
       delay(100);
       exit(0);
       break;
     }
     switch (d){
      case 0:
       Serial.print("game-over");
       lcd.init();
       lcd.setCursor(0,0);
       lcd.print("game-over");
       delay(100);
       exit(0);
       break;
     }
     switch (g){
      case 0:
       Serial.print("game-over");
       lcd.init();
       lcd.setCursor(0,0);
       lcd.print("game-over");
       delay(100);
       exit(0);
       break;
     }
     break;
  }
}
