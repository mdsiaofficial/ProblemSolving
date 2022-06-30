#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{

  int n;
  int result=0;
  scanf("%d",&n);
  //enter the number of variables
  while(n!=0){
    result+=(n%10);
    n=n/10;
  }
  printf("%d",result);

  
 /*    
   int n;
   scanf("%d", &n);
   int digit, temp, sum = 0;
   temp = n;
 
   while(temp > 0)
   {
     digit = temp % 10;
     sum = sum + digit;
     temp = temp / 10;
   }
   printf("%d\n",sum);
    */

     
    /* 
    int a[4];
    int i, num_of_digit=5;
    //scanf("%d\n", &num_of_digit);
    for(i=0; i<num_of_digit; i++){
        scanf("%1d", &a[i]);
    }
    for(i=0; i<num_of_digit; i++){
        printf("%d ", a[i]+a[i++]);
    }
  	// Complete the code.
 */

    return 0;
}

