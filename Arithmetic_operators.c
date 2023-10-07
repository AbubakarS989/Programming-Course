#include<stdio.h>
int main(){


// Write a program that take 2 numbers and perform
// 1: Display Sum
// 2: Display Reminder
// 3: do modulus  with result of sum and 1st input number 

// int a,b,reminder,sum;

// printf("enter no 1:",a);
// scanf("%d",&a);
// printf("enter no 2:",b);
// scanf("%d",&b);
// sum=a+b;
// reminder=a%sum;

// printf("Sum is %d\n",sum);
// printf("Sum is %d\n",a%b);
// printf("Sum is %d\n",reminder);

int a , b,c;
printf("Enter number 1:");
scanf("%d",&a);
printf("Enter number 2:");
scanf("%d",&b);
printf("Enter number 3:");
scanf("%d",&c);
int max=a;
if (max<b){
    max=b;
}
if (max<c){
    max=c;

}


printf("Max is %d",max);



}
