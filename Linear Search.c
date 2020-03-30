#include "stdio.h"
int LinearSearch(int *A, int v, int l);
int main(){
    int A[3]={0,1,2};
    int i,l=3,v=0;
    i=LinearSearch(A,v,l);
    printf("%d",i);
    getchar();
    return 0;
}
int LinearSearch(int *A,int v,int l){
    int i=-1,j;
    for (j=0;j<=l-1;j++){
        if (A[j]==v){
            i=j;
            return i;
        }
    }
    return i;
}