#include "stdio.h"
int main(){
    int i,n=3,c=0;
    int A[3]={1,0,1};
    int B[3]={0,1,0};
    int C[4]={};
    for (i=n-1;i>=0;i--){
        C[i+1]=(A[i]+B[i]+c)%2;
        c=(A[i]+B[i]+c>=2)?1:0;
    }
    C[0]=c;
    for (i=0;i<=n;i++) printf("%d",C[i]);
    getchar();
    return 0;
}