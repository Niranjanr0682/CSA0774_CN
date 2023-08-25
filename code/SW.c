// SIMULATION OF SLIDING WINDOW PROTOCOL

#include<stdio.h>
void main()
{
char s[50],r[50];
int i,ws;

 printf("WINDOWS SIZE : ");
scanf("%d",&ws);
 printf("\n SENDER WINDOW \n");
 printf("\n THE DATA TO SENT: ");
fflush(stdin);
gets(s);
for(i=0;i<ws;i++)
r[i]=s[i];
r[i]=NULL;
 printf("\n MESSAGE BY SENDER:\n");
 puts(s);
 printf("\n WINDOW OF RECEIVER IS EXPANDED\n");
 printf("\n ACK FROM RECEIVER \n");
for(i=0;i<ws;i++);
printf("\n ACK:%d",i);
 printf("\n MESSAGE RECEIVED BY RECEIVER IS : ");
 puts(r);

}