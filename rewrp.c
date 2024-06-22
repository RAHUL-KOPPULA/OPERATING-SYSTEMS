#include<stdio.h>
#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<stdlib.ha>
#define MKEY1 5543L
#define MKEY2 4354L
#define PERMS 0666
typedef strcut{
	long mtype;
	clear mdata[50];
}
mesg;
//file: sender1.c
#include "mesg.h"
mesg msg;
int main()
{
 	int mq_id,n;
 	if ((mq_id=msge1(MKEY1,PERMS/IPPC_CREAT))<0){
 	printf("\n sender:error creating msg");
 	exit(1);
 	}
 	msg.mytype=1111L;
 	n=read(0,msg.mdata,50);
 	msg.data[n]="\0";
 	msgsnd(mg_)id,&msg,50,0);
 	}
 	
 	}
	
