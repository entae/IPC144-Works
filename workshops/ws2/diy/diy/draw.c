//
//  main.c
//  draw.c
//
//  Created by Intae Chung on 2023-01-30.
//

#include <stdio.h>

void line(char left, char fill , char right, int width) {
    int w = 0;
    putchar(left);
    while(w < width - 2) {
        putchar(fill);
        w++;
   }
   putchar(right);
   putchar('\n');
}
void rectangle(char leftTop, char top, char topRight,
               char right,char rightButtom, char buttom,
               char buttomLeft, char left, char fill,
               int width, int height) {
    int w;
    int h;
    
    line(leftTop, top, topRight, width);
    h = 0;
    while (h < height-2)  {
        line(left, fill, right, width);
        h++;
    }
    line(buttomLeft, buttom, rightButtom, width);
}
