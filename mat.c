#include "mat.h"

void main(){
	int num1,num2;

	//get input from keyboard
	printf("Enter First Number: \n");
	scanf("%d",&num1);

	printf("Enter Second Number: \n");
	scanf("%d",&num2);

	//display the result
	printf("sum value is:%d\n",Add(num1,num2) );

	printf("diffrence value is:%d\n",Sub(num1,num2) );

	printf("Multiple value is:%d\n",Mul(num1,num2) );

	printf("Divided value is:%lf\n",Div(num1,num2) );
}

int Add(int num1, int num2){
	return num1+num2;
}

int Sub(int num1,int num2){
	return num1-num2;
}

int Mul(int num1,int num2){
	return num1*num2;
}

double Div(int num1,int num2){
	return num1/num2;
}
