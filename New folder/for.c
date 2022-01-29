#include<stdio.h>
#include<conio.h>
int main(){
    int a,n;
    printf("Enter n=");
    scanf("%d\n",&n);
    for ( a = n; a > 0; a--)
    {
        printf("%d\t",a);
    }
    return 0;
}