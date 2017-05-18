/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

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