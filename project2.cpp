#include<stdio.h>
int main()
{
    float m,n,x,y,z,p;
    printf("Enter the value of Page fault service time (not modified) : ");
    scanf("%f",&n);
    printf("Enter the value of page fault service time (modified) : ");
    scanf("%f",&m);
    printf("Enter the memory access time :  ");
    scanf("%f",&x);
    printf("Enter the effective time access : ");
    scanf("%f",&y);
    printf("enter the page raplace modified percentage : ");
    scanf("%f",&z);
    p=(y-x)/(((z*m)+(1-z)*n)+x);
    printf(" the mamximum acceptable page fault rate is  %f",p);
}

