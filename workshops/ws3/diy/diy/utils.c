/***********************************************************************
// IPC Workshop 3 p2: tester program
//
// File    utils.c
// Version 1.0
// Date Winter 2022
// Author  In Tae Chung, itchung@myseneca.ca, 128 958 220
// Description
// Finished on:
***********************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
char getSingleChar(void) {
   char ch = getchar();
   flushKey();
   return ch;
}
int getInt(void) {
   int value;
   int done = 0;
   while (!done) {
      if (scanf("%d", &value) == 1) {
         done = 1;
      }
      else { // user enterd non integer
         flushKey();
         printf("Invalid Integer, try again: ");
      }
   }
   flushKey();
   return value;
}

void flushKey(void) {
   char ch = 'x';
   while (ch != '\n') {
      ch = getchar();
   }
}

int yes(void) {
   int res;
   char resp;
   printf("(Y)es or (N)o: ");
   resp = getSingleChar();
   if (resp == 'Y' || resp == 'y') {
      res = 1;
   }
   else {
      res = 0;
   }
   return res;
}

void line(char fill, int length) {
    int l;
    char c = fill;
    for (l = 0; l < length; l++) {
        printf("%c", c);
        }
        putchar('\n');
    }
