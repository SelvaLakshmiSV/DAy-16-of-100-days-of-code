#include<stdio.h>
int main()
{
    int number,q,remainder,result=0;
    scanf("%d",&number);
    q = number;

    while(q!=0)
    {
     remainder = q % 10;
     result = result* 10 + remainder;
     q = q/10;
    }
    if(result == number)
    {
        printf("It is a palindrome");

    }
    else{
        printf("%d is not a palindrome.",number);
    }

    return 0;
}
