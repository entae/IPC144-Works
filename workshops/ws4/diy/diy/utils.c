//
//  utils.c
//  diy
//
//  Created by Intae Chung on 2023-02-12.
//
/***********************************************************************
// IPC Workshop 4 p1: utils module
//
// File    utils.c
// Author  Fardad Soleimanloo
// Description
//
// this is the utils module developed in class on Feb 7th 2023
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
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
   int value = 0;
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
void line(char fill, int len) {
   int i;
   for(i = 0; i < len; i++) {
      putchar(fill);
   }
   if(len > 0) putchar('\n');
}
void lineln(char fill, int len) {  // good thing to have
   int i;
   for(i = 0; i < len; i++) {
      putchar(fill);
   }
   putchar('\n');
}
int yes(void) {
   char resp;
   printf("(Y)es or (N)o: ");
   resp = getSingleChar();
   return (resp == 'Y' || resp == 'y');
}
