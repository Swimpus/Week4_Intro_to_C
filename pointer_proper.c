# include <stdio.h>

int main(void){
// Every variable has an address.

// Think of it like a street address.
// 2379 Gatewin Avenue for example.

int x = 32;
// This x variable above has it's own numeric address!

// A pointer is a variable created for the sole purpose
// of storing and address.
int y = 51; // Let's create a pointer for y!

int *pY = &y;
// This basically says the following
// Initialize a pointer for y and save the adress of y
// as its value.

// Note the following:
// pY itself is not 51.
// Rather it is the address where 51 lives.
printf("Your address is: %p\n",pY);

// If you want to print it the true value held in the address..
printf("Your value is %d\n",*pY);
// You use * (asterisk) to create a dereference.
// If you put it in front of the pointer it goes to the address.
// And reads whatever is there.

printf("-----------------------------------------------------------------\n");
//-----------------------------------------------------------------------
// Pointer Operators
printf("Pointer Operators\n");

// As stated before * is used for declaration and dereference

// But we also have &, it simply gets the address of something.

int z = 12;
printf("Value Normal: %d\n",z);
printf("Address Normal: %p\n",&z); // Gets the address with &z/
// Note that we use %p format specifier for pointers.
// Mostly done for addresses though...

// Now lets' create a pointer!
int *pZ = &z; // Same type as the OG too!
// Get me a pointer for z with the address of z!
// Let's show that they have the same values!

printf("Value Pointer: %d\n",*pZ);
printf("Address Pointer: %p\n",pZ);

// SURPRISE THEY ARE THE SAME!

}
