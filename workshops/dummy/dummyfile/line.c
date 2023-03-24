//
//  main.c
//  dummyfile
//
//  Created by Intae Chung on 2023-01-27.
//

#include <stdio.h>
void line(char fill, int length);

int main(void){
    int val = 1234;
    int w=10, d=1;
    double vall = 1234.56789;
    line('=', 20);
    line('-', 40);
    line('#', 60);
    
    printf(">%20.2lf<\n", vall);
    for (w = 10; w < 15; w+=2) {
        printf("-----------------------\n");
        for(d = 0; d <3; d++)
            printf("%*.*lf\n", w, d, vall);
        }
    putchar('\n');
    printf(">%010d<\n", val);
    printf(">%010.7d<\n", val);
    
    return 0;
}

void line(char fill, int length) {
    int l;
    for (l = 0; l < length; l++) {
        printf("%c", fill);
        }
        putchar('\n');
    }
