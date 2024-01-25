//check whether the number palindrome or not
#include<stdio.h>
int main()
{
    int res=0,n,temp;
    int quo=0,rem;
    printf("Enter a number: ");
    scanf("%d",&n);        //121
    temp=n;
    while(temp!=0)
    {                         //first    //second  //third
        rem = temp%10;        // 1       //2       //1
        res = res*10+rem;    //  1       //12      // 121
        temp = temp/10;        //12      //1      // 0
    }
    if(res==n)
    {
        printf("%d is a palindrome number",n);
    }
    else
    {
        printf("%d is not a palindrome number",n);
    }
}