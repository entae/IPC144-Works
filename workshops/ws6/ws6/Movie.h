//
//  Movie.h
//  ws6
//
//  Created by Intae Chung on 2023-03-24.
//

#ifndef SDDS_MOVIE_H
#define SDDS_MOVIE_H
#include <stdio.h>
//without the stdio, C language does not know what a FILE is.

struct Movie {
    char title[61];
    int year;
    char rating[4];
    int minutes;
    char genre[61];
    float consRating;
};

//Load Movie
int loadMovie(struct Movie* mptr, FILE* fptr);
//List Movie
void list(const struct Movie* mptr, int row);
//Display movie
void display(const struct Movie* m);
//get Movie Title
const char* getMovieTitle(const struct Movie* mptr);



#endif /* Movie_h */
