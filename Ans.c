#include<stdio.h>
int main(){
 

// TODO 1: Write a program that add two characters and display their result sum on the screen.
int a, b, result;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    result=a+b;
    printf("Addition is :%d",result);

//TODO 2: Write a program that displays value of character variable grade.
char grade='A';
printf("%c",grade);


//TODO 3: Write a program that displays the value stored in a string variable name.
// char name[]="Ahmad";
// printf("%s",name);

//TODO 4: Write a program that display the following output using single printf statement.
printf("\n*\n***\n*****\n******\n*******");

// *
// ***
// *****
// ******
// *******

//TODO 5:  Write a program that displays the name of a person right-justified and address left- justified by using 25 character spaces for each .
char name[]="Usman";
char address[]="SadiqAbad";
printf("\nName is:%25s",name);
printf("\nAddress is :%-25s",address);


}