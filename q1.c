//23I-2560
//name:Emaan Arshad
//dtae:10/15/23
//desc: checking categories of barcodes (Q1)



#include <stdio.h>

int main()
{
   int barc;
   printf("please enter barcode to check category : ");
   scanf("%d",&barc);
  
    int a=barc;
   int B[5];
   
  //storing each digit of barcode in an array
  for(int i=0;i<5;i++) {
       B[i]=barc%10;
       barc=barc/10;
       
   }//end for(int i=0;i<5;i++)
 
//invalid barcodes not having 5 digits
   if (a>99999 || a<9999) 
       printf("invalid code");
       
   
   //category 1
    else if (B[4]%2==0 && B[3]%2==0) 
       printf("its category 1");
      //category 2
   else if (B[0]%3==0 && B[1]%2==1)
        printf("its category 2");
        //category 3
   else 
        printf("its category 3");
   
   
   
   
    return 0;
}
