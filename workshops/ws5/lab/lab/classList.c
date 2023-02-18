//
//  classList.c
//  lab
//
//  Created by Intae Chung on 2023-02-17.
//

#include<stdio.h>
#include "classList.h"

void printReport(const char subjectCode[], const int studentNumbers[],
                 const int marks[], int noOfStudents) {
    //add four integer variables: a variable for your loop counter, the average mark, lowest mark, and highest mark
    int i, sum = 0, avg, low = 100, high = 0;
    printf("SUBJECT MARKS REPORT!\n"
           "  +---------------+\n");
    printf("  | %-14s|\n", subjectCode);
    printf("  +--------+------+\n"
           "  | Std No | mark |\n"
           "  +--------+------+\n");
    for (i = 0; i < noOfStudents; i++) {
        printf("  | %06d | %4d |\n", studentNumbers[i], marks[i]);
        sum += marks[i];
        while (low > marks[i]) {
            low = marks[i];
        }
        while (high < marks[i]) {
            high = marks[i];
        }
    }
    avg = sum / noOfStudents;
    printf("  +--------+------+\n");
    printf("  |Average |%6d|\n", avg);
    printf("  |Highest |%6d|\n", high);
    printf("  |Lowest  |%6d|\n", low);
    printf("  +--------+------+\n");
}
    
    
