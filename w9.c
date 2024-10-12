#include <stdio.h>

void menu();                //Function to display main menu
void bill(int category);    //To calculate & show bill

int main(){
	int choice;             //Variable to store user's menu choice
	
	printf(" _________________________________________________________________ \n");
	printf("||||||||||||||||    ELECTRICITY BILL CALCULATOR    ||||||||||||||||\n");
	
	while (1) {            // Keeps the program running until the user decides to exit
        menu();  
        printf("Enter the number corresponding to your choice: ");
        scanf("%d", &choice);
		
		if (choice==1 || choice==2 || choice==3 || choice==4){
			bill(choice);
		}
		else if (choice==5){
			return 0;
		}
		else {
			printf("Please Select A Valid Option\n");
		}
    }

    return 0;
}

void menu() {
	printf(" _________________________________________________________________ \n");
	printf("|                        Main Menu                                |\n");
	printf("|_________________________________________________________________|\n");
	printf("|               (1)Domestic Users                                 |\n");
	printf("|               (2)Religious Users                                |\n");
	printf("|               (3)Industrial/Hotel Sector                        |\n");
	printf("|               (4)General Purpose/Government Sector              |\n");
	printf("|               (5)Exit                                           |\n");
	printf("|_________________________________________________________________|\n");
}

void bill(int category) {
    int units;                                            // Number of units used?
	float E_charge=0, fixed_charge=0, total_bill=0;       // Variables to store the charges and total bill amount
    
    printf("Number of Units = ");
	scanf("%d", &units);
	
    if (category==1){
		if (units<=30){
			E_charge= units * 8.00;
			fixed_charge= 150.00;
		}
	else if (units<=60){
			E_charge= 30 * 8.00 + ((units - 30) * 20.00);
			fixed_charge= 300.00;
		}
	else if (units<=90){
			E_charge= (60 * 25.00) + ((units - 60) * 30.00);
			fixed_charge= 400.00;
		}
	else if (units<=120){
			E_charge= (60 * 25.00) + (30 * 30.00) + ((units - 90) * 50.00);
			fixed_charge= 1000.00;
		}
	else if (units<=180){
			E_charge= (60 * 25.00) + (30 * 30.00) + (30 * 50.00) + ((units - 120) * 50.00);
			fixed_charge= 1500.00;
		}
	else {
			E_charge= (60 * 25.00) + (30 * 30.00) + (30 * 50.00) + (60 * 50.00) + ((units - 180) * 70.00);
			fixed_charge= 2000.00;
		}
	}
	
	
	if (category==2){
		if (units<=30){
			E_charge= units * 8.00;
			fixed_charge= 150.00;
		}
	else if (units<=90){
			E_charge= (30 * 8.00) + ((units - 30) * 9.00);
			fixed_charge= 250.00;
		}
	else if (units<=120){
			E_charge= (30 * 8.00) + (60 * 9.00) + ((units - 90) * 18.00);
			fixed_charge= 600.00;
		}
	else if (units<=180){
			E_charge= (30 * 8.00) + (60 * 9.00) + (30 * 18.00) + ((units - 120) * 32.00);
			fixed_charge= 1500.00;
		}
	else {
			E_charge= (30 * 8.00) + (60 * 9.00) + (30 * 18.00) + (60 * 32.00) + ((units - 180) * 43.00);
			fixed_charge= 2000.00;
		}
	}
	
	else if (category==3){
		if (units<=300){
			E_charge= units * 13.50;
			fixed_charge= 300.00;
		}
		else {
			E_charge= (300 * 13.50) + ((units - 300) * 21.50);
			fixed_charge= 1000.00;
		}
	}
	
	else if (category==4){
		if (units<=180){
			E_charge= units * 33.00;
			fixed_charge= 600.00;
		}
		else {
			E_charge= (180 * 33.00) + ((units - 180) * 43.00);
			fixed_charge= 1500.00;
		}
	}
	
	total_bill = E_charge + fixed_charge;
	
	printf(" _________________________________________________________________ \n");
	printf("                        ELECTRICITY BILL                           \n");
	printf(" _________________________________________________________________ \n");
	printf("      Cost for Consumed Units    |      LKR %.2f                   \n", E_charge);
	printf("       Fixed Monthly Charge      |      LKR %.2f                   \n", fixed_charge);
	printf(" *****  TOTAL BILL AMOUNT  ******|      LKR %.2f                   \n", total_bill);
	printf(" _________________________________________________________________ \n");
}