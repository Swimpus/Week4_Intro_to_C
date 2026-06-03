# include <stdio.h>

int main(void){

    // Arrays Declaration and Initialization

    // unintialized
    int grades[5];

    // fully initialized
    int grades[5] = {70,50,67,90,89};

    // size infered from initializer (5)

    // all elements set to 0.
    int scores[5] = 0; // Not sure why you need to do the [5]?


    // Zero based indexing just like python
    // 70 is index 0, 50 is index 1, and so on....

    //-----------------------------------------------------------------------------
    // Indexing
    int num[5] = {1,8,9,3,5};

    // Read individual elements
    printf("First:%d\n",scores[0]); // 1
    printf("Last:%d\n",scores[4]); // 5

    // Iterated 


    // What about index 5? Does it exist?
    // NO
    // C does not perform bound checking, it's your responsability.
    
    //-------------------------------------------------------------------------
    // Array to pointer decay
    

    // Arrays are not pointers, but they decay to them.
    




}