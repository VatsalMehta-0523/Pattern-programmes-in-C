/*
output -->

enter number of rows : 5
enter number of columns : 10

* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 
* * * * * * * * * * 

*/

#include <stdio.h>

int main()
{
  int n , m ;
  printf("enter number of rows : ");
  scanf("%d",&n);
  printf("enter number of columns : ");
  scanf("%d",&m);
  printf("\n");
  for (int i = 1 ; i<=n ; i++ ){
    for (int j = 1 ; j <= m ; j++ ){
        printf("* ");
    }
    printf("\n");
  }
  return 0;
}