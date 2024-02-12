/*
www.quadstore.in
** NOTE: Tested on Arduino Uno whose I2C pins are A4==SDA, A5==SCL
*/

#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR    0x3F  // <<----- Replace your address here by scanning your i2c display using i2c scanner program to find the code
#define BACKLIGHT_PIN     3
#define En_pin  2
#define Rw_pin  1
#define Rs_pin  0
#define D4_pin  4
#define D5_pin  5
#define D6_pin  6
#define D7_pin  7

int n = 1;

LiquidCrystal_I2C  lcd(I2C_ADDR,En_pin,Rw_pin,Rs_pin,D4_pin,D5_pin,D6_pin,D7_pin);

void setup()
{
 lcd.begin (16,2); //  <<----- My LCD was 16x2

 
// Switch on the backlight
lcd.setBacklightPin(BACKLIGHT_PIN,POSITIVE);
lcd.setBacklight(HIGH);
lcd.home (); // go home

 lcd.print("hello, World!");  
}

void loop()
{
 // Backlight on/off every 3 seconds
 lcd.setCursor (0,1);        // go to start of 2nd line
 lcd.print(n++,DEC);
 lcd.setBacklight(LOW);      // Backlight off
 delay(1000);
 lcd.setBacklight(HIGH);     // Backlight on
 delay(2000);
}
