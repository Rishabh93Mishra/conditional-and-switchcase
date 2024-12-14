#include<stdio.h>
int main(){
	float calls,bill;
	printf("Enter the calls:\n");
	scanf("%f",&calls);
	if(calls<=50){
		bill=100;
	}
	else if (calls>=51&&calls<=100){
		bill =100+ (calls-50)*0.80;
	}
	else if(calls>=101&&calls<=200){
		bill= 100+(calls-100)*0.60;
	}
	else {
		bill = 100+(calls-200)*0.40;
	}
	printf("The payable bill is %.2f",bill);
	return 0;
}
