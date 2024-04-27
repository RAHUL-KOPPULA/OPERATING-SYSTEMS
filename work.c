/*work and exit system calls*/
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
int i,pid;
pid=fork();
if(pid==-1)
{
printf("fork failed");
exit(0);
}
else if(pid==0)
{
printf("\nthe child process starts");
for(i=0;i<5;i++)
{
printf("\nchild process %d is called",i);
}
printf("\nthe child process ends");
}
else
{
wait(0);
printf("\nthe parent process ends");
}
exit(0);
}




