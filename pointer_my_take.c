#include <stdio.h>

// Denote the parameters as pointers since that is what we are taking in.
void calc_age(int *age, const int *b_count);
// This guarantees that we can modify the actual value of age.

int main(void){
    // Okay let's say I want to create a function that does the following.
    // Takes your current age and asks how many birthdays you will celebrate.

    // Getting user input for age and storing it
    int age;
    printf("Enter your age:\n");
    fscanf(stdin,"%d",&age);
    printf("Your are %d years old\n",age);

    int birth_count;
    printf("How many birthdays will you celebrate?: \n");
    fscanf(stdin,"%d",&birth_count); // Saving to birthday count.

    // Now we want a function that will calculate how old you will be
    // based on how many birthdays you have coming up.

    // Let's define age and birth_count as pointers
    int *pAge = &age; // * in declaration helps say that it is a pointer pointing to the adress of age.
    int *pB_count = &birth_count;

    // So now we have 2 pointers that point in the address of both age and b_count
    // I will now write a function and add a prototype (lines 3 and 38)

    // Calling function...
    calc_age(pAge,pB_count);
    printf("Your new age would be: %d\n",age);

    // Proving that b_count did not change!
    printf("Proof of const keyword working:%d\n",birth_count);
}

// Note that age does not have a const keyword attached to it. WE WANT TO MODIFY IT!
// b_count should stay the same.
void calc_age(int *age, const int *b_count){
    printf("%d\n",*age);
    printf("%d\n",*b_count);

    for (int i =0; i < *b_count; i++){ // Runs based on b_count
        *age += 1; // Increment the value of age by 1
    }
    printf("Calc age says: %d\n",*age); // New modified age that will be sent back to main.
}