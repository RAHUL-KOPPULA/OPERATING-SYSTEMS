#include<stdio.h>
struct process
{
  int allocation[3];
  int max[3];
  int need[3];
  int finish;
 }p[10];
 int main()
 {  int n,i,l,j,avail[3],work[3],flag,count=0,sequence[10],k=0;
 printf("\nenter the number of process:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 { 
  printf("\nenter the %dth process allocated resources",i);
  scanf("%d,%d,%d,"&p[i].allocated[0].&p[i].allocated[l].&p[i],&p[i].allocated[2]);
  printf("\n enter the %dth process maximum resources:",i)
