/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void up() {
    printf("%c[1A", 27);
}

void down() {
    printf("%c[1B", 27);
}

void left() {
    printf("%c[1D", 27);
}

void right() {
    printf("%c[1C", 27);
}

void waitOne() {

    time_t now, then;
    now = time(NULL);
    do {
        time(&then);
    } while (now == then);

}


void delayDemo() {
    
    int i;
    for (i=0; i < 10; i++) {
        printf("*\n");
        waitOne();
    }
}


void randomWalk() {
    
    srand(time(NULL));

    // clear the screen
    printf("%c[2J", 27);

    int i = 0;
    int r;
    while (++i < 10000) {
        r = rand() % 4;
        switch (r) {
            case 0: left();
                break;
            case 1: right();
                break;
            case 2: up();
                break;
            case 3: down();
                break;

        }
        printf("*\n");
        left(); up();
        waitOne();


    }

    printf("A\n\n\n\n\n");


}

void ansiDemo() {


    // clear screen
    printf("%c[2J", 27);
    // 10 forward
    //printf("%c[10C", 27);
    // 
    /* Foreground
    30	Black
    31	Red
    32	Green
    33	Yellow
    34	Blue
    35	Magenta
    36	Cyan
    37	White

    Background
    40	Black
    41	Red
    42	Green
    43	Yellow
    44	Blue
    45	Magenta
    46	Cyan
    47	White
     */

    int fore, back;

    for (back = 40; back <= 47; back++) {
        for (fore = 30; fore <= 37; fore++) {
            printf("%c[%2d;%2dm  hello", 27, fore, back);
        }
        printf("\n");
    }

}