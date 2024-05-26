#include <stdio.h>

int Fibonacci (int x) ;

int main (void) 
{
 int x ;
 printf ("Please input number: ") ;
 scanf ("%d",&x) ;
 printf ("%dth Fibonacci number is: %d\n",x,Fibonacci(x)) ;
 return 0 ;
}

int Fibonacci (int x)
{ 
  if (x<=1)
  {
   return x ;
  }
  else 
  {
   return (Fibonacci(x-1) + Fibonacci(x-2)) ;
  }
}
  




