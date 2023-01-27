//
//  main.c
//  dummyfile
//
//  Created by Intae Chung on 2023-01-27.
//

#include <stdio.h>
void line(char fill, int length);

int main(void){
    line('=', 20);
    line('-', 40);
    line('#', 60);
    return 0;
}

void line(char fill, int length) {
    char c;
    int l;
    for (l = 0; l < length; l++) {
        printf("%c", fill);
        }
        putchar('\n');
    }
