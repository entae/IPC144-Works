//
//  main.c
//  draw.c
//
//  Created by Intae Chung on 2023-01-30.
//

#include <stdio.h>

void rectangle(char leftTop, char top, char topRight,
               char right,char rightButtom, char buttom,
               char buttomLeft, char left, char fill,
               int width, int height) {
    char leftT = leftTop;
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
    
    printf("%c",leftT);
    w = 0;
    while (w < width-2) {
        printf("%c", t);
        w++;
    }
    printf("%c",rightT);
    printf("\n");
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
