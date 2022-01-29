#include<stdio.h>
#include<conio.h>
int main(){
    int year;
    printf("Enter Year=");
    scanf("%d",&year);
    if((year%4==0) && ((year%400==0) || (year%100!=0))){
        printf("It is a Leapyear");
    }
    else{
        printf("It is not a Leapyear");
    }
    return 0;
}