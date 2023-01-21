//
//  main.c
//  lab
//
//  Created by Intae Chung on 2023-01-20.
//

#include <stdio.h>

void title(void);
void info(void);
void line(void);

int main(void) {
    title();
    line();
    info();
    line();
    
    return 0;
}

void title(void) {
    printf("IPC144 NBB\tWorkshop 1\tPart 1\n");
}

void line(void) {
    printf("------------------------------------------------------------\n");
}

void info(void) {
    printf("Name:\n\tIn Tae Chung\nEmail:\n\titchung@myseneca.ca\n");
}
