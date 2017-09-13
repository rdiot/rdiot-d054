/* OLED 0.91 I2C 128x32 White (SSD1306) [D054] : http://rdiot.tistory.com/302 [RDIoT Demo] */

#include "U8glib.h"
U8GLIB_SSD1306_128X32 u8g(U8G_I2C_OPT_NONE); 

void setup() {
}

void loop(void) {
  // picture loop
  u8g.firstPage();  
  do {
    draw();
  } while( u8g.nextPage() );
  
  // rebuild the picture after some delay
  delay(500);
}

void draw(void) {
  u8g.setFont(u8g_font_9x15B);
  u8g.setPrintPos(0, 12); 
  u8g.println("OLED 0.91");

  u8g.setFont(u8g_font_helvB14);
  u8g.setPrintPos(0,30);

  int var = 0;
  u8g.print("128x32");
}
