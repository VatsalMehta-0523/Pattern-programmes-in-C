/*

output for n = 5

    1 
   0 0 
  1 1 1 
 0 0 0 0 
1 1 1 1 1

*/



#include <stdio.h>

int main()
{
  int n;
  printf("enter number of rows : ");
  scanf("%d",&n);
  
  for( int i = 1 ; i <=n ; i++ ){
    for ( int space = 1 ; space <= (n-i) ; space++ ){
      printf(" ");
    }
    for ( int j = 1 ; j <= i ; j++){
      printf("%d ", i%2);
    }
    printf("\n");
  }
  return 0;
}