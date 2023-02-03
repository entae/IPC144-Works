//
//  marks.c
//  ws3
//
//  Created by Intae Chung on 2023-02-01.
//  In Tae Chung, itchung@myseneca.ca, 128 958 220
//  Completed on:

#include <stdio.h>

void prnGrade(int mark) {
    if (mark >= 0 && mark <50) { printf("F\n");
    } else if
        (mark >=50 && mark <55) { printf("D\n");
    } else if
        (mark >=55 && mark <60) { printf("D+\n");
    } else if
        (mark >=60 && mark <65) { printf("C\n");
    } else if
        (mark >=65 && mark <70) { printf("C+\n");
    } else if
        (mark >=70 && mark <75) { printf("B\n");
    } else if
        (mark >=75 && mark <80) { printf("B+\n");
    } else if
        (mark >=80 && mark <90) {printf("A\n");
    } else if
        (mark >=90 && mark <=100) { printf("A+\n");
    }
}

int getNoOfStudents(void){
    int m;
    m = 0;
    printf("Please enter the number of students: ");
    scanf("%d", &m);
    return m;
}
