/*

output for n = 5

    1 
   2 3 
  4 5 6 
 7 8 9 10 
11 12 13 14 15

*/



#include <stdio.h>

int main()
{
  int n;
  printf("enter number of rows : ");
  scanf("%d",&n);
  int cnt = 1 ;
  for( int i = 1 ; i <=n ; i++ ){
    for ( int space = 1 ; space <= (n-i) ; space++ ){
      printf(" ");
    }
    for ( int j = 1 ; j <= i ; j++){
      printf("%d ", cnt);
      cnt++;
    }
    printf("\n");
  }
  return 0;
}