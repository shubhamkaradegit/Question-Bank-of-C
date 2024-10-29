#include<stdio.h>

int main(){
int side1,side2,side3;
printf("Enter three sides of triangle : ");
scanf("%d %d %d",&side1,&side2,&side3);


if(side1 == side2 && side2 == side3){
    printf("Equilateral Triangle\n");
}else{
    printf("Not Equilateral Triangle"); 
}
return 0;
}