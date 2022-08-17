#include<stdio.h>
void func()
{   
    int x=fork();
    if(x==0)
    {
        printf("I am child\n");
        printf("PID of the child process is: %d\n ",x);
    }
    else
    {
        printf("I am parent\n");
        printf("PID of the parent process is: %d\n ",x);
    }
}
int main()
{
   func();
   return 0;
   
   
}