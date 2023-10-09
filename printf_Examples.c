#include<stdio.h>
int main(){
 
// Example 1:
//Simple Print

    printf("Hey! How are you?");


// Example 2:
// Print value

    int length=23;
    printf("The length of pipe is : %d Meter\n",length);


// Example 3:
// Print multiple values
    int score=10;
    float height=5.8;
    char grade='A';

    printf("My height is %f\nMy score is %d\nMy Grade is %c\n",height,score,grade);
    // Output
    // My height is 5.800000
    // My score is 10
    // My Grade is A    


//Note: If we write variables not in the oder of writing format specifier then output is also display in different oder.
// As I write %f for height and %d for score, if I replace %d and %f, then our output is different .
// So be conscious while writing.


//Example 4:
// print Design 

// *
// **
// ***
// ****
// *****
// ******

printf("*\n**\n***\n****\n*****\n******\n");




}