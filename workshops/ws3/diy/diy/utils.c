/***********************************************************************
// IPC Workshop 3 p2: tester program
//
// File    utils.c
// Version 1.0
// Date Winter 2022
// Author  In Tae Chung, itchung@myseneca.ca, 128 958 220
// Description
// Finished on:
***********************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int getInt(void);
int getIntMM(int min, int max);
double getDouble(void);
double getDoubleMM(double min, double max);
void line(char fill, int len);

void line(char fill, int len) {
    int l;
    char c = fill;
    for (l = 0; l < len; l++) {
        printf("%c", c);
        }
        putchar('\n');
    }

void flushKey(void);

int getInt (void) {
    int value = 0;
    int done = 0;
    char ch;
    while(!done) {
        if (scanf("%d%c", &value, &ch) == 2 && ch == '\n') {
            done = 1;
        }
        else if (scanf("%d%c", &value, &ch) != 2 && value == 0) {
            flushKey();
            printf("Invalid Integer, try again: ");
        }
        else if (scanf("%d%c", &value, &ch) != 2 && ch != '\n') {
            flushKey();
            printf("Enter only an integer, try again: ");
        }
    }
    return value;
}

void flushKey(void) {
    char ch = 'x';
    while (ch != '\n') {
        ch = getchar();
    }
}

int getIntMM(int min, int max) {
    int value = 0;
    int done = 0;
    char ch;
    while(!done) {
        if (scanf("%d%c", &value, &ch) == 2 && ch == '\n') {
            if (value <= max && value >= min) {
                done = 1;
            } else {
                printf("[%d<=Number<=%d], try again: ", min, max);
            }
        }
        else if (scanf("%d%c", &value, &ch) != 2 && value == 0) {
            flushKey();
            printf("Invalid Integer, try again: ");
        }
        else if (scanf("%d%c", &value, &ch) != 2 && ch != '\n') {
            flushKey();
            printf("Enter only an integer, try again: ");
        }
    }
    return value;
}

double getDouble(void) {
    double dvalue = 0;
    int done = 0;
    char ch;
    while(!done) {
        if (scanf("%lf%c", &dvalue, &ch) == 2 && ch == '\n') {
            done = 1;
        }
        else if (scanf("%lf%c", &dvalue, &ch) != 2 && dvalue == 0) {
            flushKey();
            printf("Invalid Double, try again: ");
        }
        else if (scanf("%lf%c", &dvalue, &ch) != 2 && ch != '\n') {
            flushKey();
            printf("Enter only an Double, try again: ");
        }
    }
    return dvalue;
}

double getDoubleMM(double min, double max) {
    //10.1 //20.9
    double dvalue = 0;
    int done = 0;
    char ch;
    while(!done) {
        if (scanf("%lf%c", &dvalue, &ch) == 2 && ch == '\n') {
            if (dvalue <= max && dvalue >= min) {
                done = 1;
            } else {
                printf("[%d<=Number<=%d], try again: ", min, max);
            }
        }
        else if (scanf("%lf%c", &dvalue, &ch) != 2 && dvalue == 0) {
            flushKey();
            printf("Invalid Double, try again: ");
        }
        else if (scanf("%lf%c", &dvalue, &ch) != 2 && ch != '\n') {
            flushKey();
            printf("Enter only an Double, try again: ");
        }
    }
    return dvalue;
}
