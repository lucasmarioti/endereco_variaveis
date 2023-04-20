#include <stdio.h>

int main()
{
    int a=10, b=12;
    int *p1, *p2;
    
    p1=&a;
    p2=&b;
    
    if(p1 < p2){
        printf("o maior endereco é:%d  %p",a,p1);
    }else{
        printf("o maior endereco é:%d  %p",b,p2);
    }

    return 0;
}
