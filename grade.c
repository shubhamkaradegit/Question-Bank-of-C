#include<stdio.h>

int main(){
int marks;
printf("Enter marks :");
scanf("%d",&marks);

if(marks >= 80){
    printf("Grade A\n");

}else if( marks >=60){
    printf("Grade B\n");
}else if(marks >=40){
    printf("Grade C");
}else{
    printf("Grade D");
}
return 0;
}