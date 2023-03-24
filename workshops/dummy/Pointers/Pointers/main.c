//
//  main.c
//  Pointers
//
//  Created by Intae Chung on 2023-03-17.
//

#include <stdio.h>

void getIptr( int* ptr ) {
    printf("Enter a number: ");
    scanf( "%d", ptr );
}


int getvIptr(int* ptr, int min, int max ) {
    //return tru if value is between min, max
    int ret = 0;
    getIptr(ptr);
    if ( (*ptr >= min) && (*ptr <= max) ) {
        ret = 1;
    }
    return ret;
}


int main(void) {
    int a;
    int done = 0;
    getIptr( &a );
    printf( "You entered: %d\n", a );
    
    while (!done) {
        
        if( getvIptr( &a, 10, 20 ) ) {
            printf( "you entered: %d\n", a);
            done = 1;
        }
        else {
            printf("Invalid value, min: 10, max: 20\n");
        }
    }
    return 0;
}
