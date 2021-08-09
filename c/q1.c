#include <stdio.h>
#include <string.h>

int main()
{
    char arry[]="pds";
    strFunc(&arry,3);
    return 0;
}
void strFunc (char *A, int n)
   {
      char t;
      
      if (n <= 1) return;
     
      t = A[0];
      A[0] = A[n-1];
      A[n-1] = t;
     
      strFunc ( *(A+1),n-2);
   }