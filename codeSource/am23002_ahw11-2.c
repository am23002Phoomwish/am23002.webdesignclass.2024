#include <stdio.h>

int main (void) 
{
 long long int a[5] ;
 int i,h ;
 printf ("Input array:\n") ;
 for (i =0 ; i<5 ; i++)
 {
   scanf ("%lld",&a[i]) ;
 }
 printf ("sorted array:\n") ;
 for (h = 0 ; h<4 ; h++)
 {
  for (i = 0 ; i<4 ; i++)
  {
   if (a[i]>a[i+1])
   {
     long long int buffer ;
     buffer = a[i] ;
     a[i] = a[i+1] ;
     a[i+1] = buffer ;
   }
  }
 }
  for (i =0; i<5 ; i++) 
  {
   printf ("%lld ",a[i]) ;
  }
  printf ("\n") ;
  return 0 ;
}
