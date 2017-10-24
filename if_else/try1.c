#include<stdio.h>
int main(){
	int month;
	printf("Please input the month:\n");
	scanf("%d", &month);
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		printf("There are 31 days in this month\n");
	else if(month == 4 || month == 6 || month == 9 || month == 11)
		printf("There are 30 days in this month\n");
	else if(month == 2)
		printf("There are 28 days in this month\n");
	else
		printf("This is not a legal month\n");
	return 0;
}
