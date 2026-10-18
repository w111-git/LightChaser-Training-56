#include <stdio.h>

int main() {
    int a,b;
    printf("请输入两个数字");
    scanf("%d%d",&a,&b);
    printf("%d,%d\n",a,b);
    int *p = &a;
    int *q=&b;
    printf("p 里存的是 a 的地址%p\n", (void*)p);
    printf("*p 就是通过纸条找到的值：%d\n", *p); 
    printf("q 里存的是 b 的地址%p\n", (void*)q);
    printf("*q 就是通过纸条找到的值：%d\n", *q); 

    int c=*p;
    *p=*q;
    *q=c;
    printf("%d,%d",a,b);
    return 0;
    
}