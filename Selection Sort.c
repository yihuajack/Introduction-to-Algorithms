#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main(){
    int i,min,n=6,j,t;
    int A[6]={};
    for (i=0;i<n;i++){
        srand((unsigned)time(NULL));
        A[i]=rand()%10;
    }
    for (i=0;i<n-1;i++){
        min=i;
        for (j=i+1;j<n;j++){
            if (A[j]<A[min]) min=j;
        }
        t=A[min];
        A[min]=A[i];
        A[i]=t;
    }
    for (i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    getchar();
    return 0;
}