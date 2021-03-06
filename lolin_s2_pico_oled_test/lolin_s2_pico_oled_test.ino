#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
// use this to make the image arrayhttps://javl.github.io/image2cpp/

static const uint8_t image_1[1024] = {
// 'teste', 128x64px
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xfe, 0x00, 0x03, 0x80, 0x00, 0xfc, 0x00, 0x3f, 0x00, 0x01, 0xc0, 0x00, 0x7f, 0xff, 0xff, 
0xff, 0xfe, 0x00, 0x03, 0x80, 0x00, 0xfc, 0x00, 0x3f, 0x00, 0x01, 0xc0, 0x00, 0x7f, 0xff, 0xff, 
0xff, 0xfe, 0x00, 0x03, 0x80, 0x00, 0xfc, 0x00, 0x3f, 0x00, 0x01, 0xc0, 0x00, 0x7f, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xe3, 0xff, 0xc7, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xe3, 0xff, 0xc7, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xe3, 0xff, 0xc7, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xe3, 0xff, 0xff, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xe3, 0xff, 0xff, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xe3, 0xff, 0xff, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x80, 0x07, 0xfc, 0x00, 0x3f, 0xfc, 0x7f, 0xc0, 0x03, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x80, 0x07, 0xfc, 0x00, 0x3f, 0xfc, 0x7f, 0xc0, 0x03, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x80, 0x07, 0xfc, 0x00, 0x3f, 0xfc, 0x7f, 0xc0, 0x03, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xc7, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xc7, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xc7, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xc7, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xc7, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xc7, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xe3, 0xff, 0xc7, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xe3, 0xff, 0xc7, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x8f, 0xff, 0xe3, 0xff, 0xc7, 0xfc, 0x7f, 0xc7, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x80, 0x00, 0xfc, 0x00, 0x3f, 0xfc, 0x7f, 0xc0, 0x00, 0x7f, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x80, 0x00, 0xfc, 0x00, 0x3f, 0xfc, 0x7f, 0xc0, 0x00, 0x7f, 0xff, 0xff, 
0xff, 0xff, 0xf8, 0xff, 0x80, 0x00, 0xfc, 0x00, 0x3f, 0xfc, 0x7f, 0xc0, 0x00, 0x7f, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};
 
void setup() {
  // Start I2C Communication SDA = 5 and SCL = 4 on Wemos Lolin32 ESP32 with built-in SSD1306 OLED
  // Start I2C Communication SDA = 8 and SCL = 9 on ESP S2 pico v1.0.0-lolin  SSD1306 OLED
  Serial.begin(9600);
  Wire.begin(8, 9);
  delay(1000); // Pause for 1 seconds
   if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) { // Address 0x3C for 128x32
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
 
  // Clear the buffer.
  display.clearDisplay();
  
  // Draw bitmap on the screen
  display.drawBitmap(0, 0, image_1, 128, 64, 1);
  display.display();
}
 
void loop() {
  
}
