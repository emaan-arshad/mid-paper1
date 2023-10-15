

#include <stdio.h>

int main()
{
   int lar,med,small,N,feed,type=0;
   printf("please enter no of large parking spaces");  
   scanf("%d",&lar);
   
   printf("please enter no of medium parking spaces"); 
   scanf("%d",&med);
   printf("please enter no of small parking spaces"); 
   scanf("%d",&small);
   printf("please enter number of total cars to simulate");
   scanf("%d",&N);
  int a=lar;
  int b=med;
  int c=small;
  
   while(N) {
       printf("\nwhat type of car: \n enter 1 for large car\n enter2 for medium size car\n enter 3 for small size car\n:");
       scanf("%d",&type);
       if (type==1) {
           if(lar) {
               printf("you recieved a large parking space");
               lar--;
               feed += 5;
           }
           else {
               printf("sorry no large size space avaiable");
               feed -= 50;
           }
           
           
       }
       if (type==2) {
           if(lar) {
               printf("you recieved a large parking space");
               lar--;
               feed += 10;
           }
           else if(med) {
               printf("you recieved a medium parking space");
               med--;
               feed += 5;
           }
           
           else {
               printf("sorry no medium size space avaiable");
               feed -= 50;
           }
           
           
       }
       if (type==3) {
           if(lar) {
               printf("you recieved a large parking space");
               lar--;
               feed += 10;
           }
           else if(med) {
               printf("you recieved a medium parking space");
               med--;
               feed += 10;
           }
            else if(small) {
               printf("you recieved a small parking space");
               small--;
               feed += 10;
           }
           else {
               printf("sorry no small size space avaiable");
               feed -= 50;
           }
           
           
       }
       N--;
   }
   int occ1=a-lar;
   int occ2=b-med;
   int occ3=c-small;
   
   
   
   
   
   
   printf("\n%d is the feedback score",feed);
   printf("\noccupied large parking spaces:%d \noccupied medium parking spaces:%d\noccupied small parking spaces:%d",occ1,occ2,occ3);
   
    return 0;
}
