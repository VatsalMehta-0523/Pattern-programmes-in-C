/*

output pattern for n = 5

* * * * * 
* * * * 
* * * 
* * 
* 
  
*/



#include <stdio.h>

int main()
{
  int n;
  printf("enter number of rows : ");
  scanf("%d",&n);
  
  for( int i = 1 ; i <=n ; i++ ){
    for ( int j = n ; j >= i ; j--){
      printf("* ");
    }
    printf("\n");
  }
  return 0;
}