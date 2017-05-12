/**
 * structures 2.c
 * 
 * Opened 4th May 2017
 * 
 */

#include <stdio.h>
#include <stdbool.h>

struct item { 
    int data;
    struct item * item_ptr;
};
   
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
    
    
// last time: introduced structures
// example was D&D player attributes
// Accessing elements with the dot operator
// also looked at structure pointers, using ->

// This time: more structure practice
// cover:
// strings in structures, the need to use strcpy()

// Linked list code example
// create a short ll.  Have to declare elements explicitly, as we're not using dynamic allocation
// struct element element1, element2, element3, element4, element5
// set them up as linked.  get a pointer to the head one.  set last link field to null.
// traverse it and print the data

void demoStructures2() {

struct item { 
    int data;
    struct item * item_ptr;
};
    
    
    // declared like this
    struct playerStats firstPlayer;
    struct playerStats secondPlayer;
    
    // and values assigned like this
        
    firstPlayer.strength = 17;
    firstPlayer.dexterity = 10;
    firstPlayer.wisdom = 10;
    firstPlayer.charisma = 10;
    firstPlayer.xp = 0;
    firstPlayer.gold = 0.1;
    
    // strings in structures
    // can we initialise like this? -- no
    firstPlayer.playerName = "Mark";
    strcpy(firstPlayer.playerName, "Mark");
    
    
    // if we wanted to introduce a player race, how would we do it?
    
    // Ans: with an enum
    
    enum race_type {HUMAN, DWARF, ELF, OTHER};
    
    struct playerStatsRevised {
        int wisdom;
        int dexterity;
        int charisma;
        race_type race; 
    };
    
    // and set it
    
    playerStatsRevised playerOne;
    playerOne.charisma = 18;
    playerOne.race = HUMAN;
    
    
    // ============================
    
    
    // create a simple linked list
    struct item * headptr = NULL;
    struct item first, second, third, fourth, last;

    first.data = 2;
    second.data = 7;
    third.data = 1;
    fourth.data = 8;
    last.data = 2;

    headptr = &first;
    first.item_ptr = &second;
    second.item_ptr = &third;
    third.item_ptr = &fourth;
    fourth.item_ptr = &last;
    last.item_ptr = NULL;

    // now to traverse the list


    struct item * traverse_ptr = headptr;

    while (traverse_ptr != NULL) {
        printf("data item is %d\n", traverse_ptr->data);
        traverse_ptr = traverse_ptr->item_ptr;
    }

    // insert a new element

    // set one up
    struct item new;
    new.data = 100;
    new.item_ptr = NULL;

    // put it in the list
    first.item_ptr = &new;
    new.item_ptr = &second;

    // print again
    traverse_ptr = headptr;

    while (traverse_ptr != NULL) {
        printf("data item is %d\n", traverse_ptr->data);
        traverse_ptr = traverse_ptr->item_ptr;
    }

    // delete an element, really simple
    // delete third
    second.item_ptr = &fourth;
    third.item_ptr = NULL;

    // print again

    traverse_ptr = headptr;

    while (traverse_ptr != NULL) {
        printf("data item is %d\n", traverse_ptr->data);
        traverse_ptr = traverse_ptr->item_ptr;
    }




}



// then look at structures with two pointers: binary trees.






