#include "TXlib.h"
void wheels();
int main()
{
 txCreateWindow(1500,700);
 txSetFillColor(RGB(0,255,255));
 txRectangle(0,0,1500,700);

 txSetColor(TX_BLACK,5);
 txSetFillColor(TX_BROWN);
 txRectangle(530,200,750,300);
 txRectangle(428,300,873,414);
 txRectangle(751,230,1006,248);

 wheels();

 return 0;
}

void wheels()
{
 int x = 635-157;
 int y = 454;
 int r = 33;
 txCircle(x,y,r);

 int number = 0;

 while (number < 4)
 {
 x = x + ((r * 2) + 20);
  txCircle(x, y, r);
  number ++;
 }

 x = 635-157;

 txCircle(x - 40, y - 25, r- 25);
 txCircle(x + 42.5, y - 25, r - 25);
 txCircle(x + (150*2), y - 25, r - 25);
 txCircle(x + ((150*2) + (r*2)) + 17.5, y - 25, r - 25);
}
