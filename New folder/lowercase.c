#include<stdio.h>
int main(){
    char ch;
    printf("Enter the charcter= ");
    scanf("%c",&ch);
    if (ch>=97 && ch<=122)
    {
        printf("It is lowercase");
    }
    else{
        printf("it is not lowercase");
    }
    return 0;
    
}