#include<stdio.h>
int main(){
	float in,tax;
	printf("Enter the income :\n");
	scanf("%f",&in);
	if(in<=100000){
		tax=0;
	}
	else if (in>=100001&&in<=150000){
		tax = (in-100000)*0.10;
	}
	else if(in>=150001&&in<=250000){
		tax= 5000+(in-150000)*0.20;
	}
	else {
		tax = 25000+(in-250000)*0.30;
	}
	printf("The payable tax is %.2f",tax);
	return 0;
}
