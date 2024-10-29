#include<stdio.h>

int main(){
char operator;
int num1,num2,ans;
printf("Enter the first number : ");
scanf("%d",&num1);

printf("Enter the second number : ");
scanf("%d",&num2);

printf("Enter the character for operations (+,-,*,/) : ");
scanf("%c",operator);

switch(operator){
case '+':
      ans=num1 + num2;
      printf("%d\n",ans);
      break;

case '-':
      ans=num1 - num2;
      printf("%d\n",ans);
      break;

case '*':
      ans=num1 * num2;
      printf("%d\n",ans);
      break;

case '/':
      if(num2 == 0){
        printf("Divisor cannot be zero !");
      }
      ans=num1 / num2;
      printf("%d\n",ans);
      break;

      default : 
      printf("Not a valid operation");
}
return 0;
}