/**
 * structures 2.c
 * 
 * Opened 4th May 2017
 * 
 */

#include <stdio.h>

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
}

// insert an element
// delete an element


// then look at structures with two pointers: binary trees.






