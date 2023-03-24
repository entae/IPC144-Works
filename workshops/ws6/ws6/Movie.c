//
//  Movie.c
//  ws6
//
//  Created by Intae Chung on 2023-03-24.
//

#include "Movie.h"
int loadMovie(struct Movie* mptr, FILE* fptr) {
    return (fscanf(fptr, "%60[^\t]\t%d\t%3[^\t]\t%199d\t%60[^\t]\t%f", mptr->title, mptr->year, mptr->rating, mptr->minutes, mptr->genre, mptr->consRating));
}

void list(const struct Movie* mptr, int row) {
    printf("|%3d | %20.20s | %4d | %4s | %4d | %25.25s | %4.1f |\n", row, mptr->title, *mptr->year, mptr->rating, *mptr->minutes, mptr->genre, *mptr->consRating);
}

void display(const struct Movie* m) {
    printf("Title: %s\n", m->title);
    printf("Year: %d\n", *m->year);
    printf("Rating: %s\n", m->rating);
    printf("Duration: %d\n", *m->minutes);
    printf("Genres: %s\n", m->genre);
    printf("Consumer Rating: %3.f\n", *m->consRating);
}

const char* getMovieTitle(const struct Movie* mptr) {
    return mptr->title;
}

void fflushKey(FILE* file) {
    char ch = 'x';
    while (ch != '\n') {
        ch = fgetc(file);
    }
}
