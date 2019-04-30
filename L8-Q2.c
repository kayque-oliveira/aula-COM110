#include <stdio.h>

int main(){
    int num=6;
    int *indica;
    indica = &num;
    printf("&num -> %d\n",&num);
    printf("indica-> %d\n",indica);
    printf("&indica-> %d\n",&indica);
    printf("*indica -> %d\n",*indica);

    return 0;
}
