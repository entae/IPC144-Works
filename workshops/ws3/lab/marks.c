//
//  marks.c
//  ws3
//
//  Created by Intae Chung on 2023-02-01.
//  In Tae Chung, itchung@myseneca.ca, 128 958 220
//  Completed on:

#include <stdio.h>

void prnGrade(int mark) {
    if (mark >= 0 && mark <50) {printf("F");
    } else if
        (mark >=50 && mark <55) {printf("D");
    } else if
        (mark >=55 && mark <60) {printf("D+");
    } else if
        (mark >=60 && mark <65) {printf("C");
    } else if
        (mark >=65 && mark <70) {printf("C+");
    } else if
        (mark >=70 && mark <75) {printf("B");
    } else if
        (mark >=75 && mark <80) {printf("B+");
    } else if
        (mark >=80 && mark <90) {printf("A");
    } else if
        (mark >=90 && mark <=100) {printf("A+");
    }
}

int getNoOfStudents(void){
    int NumberOfStudents;
    NumberOfStudents = 0;
    printf("Please enter the number of students: ");
    scanf("%d", &NumberOfStudents);
    return NumberOfStudents;
}

int getAverage(int NumberOfStudents) {
    int loop;
    int mark;
    int sum;
    int average;
    sum = 0;
    loop = 0;
    printf("Enter %d student marks...\n", NumberOfStudents);
    while (loop < NumberOfStudents) {
        printf("%d> ", loop+1);
        scanf("%d", &mark);
        
        if (mark < 0) {
            printf("Invalid Mark, values should be greater than or equal 0.\n");
        } else if (mark > 100) {
            printf("Invalid Mark, values should be less than or equal to 100.\n");
        } else {
            
            loop++;
            sum += mark;
        }
    }
    average = sum/NumberOfStudents;
    return average;
}

void printReport(int NumberOfStudents, int average) {
    printf("Number of students: %d\n", NumberOfStudents);
    printf("Class average: %d%% (", average);
    prnGrade(average);
    putchar(')');
    putchar('\n' );
}
