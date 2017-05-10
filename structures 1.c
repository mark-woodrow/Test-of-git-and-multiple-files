/* 
 * File:   structures 1.c
 * Author: mark.woodrow
 *
 * An introduction to structures
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * 
 */

/* This is to be used as a linked list element
 */
struct item { 
    int data;
    struct item * item_ptr;
};


int demoStructures() {

    // simple structures
    // declared like this
    
    struct playerStats { 
        char playerName[128];
        int strength;
        int dexterity;
        int wisdom;
        int charisma;
        int xp;
        double gold;
        int hp;
        bool isPoisoned;
        bool isCursed;
        bool isBlessed;
    };
    
    // declared like this
    struct playerStats firstPlayer;
    struct playerStats secondPlayer;
    
    // and values assigned like this
    
    // can we initialise like this? -- no
    // firstPlayer.playerName = "Mark";
    strcpy(firstPlayer.playerName, "Mark");
    
    firstPlayer.strength = 17;
    firstPlayer.dexterity = 10;
    firstPlayer.wisdom = 10;
    firstPlayer.charisma = 10;
    firstPlayer.xp = 0;
    firstPlayer.gold = 0.1;
    firstPlayer.hp = 100;
    firstPlayer.isPoisoned = false;
    firstPlayer.isCursed = false;
    firstPlayer.isBlessed = false;
    
    // write a function to print out the contents of the playerStats struct.
    // what is this ?
    void printStats(struct playerStats);
    // Ans: a forward declaration, telling the compiler what the functions signature is.
    //Q: what is a signature, in this context?
    //A: name, return type, no. of args and their types
    
    // As per D&D, assign random player stats to player 2.
    // using 3 D6 rolls
    secondPlayer.strength = rand() % 6 + rand() % 6 + rand() % 6;
    // what is wrong with the above code?
    
    
    
    
    // now, write a function that takes a pointer to a structure
    void assignRandomStats(struct playerStats *);
    
    // the syntax for accessing structure elements through a pointer is
    // slightly different, it uses -> 
    
    struct playerStats * sptr;
    
    sptr = &firstPlayer;
    
    sptr->strength = 18;
    
    // Lists
    
    // Linked lists
    
    
    
    
    /*
    struct item * headptr = NULL;
    struct item first, second, third, last;
    
    
    first.data = 2;
    second.data = 7;
    third.data = 1;
    last.data = 8;
    
    
    headptr = &first;
    first.item_ptr = &second;
    second.item_ptr = &third;
    third.item_ptr = &last;
    last.item_ptr = NULL;
    
    
    // now to traverse the list
    
    
    struct item * traverse_ptr = &first;
    
    
    
    while (traverse_ptr != NULL) {
        printf("data item is %d\n", traverse_ptr->data);
        traverse_ptr = traverse_ptr->item_ptr;      
    }
    */
    return (EXIT_SUCCESS);
}


