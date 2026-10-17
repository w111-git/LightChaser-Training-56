#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,b=0,c;
    printf("要几个数？ ");
    if(n<=0){
        printf("输入的数必须大于0\n");
        return 1;
    }
    if (scanf("%d", &n) != 1) return 1;
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) { 
        printf("内存不足\n");
        return 1;
    }
    printf("请输入数组：");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
         b +=arr[i];
    }
        c= b/n;
        printf("平均数是%d\n",c);
    free(arr);        // ★ 用完后必须释放，不然内存泄漏
    arr = NULL;       // ★ 置空，防止变成野指针
    return 0;
}