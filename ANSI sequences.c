/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


void setColour(int fg, int bg) {
    printf("%c[%2d;%2dm", 27, fg, bg);
}

void at(int x, int y) {
        printf("%c[%d;%dH", 27, y, x);  
}

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

/**
 * Wait for about one second
 */
void waitOne() {

    time_t now, then;
    now = time(NULL);
    do {
        time(&then);
    } while (now == then);

}


/*
 * Borrowed from here https://stackoverflow.com/questions/3930363/implement-time-delay-in-c
 * Delay for a fractional amount of seconds.
 * CLOCKS_PER_SEC is 1000 (on work i5 machine)
 */
void delay(double dly){
    /* save start clock tick */
    const clock_t start = clock();

    clock_t current;
    do {
        /* get current clock tick */
        current = clock();

        /* break loop when the requested number of seconds have elapsed */
    } while ((double)(current-start)/CLOCKS_PER_SEC < dly);
}

void delayDemo() {
    
    int i;
    for (i=0; i < 100; i++) {
        printf("*");
        fflush(stdout);
        delay(0.2);
    }
}


void randomWalk() {
    
    
    srand(time(NULL));

    // clear the screen
    //printf("%c[2J", 27);
    /* move cursor to a central-ish point */
    at(20,20);

    int i = 0;
    int changeCounter = 0;
    int direction;
    while (true) {
        /* print our trail character */
        printf("X");
        left();
        /* now move */
        direction = rand() % 4;
        switch (direction) {
            case 0: left();
                break;
            case 1: right();
                break;
            case 2: up();
                break;
            case 3: down();
                break;

        }
        /* print the character that marks the head */
        printf("O");
        left();
        /* this is needed to get the Netbeans console to update */
        fflush(stdout);
        /* pause for a second */
        // waitOne();
        delay(0.01);
        changeCounter++;
        if (changeCounter == 20) {
            changeCounter = 0;
            setColour((rand() % 8)+30, (rand() % 8) + 40);
        }
    }
    printf("\n\n\n\n\n");
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