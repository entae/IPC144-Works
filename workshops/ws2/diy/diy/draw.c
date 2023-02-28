//
//  main.c
//  draw.c
//
//  Created by Intae Chung on 2023-01-30.
//

#include <stdio.h>

void line(char left, char middle , char right,int width) {
   int w = 0;
   putchar(right);
   while(w < width - 2) {
      putchar(middle);
      w++;
   }
   putchar(left);
   putchar('\n');
}
void rectangle(char leftTop, char top, char topRight,
               char right,char rightButtom, char buttom,
               char buttomLeft, char left, char fill,
               int width, int height) {
    char leftT = leftTop;  // no need for variables
    char t = top;
    char rightT = topRight;
    char r = right;
    char buttomR = rightButtom;
    char b = buttom;
    char buttomL = buttomLeft;
    char l = left;
    char f = fill;
    int w = width;
    int h = height;
    
    line(leftT, t, rightT, width);
    h = 0;
    while (h < height-2)  {
        printf("%c",l);
        w = 0;
        while (w < width-2) {
            printf("%c",f);
            w++;
        }
        printf("%c", r);
        h++;
        printf("\n");
    }
    printf("%c",buttomL);
    w = 0;
    while (w < width-2) {
        printf("%c", b);
        w++;
    }
    printf("%c",buttomR);
    printf("\n");
}
