#include <stdio.h>

int main (void) 
{
 int ans = 69 ;
 int x,i ;
 printf("What is the number? ") ;
 scanf("%d",&x) ;
 while (x != ans) 
 {
	 if (x - ans >= 100 )
	 {
		 printf ("Too large\n") ;
	 }
	 else if (x - ans >= 10 && x - ans <= 99)
	 {
		 printf ("Large\n") ;
	 }
	 else if (x - ans >= 1 && x - ans <= 9)
	 {
		 printf ("A little large\n") ;
	 }
	 else if (ans - x >= 1 && ans - x <= 9)
	 {
		 printf ("A little small\n") ;
	 }
	 else if (ans - x >= 10 && ans - x <= 99)
	 {
		 printf ("Small\n") ;
	 }
	 if (ans - x >= 100)
	 {
		 printf("Too small\n") ;
	 }
         printf("What is the number? ") ;
         scanf("%d",&x) ;
	 i++ ;
 }
 printf ("You got it in %d times!\n",i+1) ;
 return 0 ;
}

