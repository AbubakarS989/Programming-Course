
#include <stdio.h>
// #include<conio.h>
int main()
{
    // int a=2,b=10;
    // printf("Addition is:%d\n",a+b+233);
    // printf("Subtraction is :%d\n",a-b);
    // printf("Multiplication is :%d\n",a*b);
    // printf("Division is:%d\n",b/a);
    // printf("Modulus is: %d\n",a%b);

    // int sum;
    // pre-increment
    // sum=++a;

    // post-increment
    // sum=a++;
    // sum=a+b;

    // pre-increment
    // sum=--a;
    // sum=a+b;
    // post-increment
    // sum=a--;

    // int a, b, x,y;
    // a=b=x=y=0;
    // a++;
    // b=a;
    // ++x;
    // y=x;
    // printf("a=%d b=%d\n",a,b);
    // printf("x=%d y=%d\n",x,y);

    int a, b, x, y;
    a = b = x = y = 0;
    b = --a;
    y = x--;
    printf("a=%d\n b=%d\n", a, b);
    printf("x=%d\n y=%d\n", x, y);

}
