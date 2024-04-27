#include<stdio.h>
int main()
{
 char pn[10][10];
 int arr[10],bur[10],star[10],finish[10],tat[10],wt[10],i,n;
 int totwt=0,tottat=0;
 printf("ENTER  THE NUMBER OF PROCESSES");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("ENTER  THE PROCESS NAME,ARRIVAL TIME&BURST TIME:");
  scanf("%s%d%d",pn[i],&arr[i],&bur[i]);
 }
 for(i=0;i<n;i++)
 {
  if(i==0)
  {
   star[i]=arr[i];
   wt[i]=star[i]-arr[i];
   finish[i]=star[i]+bur[i];
   tat[i]=finish[i]-arr[i];
  }
 }
 printf("\nPName arrtimr burntime Start TAT Finish");
 for(i=0;i<n;i++)
 {
  printf("\n%s\t%6d\t\t%6d\t%6d\t%6d\t%6d",pn[i],arr[i],bur[i],star[i],tat[i],finish[i]);
  totwt+=wt[i];
  tottat+=tat[i];
 }
 printf("\naverage waiting time:%f",(float)totwt);
 printf("\nAverage turn around time:%f",(float)tottat);
}
