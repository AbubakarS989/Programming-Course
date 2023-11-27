#include <stdio.h>
int main()
{

    // vertical printing
    for (int i = 1; i <= 6; i++)
    {
        // horizontal printing
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    // Output
    //  *
    //  **
    //  ***
    //  ****
    //  *****
    //  ******

    // vertical printing
    for (int i = 1; i <= 6; i++)
    {
        // horizontal printing
        for (int j =5; j>=i; j--)
        {
            printf("*");
        
        }
        printf("\n");
    }

    // Output
    // *****    
    // ****
    // ***
    // **
    // *

// ! To put a spot where we want, then we use if conditions to add space etc.

    // vertical
    for(int i=0;i<=5;i++)
    {
        // horizontal
        for(int j=1;j<=5;j++)
        {   
        // horizontal balance check
            if(i+j<=5){
                printf(" ");
            }
            else{

            printf("*");
            }
        }
        printf("\n");

    }
    // Output
    
    //     *
    //    **
    //   ***
    //  ****
    // *****
int num;
printf("Enter a row:");
scanf("%d",&num);
    for(int row =1; row<=num;row++)
    {
        for(int space=1;space<=num-row;space++)
        {
            printf(" ");
        }
        for(int j=1;  j<=row;j++  )
        {
            printf("* ");
        }
        printf("\n");
    }

}


