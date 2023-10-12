#include <stdio.h>
int main()
{

// TODO Write a program that compare two relational expression using all Operator, to check if both expression result is true or not.




// And Operator
int number1,number2;

number1=10;
number2=20;

if (number1>=10 && number2<20)
{
    printf("Both expression is true\n");
}
else
{
    printf("Expression is False\n");
}
//Output
// Expression is False

// OR Operator

int value1,value2;
value1=10;
value2=20;

if(number1>10 || number2==20)
{
    printf("Both expression is true\n");
}
else
{
    printf("Expression is False\n");
}
//Output
// Both expression is true

// NOT Operator
int score1,score2;
score1=10;
score2=20;
if((score1>15) && !(score2==20))
{
    printf("Both expression is true\n");
}
else
{
    printf("Expression is False\n");
}
//Output
// Expression is False



}