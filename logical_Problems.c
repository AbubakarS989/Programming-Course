#include<stdio.h>
int main(){
 
// Logical Operators

// &&
// ||
//  !

// ! Answer will be in 0 and 1

// ! problem 1
int a=23, b=16, c=31,d=54;
int result;
result=a+b>d && c+a<=b;
printf("%d",result) ;


// ! problem 2
int a=83, b=36, c=21,d=64;
int result;
result=d-c>a||c*a!=b;
printf("%d",result) ;

// ! problem 3
int a=13, b=54, c=43,d=14;
int result;
result=b%d<=d+a && !(a/b>d);
printf("%d",result) ;

// ! problem 4
int a=63, b=28, c=33,d=65;
int result;
result=!(a+3%d<a+d*2) ||c+d*a%b<d/11+a-c;
printf("%d",result) ;


// ! problem 5
int a=34, b=11, c=21,d=39;
int result;
result=b+5%b<=d+a*2 && a+21*b%d>a/c+b-d+34;
printf("%d",result) ;

}