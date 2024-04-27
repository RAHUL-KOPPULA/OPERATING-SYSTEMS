/*fork system call program*/
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
 int id,childid;
  id=getpid();
  if((childid=fork())>0)
  {
   printf("\n im in the parent process %d",id);
   printf("\n im in the parent process %d",getpid());
   printf("\n im in the parent process%d\n",getppid());
  }
  else
  {
    printf("\n im in the child process %d",id);
    printf("\n im in the child process %d",getpid());
    printf("\n im in the child process %d\n",getppid());
  }
}

