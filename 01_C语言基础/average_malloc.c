#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,b=0,c;
    printf("请输入你要几个数 ");
    if(n<=0){
        printf("个数错误\n");
        return 1;
    }
    if (scanf("%d", &n) != 1) return 1;
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) { 
        printf("内存不足\n");
        return 1;
    }
    printf("请输入数组");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
         b +=arr[i];
    }
        c= b/n;
        printf("平均值为%d\n",c);
    free(arr);        // �� ���������ͷţ���Ȼ�ڴ�й©
    arr = NULL;       // �� �ÿգ���ֹ���Ұָ��
    return 0;
}