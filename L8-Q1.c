#include <stdio.h>

int main(){
    int i=6,j=3;
    int *p, *q;
    p = &i;
    q = &j;

    printf("a) p == &i -> %d\n",p == &i);
    printf("b) *p - *q -> %d\n",*p - *q);
    printf("c) **&p -> %d\n",**&p);
    printf("d) 3 - *p/(*q)+7 -> %d\n",3 - *p/(*q)+7);
    int d = (*p)++;
    printf("e) (*p)++ -> %d\n",d);
    return 0;
}
