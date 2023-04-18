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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "PosApp.h"
void fileDump(const char* filename);
int main() {
   fileDump("posdata.csv");
   loadItems("posdata.csv");
   saveItems("posdata_out.csv");
   fileDump("posdata_out.csv");
   return 0;
}

void fileDump(const char* filename) {
   FILE* fptr= fopen(filename, "r");
   if(fptr) {
      char ch=0;
      printf("Contents of file >>%s<<:\n",filename);
      while(fscanf(fptr, "%c", &ch) == 1) {
         putchar(ch);
      }
      fclose(fptr);
      printf("End of data in >>%s<<\n", filename);
   }
   else {
      printf("file: >>%s<< not found!\n", filename);
   }
}
