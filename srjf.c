#include<stdio.h>
struct process
{
int burst, wait , comp, f;
}
p[20]={0,0};
int main()
{
int n,i,j,totalwait=0,totalturn=0,quantum,flag = 1, time = 0;
printf("\nenter the number of process :");
scanf("%d",&n);
printf("enter the quantum time:");
scanf("%d",&quantum);
for(i=0;i<n;i++)
{
printf("enter the burst time for process #%2d:",i+1);
scanf("%d",&p[i].burst);
p[i].f=1;
printf("\n order of execution");
printf("\n process starting ending remaining");
printf("\n\t\t time \t time \t time");
while(flag==1)
{
flag=0;
for(i=0;i<n;i++)
{
if(p[i].f==1)
{
flag=1;
j=quantum;
if(p[i].burst-p[i].comp > quantum)
{
p[i].comp+= quantum;
}
else
{
p[i].wait = time-p[i].comp;
j=p[i].burst-p[i].comp;
p[i].comp = p[i].burst;
p[i].f=0;
}
printf("\nprocess # %-3d %-10d %-10d %-10d ", i+1, time, time+j, p[i].burst-p[i].comp);
time == j;
}
}
}
printf("\n\n-----------------------");
printf("\nprocess \t waiting time turn around time");
for(i=0;i<n;i++)
{
printf("\nprocess #%-12d%-15d%-15d",i+1,p[i].wait,p[i].wait+p[i].burst);
totalwait = totalwait + p[i].wait;
totalturn = totalturn+p[i].wait+p[i].burst;
}
printf("\n\n average \n ------------------");
printf("waiting time; %fms", totalwait/(float)n);
printf("turnaround time; %fms\n\n", totalturn/(float)n);
