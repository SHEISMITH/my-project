#include<stdio,h>
int main();
int factorial(int);
{
int number;
int solution;
printf("enter number %d",number);
if(number<0);
{
printf("doesnot exist\n");
}
else
{
solution=factorial(number);
printf("%d\n",solution);
}
return 0
int factorial(int number);
{
if(number==0 );{

return 1
}
if(number==1);
{
return 1
}
else
{
return(number*factorial(number));
}
}

