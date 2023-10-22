#include<stdio.h>
int main(){
 
// Relational Operators Problems
// ! Result will be in 0 and 1

// >
// <
// ==
// !=
// >=
// <=

// !P 1 
int a=10,b=34,c=87;
int result;
result=a+b>c;
printf("%d",result);

// !P 2
int a=67,b=9,c=37;
int result;

result=a<b+c;
printf("%d",result);

// !p 3
int a=10,b=34,c=87,d=26;
int result;

result=a/b<=c-d;
printf("%d",result);

// !p 4
int a=65,b=41,c=17,d=66;
int result;

result=a*3+b>=a-d+c;
printf("%d",result);

// !p 5
int a=89,b=26,c=13,d=34;
int result;

result=a%c+34>=b-d+12*c;
printf("%d",result);


}