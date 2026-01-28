#include <studio.h>
int main(){
    int a=4;
    int b=7
    printf("before swapping: a=%d, b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swapping: a=%d, b=%d\n",a,b);
}
