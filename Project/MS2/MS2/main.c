//
//  Created by In Tae Chung, 128 958 220, itchung@myseneca.ca
//
/*********************************************************************/
// Final Project
// Student POS App tester program
// Version 1.0
// Date    2023-04-01
// Author    Fardad Soleimanloo
// Description
// This program test the student implementation of the Item class
// for submission.
//
/* Citation and Sources
 MS2
 void cpyString(char* des, const char* src, int size) uitls.c referenced in PosApp.c
 Classmate Emily Fagin showed me this function as a way of copying one string variable to another without the use of strncpy from the <string.h> library and gave me permission to incorporate it into my code
 */
/////////////////////////////////////////////////////////////////
#include "PosApp.h"
int main() {
   struct Item I[6] = {
      {"3695","Honeydew Melon",5.99,0,20},
      {"1679","Jack's Apple Juice",1.50,0,80},
      {"6539","Joe's Organic Potato Chips",3.29,1,15},
      {"9462","Kiwifruit",0.50,0,123 },
      {"4297","Lays Chips S&V",3.69,1,1},
      {"1234","Milk",3.99,0,1}
   };
   int i;
   double total = 0;
   printf("  Name                Price  taxed\n");
   for(i = 0; i < 6; i++) {
      total += billDisplay(&I[i]);
   }
   printf("total: %.2lf", total);
   return 0;
}

