#include <stdio.h>
int main()
{

// Total Programs is 2.

// TODO  1:Write a program that compare two relational expression using all Operator, to check if both expression result is true or not.




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


// TODO 2: Write a program that use all operators in single if statement.

int  var1,var2;
var1=20;
var2=30;

if(value1==20 && var2>22 || var1<12 ||  !(var2==var1))
{
    printf("Expression is true\n");
}
else
{
    printf("Expression is False\n");
 
}

// Output
// Expression is true

}