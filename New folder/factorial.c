#include<stdio.h>
int main(){
    int i,n,c=1;
    printf("Enter n=");
    scanf("%d",&n);

    for ( i = n; i > 0; i--)
    {
        c=c*i;
    }
    printf("%d",c);
}