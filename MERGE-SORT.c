#include "stdio.h"
#include "stdlib.h"
int main(){
    int A[12]={2,0,1,9,1,2,2,1,1,9,4,1};
    int p,r;
    
}
int MERGE(A,p,q,r){
    int i,j,n1,n2,*L,*R;
    n1=q-p+1;
    n2=r-q;
    *L=(int*)malloc(n1*(sizeof(int)));
    *R=(int*)malloc(n2*(sizeof(int)));
    for (i=0;i<n1;i++) L[i]=A[p+i-1];
}