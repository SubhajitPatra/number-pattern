#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    for(a=1;a<8;a=a+1){
            for(int b=1;b<a;b=b+1){
        printf("%d",b);
    }
    printf("%d\n",a);


    }
    return 0;
}
