#include <LCDWIKI_GUI.h> 
#include <LCDWIKI_KBV.h> 
LCDWIKI_KBV mylcd(ILI9486,A3,A2,A1,A0,A4); 
#define  BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

void setup() 
{
  mylcd.Init_LCD();
  mylcd.Fill_Screen(BLACK);
  mylcd.Set_Text_Mode(1);
  mylcd.Fill_Screen(0x0000);
  mylcd.Set_Text_colour(GREEN);
  mylcd.Set_Text_Size(5);
  mylcd.Print_String("HELLO", 0, 0);
  mylcd.Set_Text_colour(GREEN);
  mylcd.Set_Text_Size(5);
  mylcd.Print_String("WORLD!", 0, 40);
}

void loop() 
{}
