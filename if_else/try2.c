#include<stdio.h>
int main(){
        int month;
        printf("Please input the month:\n");
        scanf("%d", &month);
        switch(month){
		case 1:
			printf("There are 31 days in this month\n");
			break;
		case 2:	
			printf("There are 28 days in this month\n");
			break;
		case 3:
                        printf("There are 31 days in this month\n");
                        break;
		case 4:
			printf("There are 30 days in this month\n");
			break;
		case 5:
                        printf("There are 31 days in this month\n");
                        break;
		case 6:	
                        printf("There are 30 days in this month\n");
                        break;
		case 7:
                        printf("There are 31 days in this month\n");
                        break;
		case 8:
                        printf("There are 31 days in this month\n");
                        break;
		case 9:
                        printf("There are 30 days in this month\n");
                        break;
		case 10:
                        printf("There are 31 days in this month\n");
                        break;
		case 11:
                        printf("There are 30 days in this month\n");
                        break;
		case 12:
                        printf("There are 31 days in this month\n");
                        break;
		default:
			printf("This is not a legal month\n");
	}
	return 0;
}

