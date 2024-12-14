#include<stdio.h>
int main(){
	int choice,engrave;
	float totalcost =0;
	printf("Choose a ring type:\n");
	printf("1: for Gold Ring\n");
	printf("2: for Solid  Gold Ring \n");
	printf("3: for Silver Ring \n");
	printf("Enter your choice :\n");
	scanf("%d",&choice);
	printf("Enter the Engraved unit :");
	scanf ("%d",&engrave);
	switch(choice)
	{
		case 1:
			totalcost =500+(engrave*70.30);
			break;
			case 2:
			totalcost = 1000+(engrave*10.40);
			break;
			case 3:
			totalcost = 300+(engrave*5.10);
			break;
			default:
			printf("Invalid choice \n");
			return 1;	
	}
	printf("Totalcost : %.2f\n",totalcost);
	return 0;
	
}
