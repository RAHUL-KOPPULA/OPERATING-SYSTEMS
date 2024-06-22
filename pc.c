#include<stdio.h>
void main()
{
int buffer[10],bufsize,in,out,produce,consume,choice=0;
in=0;
out=0;
bufsize=10;
while(choice!=3)
{
printf("\n 1.produce \t2.consume.\t3 Exit");
printf("\nENter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:if((in+1)%bufsize==out)
printf("\n buffer is full");
else
{
printf("\n enter the value");
scanf("%d",&produce);
buffer[in]=produce;
in=(in+1)%bufsize;
}
break;
case 2:if(in==out)
printf("\n Buffer is Empty");
else
{
consume=buffer[out];
printf("\n thr consumedvalues is %d",consume);
out=(out+1)%bufsize;
}
break;
}
}
}
