#include<stdio.h>

int factorial(int n);
int main(){
int num;

printf("Enter the number : ");
scanf("%d",&num);
int n;
if(n < 0){
    printf("Error! Faactorial of negative number doesn't exist");
}
else{
    for(int i=1;i<=n;++i){
        int factorial;
        factorial *= i;
    }
    printf("Factorial of %d is : %d",num,factorial(num));
}
return 0;
}

int factorial(int n){
    if(n < 0){
        return 0;
    }else if(n == 0 || n ==1) {
       return 1;
    }else{
        return n * factorial(n -1);
    }
}
