#include <stdio.h>

int main(){
  int *q, *p, temp;
  int i=5,j=10;
  p = &i;
  q = &j;

  printf("%d %d %d\n", *p, *q, temp);

  temp = *p;
  *p = *q;
  *q = temp;

  printf("%d %d %d\n", *p, *q, temp);

  return 0;

}
