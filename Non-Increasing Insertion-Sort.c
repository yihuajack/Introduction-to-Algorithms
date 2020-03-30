#define N 200
#include "stdio.h"
#include "stdlib.h"
int main(){
    int i=0,j,k,l,*A;
    A=(int*)malloc(N*(sizeof(int)));
    do{
        scanf("%d",&A[i++]);
    }while (getchar()!='\n');
    l=i-1;
    for (j=1;j<=l;j++){
        k=A[j];
        i=j-1;
        while (i>=0&&A[i]<k){
            A[i+1]=A[i];
            i--;
        }
        A[i+1]=k;
    }
    for (i=0;i<=l;i++){
        printf("%d ",A[i]);
    }
    free(A);
    getchar();
    return 0;
}