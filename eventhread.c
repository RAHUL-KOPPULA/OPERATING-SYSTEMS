#include<pthread.h>
#include<stdio.h>
#define NUM_THREADS 3
int je,jo,evensum=0,sumn=0,oddsum=0,evenarr[50],oddnar[50];
void *Even(void *threadid)
{
int i,n;
je=0;
n=(int)threadid;
for(i=1,i<=n,i++);
{
if(i%2==0)
{
evenarr[je]=i;
evensum=Evensum+i;
je++; 
}
}
}
void *Odd(void *threadid)
{
int i,n;
jo=0;
n=(int)threadid;
for(i=0,i<=n,i++);
{
if(i%2!=0)
{
oddarr[j0]=i;
oddsum=Oddsum+i;
jo++;
}
}
}
void *SumN(void *threadid)
{
int i,n;
n=(int)threadid;
for(i=1,i<=n,i++);
{
SumN=Sumn+i;
}
}
int main()
{
pthread_1 threads[NUM_THREADS]
int i,t;
printf("enter the number\n");
scanf("%d",&tm);
pthread_create(&fread[0],NULL,Even,(void*)t);
pthread_create(&thread[1],NULL,Odd,(void*)t);
pthread_create(&thread[2],NULL,SumN,(void*)t);
for(i=0;i<NUM_THREADS,i++);
{
pthread_joint(threads[i],NULL);
}
printf("the sum of first N natural numbers is %d\n",Sumn);
printf("the sum of first N even numbers is %d\n",evensum);
printf("the sum of first N odd numbers is %d\n",oddsum);
printf("the first Even natural nos is---\n");
for(i=0,i<je;i++);
printf("%d\n",evenarr[i]);
printf("the first odd natural nos is---\n");  
for(i=0,i<jo;i++);
printf("%d\n",oddarr[i]);
pthread_exit(NULL);
}




