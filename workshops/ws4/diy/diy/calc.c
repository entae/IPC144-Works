//
//  calc.c
//  diy
//
//  Created by Intae Chung on 2023-02-12.
//
#include <stdio.h>
#include "calc.h"
#include "utils.h"

int calc() {
    char op, q, ent;
    double num1, num2, result;
    int lnLength, i, done = 0;
    
    while (!done) {
        printf("> ");
        scanf("%c", &q);
        if (q == '\n') {
            done = 1;
            return 0;
        }
            scanf("%lf%c%lf%c", &num1,&op,&num2,&ent);
        if (q == '?') {
            if (ent != '\n') {
                flushKey();
                printf("Invalid Command!\n"
                       "[Question mark][First Number][Operation][Second Number]<ENTER>\n");
            } else {
                switch(op) {
                    case '+':
                        result = num1 + num2;
                        lnLength = printf("%.3lf\n", result) -1;
                        line('-',lnLength);
                        break;
                    case '-':
                        result = num1 - num2;
                        lnLength = printf("%.3lf\n", result) -1;
                        line('-',lnLength);
                        break;
                    case '/':
                        if (num2 != 0){
                            result = num1 / num2;
                            lnLength = printf("%.3lf\n", result) -1 ;
                            line('-',lnLength);
                            break;
                        } else
                            printf("Cannot divide by 0, please enter a different denominator\n");
                        break;
                    case 'x':
                        result = num1 * num2;
                        lnLength = printf("%.3lf\n", result) -1 ;
                        line('-',lnLength);
                        break;
                    case '^':
                        if (num2 != 0) {
                            result = 1;
                            for (i = 1; i <= num2; i++) {
                                result *= num1;
                            }
                        }
                        else
                            result = 1;
                        lnLength = printf("%.3lf\n", result) -1 ;
                        line('-',lnLength);
                        break;
                    case '%':
                        result = num1;
                        while (result >= num2) {
                            result -= (long) num2;
                        }
                        lnLength = printf("%.lf\n", result) -1 ;
                        line('-',lnLength);
                        break;
                    default:
                        printf("'%c' is not a valid operation, (only +,-,/,x,%% and ^ are acceptable)\n", op);
                        break;
                }
            }
        }
        else {
            flushKey();
            printf("Invalid Command!\n"
                   "[Question mark][First Number][Operation][Second Number]<ENTER>\n");
        }
    }
    return 0;
}
