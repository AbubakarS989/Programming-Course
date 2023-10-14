  # include<stdio.h>
  int main(){
    
    int grade, salary ,bonus;
    printf("Enter your Salary:");
    scanf("%d",&salary);
    printf("Enter your Grade:");
    scanf("%d",&grade);
    if(grade>15)
    {
      bonus=salary+(salary/2);

    }
    else if(grade<=15){
      bonus=salary+(salary*25/100);

    }
    printf("Your total salary is:%d ",bonus);


  }
  