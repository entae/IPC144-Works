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
#include <stdio.h>
#include "PosApp.h"
int main() {
   int i;
   int foundIndex;
   loadItems("posdata.csv");
   for(i = 0; (foundIndex = search()) != -2;i++){
      if(foundIndex >= 0) {
         printf("SKU found at index %d\n", foundIndex);
      }
      else {
         printf("SKU not found!\n");
      }
   }
   printf("Search was executed %d times...", i);
   return 0;
}
