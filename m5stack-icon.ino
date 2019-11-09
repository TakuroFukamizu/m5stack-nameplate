#include <M5Stack.h>
#include "tw.h"
#include "gh.h"
#include "wc.h"

uint8_t mode = 0;

void showTwIcon() {
  M5.Lcd.drawBitmap(48, 0, imgTwWidth, imgTwHeight, imgTw);
  M5.Lcd.setCursor(0, 220);
  M5.Lcd.setTextSize(2);
  M5.Lcd.print("Twitter: @uzuki_aoba   ");
  mode = 0;
}

void showGhIcon() {
  M5.Lcd.drawBitmap(50, 0, imgGhWidth, imgGhHeight, imgGh);
  M5.Lcd.setCursor(0, 220);
  M5.Lcd.setTextSize(2);
  M5.Lcd.print("Github: TakuroFukamizu ");
  mode = 1;
}

void showWcIcon() {
  M5.Lcd.drawBitmap(50, 0, imgWcWidth, imgWcHeight, imgWc);
  M5.Lcd.setCursor(0, 220);
  M5.Lcd.setTextSize(2);
  M5.Lcd.print("WeChat: takurof1987    ");
  mode = 2;
}


void setup() {
  M5.begin();
//  M5.Lcd.drawJpgFile(SD, "/miku.jpg");
  showTwIcon();
}

void loop() {
  M5.update();

  if(M5.BtnA.wasPressed()) {
    if(mode != 0) showTwIcon();    
  } else if(M5.BtnB.wasPressed()) {
    if(mode != 1) showGhIcon();
  } else if(M5.BtnC.wasPressed()) {
    if(mode != 2) showWcIcon();
  }
  delay(1000);
}
