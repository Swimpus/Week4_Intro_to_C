# include <stdio.h>

int main (void){
    // Changing values held by pointers.
    int x = 87; // Our variable x
    int *pX = &x; // Pointer x points to the address of x.

    printf("Your value is %d\n",*pX);
    printf("Your address is %p\n",pX);

    *pX = 50; // We deref pX, meaning we look at the value in the address.
    // And we change it!
    // Address should be the same.
    printf("-----------------------\n");
    printf("Your value is %d\n",*pX);
    printf("Your address is %p\n",pX);
    // -------------------------------------
    // Variable types and pointers
    // Be aware that the pointer you create.
    // Must have the same variable type as
    // the original variable which you are deriving the
    // address from.

    int q = 45; // int thus pointer should be int
    double pi = 3.14;// double thus pointer should be double

    int *pQ = &q; // int
    double *pPI = &pi; // double

    // Be mindful when it comes to format specifiers too.
    printf("Value q: %d\n",*pQ);
    printf("Value pi: %.2lf\n",*pPI);




    





}