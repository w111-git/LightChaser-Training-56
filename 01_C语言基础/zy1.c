#include <stdio.h>
int main(){
    int a,b=0;
    for(a=1;a<=100;a+=2){
        printf("%d\n",a);
         b += a;
        printf("%d\n",b);
    };
    printf("%d\n",b);
    return 0;


}