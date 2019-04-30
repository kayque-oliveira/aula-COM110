#include <stdio.h>

int main(){
  int i=6,j=3;
  int *p, *q;
  p = &i;
  q = &j;
  p = &i;
  //*q = &j;
  p = &*&i;
  //i = (*&)j;
  i = *&j;
  i = *&*&j;
  //q = *p;
  i = (*p)++ + *q;

  return 0;
}
