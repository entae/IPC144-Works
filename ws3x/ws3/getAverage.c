//
//  getAverage.c
//  ws3
//
//  Created by Intae Chung on 2023-02-01.
//

#include <stdio.h>

int getNumberOfStudents(void);

int getAverage(int NumberOfStudents) {
    int loop;
    int mark;
    int sum;
    int m;
    loop = 0;
    sum = 0;
    m = getNumberOfStudents();
    printf("Enter %d student marks...\n", m);
    while (loop < m) {
        printf("%d> ", loop);
        scanf("%d", &mark);
        if (mark <0){
            printf("Invalid Mark, values should be greater than or equal 0.\n");
        } else if (mark > 100) {
            printf("Invalid Mark, values should be less than or equal to 100.\n");
            }
        else {
            loop++;
            sum += loop;
        }
        }
    return sum / m;
    //the division of sum by the number of students
    }
