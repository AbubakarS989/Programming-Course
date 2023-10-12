#include<stdio.h>
int main(){
 
    int a,b,c;
    a=10,b=23;
    c=a<=b;
    printf("%d",c);



    //  Greater  than 
    if(a>b)
    {
        printf("A is greater than A ");
    }
    else{
        
        printf("A is not greater than A ");
    }

    //  Less than 
    if(a<b)
    {
        printf("A is less than B \n");
    }
    else{
        
        printf("A is not less than B\n ");
    }

    // Double equal to
    if(a==b){
        printf("A is equal to B");
    }
    else{
        
        printf("A is equal to B");
    }
    
    // Greater Than Equal To
    if(a>=b){
        printf("A is equal and greater to B");
    }
    else{
        printf("A is not equal and greater to B");
    }

    // Less Than Equal To
    if(a<=b){
        printf("A is less than and equal to B");
    }
    else{
        
        printf("A is not less than and equal to B");
    }
    
}