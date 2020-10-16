#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    a=1;
    while(a<8){
        int b=1;
        while(b<a){
            printf("%d",b);
            b=b+1;
        }
        printf("%d\n",a);
        a=a+1;
    }
    return 0;
}
