#include<stdio.h>

int main() {
    int a=2;
    int *p;
    p=&a;
    printf("%d\nj",a);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&a);
    
    return 0;
}
