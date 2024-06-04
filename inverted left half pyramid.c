/*

output pattern for n = 5

 *****
  ****
   ***
    **
     *
  
*/



#include <stdio.h>

int main()
{
  int n;                                      // n is the variable to store number of rows 
  printf("enter number of rows : ");
  scanf("%d",&n);
  
  for( int i = 1 ; i <=n ; i++ ){
    for (int k = 1 ; k <= i ; k++ ){
      printf(" ");                          // this will print " " before printing "*"
    }
    for ( int j = n ; j >= i ; j--){
      printf("*");                          // this will print " * " inrequired position
    }
    printf("\n");
  }
  return 0;
}
