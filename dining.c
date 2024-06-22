#include<stdio.h>
#include<stdlib.h>
int tph,philaname[20],status[20],howhung,hu[20],cho;
int main()
{
int i;
printf("\n\nDINING PHILOSOPHER PROBLEM");
printf("\n Enter the total number of phoilosophers:");
scanf("%d",&tph);
for(i=0;i<=tph;i++)
{
philaname[i]=(i+1);
status[i]=1;
}
printf("How many are hungry:");
scanf("%d",&howhung);
if(howhung==tph) 
{
printf("\n All are hungry..\n Dead lock stage will occur");
printf("\n Existing..");
}
else
{
for(i=0;i<=howhung;i++)
{
printf("enter the philosopher %d position",(i+1));
scanf("%d",&hu[i]);
status[hu[i]]=2;
}
do
{
printf("1.One can eat at a time\t2.Two can eat at a time\t3.Exit\nEnter your choice:");
scanf("%d",&cho);
switch(cho)
{
case 1:one();
break;
case 2:two();
break;
case 3:exit(0);
default:printf("\ninvalid option:");
}
}
while(1);
}
}
one()
{
int pos=0,x,i;
printf("\n Allow any philosopher to eat at any time \n");
for(i=0;i<howhung;i++,pos++)
{
printf("\n%d is granted o eat",philaname[hu[pos]]);
for(x=pos;x<howhung;x++)
printf("\n%d is waiting:",philaname[hu[x]]);
}
}
two()
{
int i,j,s=0,t,x,r;
printf("\n Allow the philosopher to eat at same time\n");
for(i=0;i<howhung;i++)
{
for(j=i+1;j<howhung;j++)
{
if(abs(hu[i]-hu[j])>=1&&abs(hu[i]-hu[j])!=4)
{
printf("\n\ncombination %d\n",(s+1));
t=hu[i];
r=hu[j];
s++;
printf("\nP %d and p %d are graNTED TO EAT",philaname[hu[i]],
philaname[hu[j]]);
for(x=0;x<howhung;x++)
{
if((hu[x]!=t)&&(hu[x]!=r))
printf("\n p %d is waiting",philaname[hu[x]]);
}
}
}
}
}


