//
//  main.c
//  diy1
//
//  Created by Intae Chung on 2023-01-23.
//

#include <stdio.h>

void title(void);
void info(void);
void line(void);
void marks(void);

int main(void) {
    title();
    line();
    info();
    line();
    
    int score1;
    int score2;
    int score3;
    int avg;
    
    printf("Enter the marks for the following subjects,\nIPC144: ");
    scanf("%d", &score1);
    printf("ULI101: ");
    scanf("%d", &score2);
    printf("EAC150: ");
    scanf("%d", &score3);
    avg = (score1 + score2 + score3)/3;
    printf("The average is: %d\n", avg);
    
    line();
    return 0;
}

void title(void) {
    printf("IPC144 NBB\tWorkshop 1\tPart 2\n");
}

void line(void) {
    int l;
    for (l = 0; l <60; l++) {
        putchar('-');
    }
    putchar('\n');
}

void info(void) {
    printf("Name:\n\tIn Tae Chung\nEmail:\n\titchung@myseneca.ca\n");
}
