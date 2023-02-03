//
//  main.c
//  ws3
//
//  Created by Intae Chung on 2023-02-01.
//  In Tae Chung, itchung@myseneca.ca, 128 958 220
//  Completed on:

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getNoOfStudents(void);
int getAverage(int NumberOfStudents);
void printReport(int NumberOfStudents, int average);

int main(void) {
   int num;
   int average;
   printf("Class test marks report program...\n\n");
   num = getNoOfStudents();
   average = getAverage(num);
   printReport(num, average);
   return 0;
}
