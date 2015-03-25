#include<stdio.h>
int main()
{
int n,count;
unsigned long long int factorial =1;
printf("enter an integer: ");
scanf("%d",&n);
if(n< 0)
printf("error !!! factorial of negative no doesnt exist");
else
{
for(count=1;count<=n;++count)
{
factorial*=count;
}
printf("factorial = %lu",fatorial);
}
return 0;
}

