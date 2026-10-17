#include <stdio.h>

int main(){
    int a,b,d;
    char c;
    printf("请输入一个式子：");
    scanf("%d%c%d",&a,&c,&b);
    if(c=='+'){
      d=a+b;
      printf("%d",d);
    }
    else if(c=='-'){
      d=a-b;
      printf("%d",d);
    }
    else if(c=='*'){
      d=a*b;
      printf("%d",d);
    }
    else if(c=='/'){
      if(b!=0){
        d=a/b;
        printf("%d",d);
      }
      else{
        printf("除数不能为0");
      }
    }
    else{
      printf("非法运算");
    }
    return 0;
 }