#include<stdio.h>
void swap(int *a,int *b);
int main(){
int num1,num2;
printf("Enter two number : ");
scanf("%d %d",&num1,&num2);

printf("Before swaping : num1 = %d ,num2 = %d\n",num1,num2);

swap(&num1,&num2);
printf("After swaping  : num1 = %d ,num2 = %d\n",num1,num2);
return 0;
}


void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}