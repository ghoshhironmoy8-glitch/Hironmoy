#include <stdio.h>

int main() {
    int i,x;
    printf("enter x :");
    scanf("%d",&x);
    for ( i=2; i<x; i++){
        if((x%i)==0){
           printf("not prime");
           break;}
        }
           if(x==i){
               printf("prime");
           }
           return 0;}
