//
//  classList.c
//  diy
//
//  Created by Intae Chung on 2023-02-20.
//

#include<stdio.h>
#include "classList.h"
#include "utils.h"
void getStudentInfo(int studentNumbers[], int marks[], int noOfStudents) {
   int i;
   printf("Please enter %d student marks:\n", noOfStudents);
   for(i = 0; i < noOfStudents; i++) {
      printf("%d of %d:\n", i + 1, noOfStudents);
      printf("Student Number: ");
      studentNumbers[i] = getMMInt(9999, 1000000, "Student Number");
      printf("Mark: ");
      marks[i] = getMMInt(0, 100, "Mark");
   }
}
void subjectMarksReport(void) {
    char subjectCode[10];
    int studentNumbers[50];
    int marks[100];
    int noOfStudents;
    int i, sum = 0, avg, low = 100, high = 0;
    
    printf("Enter subject Name: ");
    scanf("%s", subjectCode);
    printf("Enter Number of students (max 50): ");
    noOfStudents = getMMInt(1, 50, "Number of Students");
    getStudentInfo(studentNumbers, marks, noOfStudents);

        printf("\n");
        printf(" SUBJECT MARKS REPORT!\n"
               " +-------------------+\n");
        printf(" | %-18s|\n", subjectCode);
        printf(" +---+--------+------+\n");
        printf(" |Row| Std No | mark |\n");
        printf(" +---+--------+------+\n");
    for (i = 0; i < noOfStudents; i++) {
        printf(" | %d | %06d | %4d |\n", i+1, studentNumbers[i], marks[i]);
            sum += marks[i];
        while (low > marks[i]) {
            low = marks[i];
        }
        while (high < marks[i]) {
            high = marks[i];
        }
    }
    avg = sum / noOfStudents;
    printf(" +---+--------+------+\n");
    printf(" | Average    |%5d |\n", avg);
    printf(" | Highest    |%5d |\n", high);
    printf(" | Lowest     |%5d |\n", low);
    printf(" +------------+------+\n");
}
