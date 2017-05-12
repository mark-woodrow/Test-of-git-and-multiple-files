/**
 * simple files
 */

#include <stdio.h>>

/**
 * the two modes, text and binary
 * 
 * text is based on printf, uses fprintf, so we already know it
 * FILE* is a struct ptr
 * 
 * Need for i/o error checking as never before
 
 * fputs, fgets
 * fprintf, fscanf
 * fputc, fgetc
 */


void fileDemo() {
    
    
    FILE * myFile;
    int status;

    /* Modes: use a first to append
     * what about b binary 
     * t text ???  tutorials point doesn't mention them
     */
    myFile = fopen("my file", "awt");
    
    if (myFile == NULL) {
        printf("Could not open file \n");
        perror("Could not open file");
        
    }
    else {
        fprintf(myFile, "Hello, World\n");
        fputs("Hello again", myFile);
        
        status = fclose(myFile);
        if (status != 0) {
            printf("Could not close file!\n");
            perror("could not close file");
        }
        
    }
    
}