//
//  main.c
//  lab
//
//  Created by Intae Chung on 2023-02-17.
//

#include <stdio.h>
#include "classList.h"

/*
int main(void) {
   int stno[4] = { 12345, 23456, 345678, 45678 };
   int mark[4] = { 55,66,44,88 };
   printReport("IPC144NBB", stno, mark, 4);
   return 0;
}
 */

int main(void) {
   // create two integer variables for the loop counter
   // and number of students
    int i;
    int noOfStudents;

   // create two integer arrays (size of 50) to hold the
   // marks and the student number of students.
    int marks[50];
    int studentNumbers[50];
    
   // add cString capable of holding 9 characters (+1 for null byte)
   // for the subject code
    char subjectCode[10];
   printf("Enter subject Name: ");
   // read the subject name using scanf
    scanf("%s", subjectCode);


   printf("Enter the number of students (max 50): ");
   // read the number of students
    scanf("%d", &noOfStudents);

   // Prompt the user to enter the student numbers and marks
   // as displayed in the description of the workshop
    printf("Enter %d student numbers and student marks...\n", noOfStudents);


   // write a loop to get each student number and student mark into
   // the elelments of the array as described in the workshop
    for (i =0; i < noOfStudents; i++) {
            printf("%d:\n", i+1);
            printf("Student Number: ");
                scanf("%d", studentNumbers[i]);
            printf("Mark: ");
                scanf("%d", marks[i]);
        }
    
    // Call print report passing the received data.
    printReport(subjectCode, studentNumbers ,marks, noOfStudents);
    
    return 0;
}
