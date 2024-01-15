#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers: ");
    
    scanf("%d %d %d",&num1,&num2,&num3);
    
      int temp=((num1<num2)? num1:num2);
int result=num3<temp?num3:temp;
       
        printf("\n The Smallest number is: %d ",result);
        
        getch();
    return 0;
}