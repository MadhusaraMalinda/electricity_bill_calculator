#include <stdio.h>
void Main_Menu(int n);//MAIN MENU CALLING INSIDE 'main()' FUNCTION
void Sub_Menu(int n);//SUB MENU CALLING INSIDE 'Main_Menu' FUNCTION
void Rates__of__Domestic__users();							//----
void Rates__of__Religious__Users();							//   -------- CALLING INSIDE SUB MENU FUNCTION
void Rates__of__Industrial__Hotel__users();					//   -
void Rates__of__General__Purpose__Governmnet_Users();		//----
void Calculate__Domestic__users();							//---------
void Calculate__Religious__Users();							//		  --------CALLING INSIDE SUB MENU FUNCTION
void Calculate__Industrial__Hotel_Users();					//        -
void Calculate__General__Purpose__Government__Users();		//---------


int main(){
	int num;
	
	//CALLING MAIN MENU FUNCTION
	Main_Menu(num);
	return 0;
}
void Main_Menu(int n){
	int i;
	while(1){
		
		printf("\n");
		// '*' LINE CODING PART
		
		for (i=0;i<30;i++){				//-------
		printf(" ");					//		-
		}								//		-
		for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'WELCOME TO CEB ELECTRICITY BILL CALCULATOR' TITLE
		printf("*");					//		-
		}								//		-
		printf("\n");
		
		
		//WELCOME TITLE
		
		
		for (i=0;i<30;i++){										//-------
		printf(" ");											//		-
		}														//		-
																//		-
		for (i=0;i<9;i++){										//		-
		printf("*");											//		--------- TO PRINT 'WELCOME TO CEB ELECTRICITY BILL CALCULATOR' TITLE
		}														//		-
		printf(" WELCOME TO CEB ELECTRICITY BILL CALCULATOR ");	//		-
		for (i=0;i<10;i++){										//		-
		printf("*");											//		-
		}														//		-
		printf("\n");											//-------
		
		
		//DOMESTIC USERS SELECTION CODELINE
		
		for (i=0;i<30;i++){
		printf(" ");
		}
		printf("*");
		for (i=0;i<15;i++){
		printf(" ");
		}
		printf("[1]DOMESTIC USERS");
		for (i=0;i<29;i++){
		printf(" ");
		}
		printf("*\n");
		
		//RELIGIOUS USERS  SELECTION CODELINE
		
		for (i=0;i<30;i++){
		printf(" ");
		}
		printf("*");
		for (i=0;i<15;i++){
		printf(" ");
		}
		printf("[2]RELIGIOUS USERS");
		for (i=0;i<28;i++){
		printf(" ");
		}
		printf("*\n");
		
		
		//INDUSTRIAL/ HOTEL USERS  SELECTION CODELINE
		
		for (i=0;i<30;i++){
		printf(" ");
		}
		printf("*");
		for (i=0;i<15;i++){
		printf(" ");
		}
		printf("[3]INDUSTRIAL/ HOTEL USERS");;
		for (i=0;i<20;i++){
		printf(" ");
		}
		printf("*\n");
		
		
		//GENERAL PURPOSE/GOVERNMENT USERS  SELECTION CODELINE
		
		for (i=0;i<30;i++){
		printf(" ");
		}
		printf("*");
		for (i=0;i<15;i++){
		printf(" ");
		}
		printf("[4]GENERAL PURPOSE/GOVERNMENT USERS");
		for (i=0;i<11;i++){
		printf(" ");
		}
		printf("*\n");
		
		//EXIT PROGRAM CODELINE
		for (i=0;i<30;i++){
		printf(" ");
		}
		printf("*");
		for (i=0;i<15;i++){
		printf(" ");
		}
		printf("[5]EXIT THE PROGRAM");
		for (i=0;i<27;i++){
		printf(" ");
		}
		printf("*\n");
		
		// '*' LINE CODING PART FINAL LINE TO MAKE THE BOX SHAPE
		
		for (i=0;i<30;i++){				
		printf(" ");					
		}								
		for (i=0;i<63;i++){				
		printf("*");					
		}								
		printf("\n\n");
		
		//RESPONSE ENTERING LINE
		for (i=0;i<30;i++){				
		printf(" ");					
		}		
		printf("ENTER YOUR RESPONSE:");
		scanf("%d",&n);
	
	
		//FOR DOMESTIC USERS SECTION
		
		
		if (n==1){						
		printf("\n");		        		
										
		for (i=0;i<30;i++){				//-------
		printf(" ");					//		-
		}								//		-
		for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'DOMESTIC USERS' TITLE
		printf("*");					//		-
		}								//		-
		printf("\n");					//-------
		
		
		for (i=0;i<30;i++){					//-------
		printf(" ");						//		-
		}									//		-
											//		-
		for (i=0;i<17;i++){					//		-
		printf("*");						//		--------- TO PRINT 'DOMESTIC USERS' TITLE
		}									//		-
		printf("    DOMESTIC USERS    ");	//		-
		for (i=0;i<24;i++){					//		-
		printf("*");						//		-
		}									//		-
		printf("\n");						//-------
		
		Sub_Menu(n); //CALLING Sub_Menu FUNCTION
		
		
		break;
		
		} 
		
		
		//FOR RELIGIOUS USERS SECTION
		else if (n==2){	
		
		printf("\n");	
		
		for (i=0;i<30;i++){				//-------
		printf(" ");					//		-
		}								//		-
		for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'RELIGIOUS USERS' TITLE
		printf("*");					//		-
		}								//		-
		printf("\n");					//-------
		
		
		for (i=0;i<30;i++){					//-------
		printf(" ");						//		-
		}									//		-
											//		-
		for (i=0;i<17;i++){					//		-
		printf("*");						//		--------- TO PRINT 'RELIGIOUS USERS' TITLE
		}									//		-
		printf("    RELIGIOUS USERS   ");   //		-
		for (i=0;i<24;i++){					//		-
		printf("*");						//		-
		}									//		-
		printf("\n");						//-------
		
		Sub_Menu(n); //CALLING Sub_Menu FUNCTION
		
		
		break;
		
		} 
		
		
		//FOR INDUSTRIAL/ HOTEL USERS SECTION
		
		
		else if (n==3){
		
		printf("\n");		        		
										
		for (i=0;i<30;i++){				//-------
		printf(" ");					//		-
		}								//		-
		for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'INDUSTRIAL/ HOTEL USERS' TITLE
		printf("*");					//		-
		}								//		-
		printf("\n");					//-------
		
		
		for (i=0;i<30;i++){						//-------
		printf(" ");							//		-
		}										//		-
												//		-
		for (i=0;i<17;i++){						//		-
		printf("*");							//		--------- TO PRINT 'INDUSTRIAL/ HOTEL USERS' TITLE
		}										//		-
		printf(" INDUSTRIAL/ HOTEL USERS ");	//		-
		for (i=0;i<21;i++){						//		-
		printf("*");							//		-
		}										//		-
		printf("\n");							//-------
		
		Sub_Menu(n); //CALLING Sub_Menu FUNCTION
		
		
		break;
		
		} 
		
		
		//FOR GENERAL PURPOSE/GOVERNMENT USERS SECTION
		
		
		else if (n==4){
		
		printf("\n");		        		
										
		for (i=0;i<30;i++){				//-------
		printf(" ");					//		-
		}								//		-
		for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'GENERAL PURPOSE/GOVERNMENT USERS' TITLE
		printf("*");					//		-
		}								//		-
		printf("\n");					//-------
		
		
		for (i=0;i<30;i++){									//-------
		printf(" ");										//		-
		}													//		-
															//		-
		for (i=0;i<12;i++){									//		-
		printf("*");										//		--------- TO PRINT 'GENERAL PURPOSE/GOVERNMENT USERS' TITLE
		}													//		-
		printf("   GENERAL PURPOSE/GOVERNMENT USERS   ");	//		-
		for (i=0;i<13;i++){									//		-
		printf("*");										//		-
		}													//		-
		printf("\n");										//-------
		
		Sub_Menu(n); //CALLING Sub_Menu FUNCTION
		
		
		break;
		
		} 
		else if(n==5){
			
			printf("\n");
			for (i=0;i<30;i++){									
			printf(" ");										
			}	
			printf("QUITTING THE SYSTEM...!");
			break;
		}
		else {  
				printf("\n\n");
				for (i=0;i<30;i++){									
				printf(" ");										
				}	
				printf("WRONG RESPONSE TO THE SYSTEM\n");
				
				for (i=0;i<30;i++){									
				printf(" ");										
				}	
				printf("REDIRECTED TO MAIN MENU\n\n");
				
				
			}
	
	}
		
	
}

void Sub_Menu(int n){
	int i;
	while(1){
		
		//FOR BILLING RATES SELECTION CODELINE
		
		for (i=0;i<30;i++){
		printf(" ");
		}
		printf("*");
		for (i=0;i<15;i++){
		printf(" ");
		}
		printf("\t[1]BILLING RATES      ");
		for (i=0;i<22;i++){
		printf(" ");
		}
		printf("*\n");
		
		
		//FOR CALCULATE YOUR BILL SELECTION CODELINE
		
		for (i=0;i<30;i++){
		printf(" ");
		}
		printf("*");
		for (i=0;i<15;i++){
		printf(" ");
		}
		printf("\t[2]CALCULATE YOUR BILL");
		for (i=0;i<22;i++){
		printf(" ");
		}
		printf("*\n");
		
		
		//FOR GO TO MAIN SELECTION CODELINE
		
		for (i=0;i<30;i++){
		printf(" ");
		}
		printf("*");
		for (i=0;i<15;i++){
		printf(" ");
		}
		printf("\t[3]GO TO MAIN         ");
		for (i=0;i<22;i++){
		printf(" ");
		}
		printf("*\n");
		
		//FOR '*' LINE CODE 
		
		for (i=0;i<30;i++){
		printf(" ");
		}
		for (i=0;i<63;i++){
		printf("*");
		}
		printf("\n\n");
		
		//FOR ENTERING RESPONSE SELECTION
		
		for (i=0;i<30;i++){
		printf(" ");
		}
		
		printf("ENTER YOUR RESPONSE:");
		
		//SAVING THE SELECTION OF USER
		scanf("%d",&n);
		
		
		if (n==1){
			//ASKING USER TO ENTER RELEVANT LETTER TO CALL RELEVANT RATES FUNCTION
			char choice;
			printf("\n");
			for(i=0;i<30;i++){
					printf(" ");
			}
			printf("ENTER AGAIN RELEVANT LETTER TO VIEW THE RATES\n");
			
			for(i=0;i<30;i++){
					printf(" ");
			}
			printf("(D-DOMESTIC / R-RELIGIOUS / I-INDUSTRIAL & HOTEL / G-GENERAL & GOVERNMENT) :-");
				scanf("%s",&choice);
			if (choice=='D' ||choice=='d'){
				Rates__of__Domestic__users();
				break;
			}
			else if (choice=='R' || choice=='r'){
				Rates__of__Religious__Users();
				break;
			}
			else if (choice=='I' || choice=='i'){
				Rates__of__Industrial__Hotel__users();
				break;
			}
			else if (choice=='G' || choice=='g'){
				Rates__of__General__Purpose__Governmnet_Users();
				break;
			}
			else {
				printf("\nOOPS...! WRONG");
				
			}
			break;
		
		} 
		
		else if (n==2){
			
			//ASKING USER TO ENTER RELEVANT LETTER TO CALL RELEVANT CALCULATION FUNCTION
			char choice;
			printf("\n");
			for(i=0;i<30;i++){
					printf(" ");
			}
			printf("ENTER AGAIN RELEVANT LETTER TO VIEW THE CALCULATOR\n");
			
			for(i=0;i<30;i++){
					printf(" ");
			}
			printf("(D-DOMESTIC / R-RELIGIOUS / I-INDUSTRIAL & HOTEL / G-GENERAL & GOVERNMENT) :-");
				scanf("%s",&choice);
			if (choice=='D' ||choice=='d'){
				Calculate__Domestic__users();
				break;
			}
			else if (choice=='R' || choice=='r'){
				Calculate__Religious__Users();
				break;
			}
			else if (choice=='I' || choice=='i'){
				Calculate__Industrial__Hotel_Users();
				break;
			}
			else if (choice=='G' || choice=='g'){
				Calculate__General__Purpose__Government__Users();
				break;
			}
			else {
				printf("\nOOPS...! WRONG");
				
			}
			break;
			} 
		
		else if(n==3){
			
			printf("\n");
			for (i=0;i<30;i++){
			printf(" ");
			}
		
			printf("BACK TO THE MAIN MENU\n\n");
			Main_Menu(n);
			break;
		}
		else {	
				printf("\n");
				for (i=0;i<30;i++){
				printf(" ");
				}
				
				printf("WRONG RESPONSE TO THE SYSTEM\n");
				
				for (i=0;i<30;i++){
				printf(" ");
				}
				printf("REDIRECTED TO MAIN MENU\n\n");
				
				Main_Menu(n);
				break;
			}
	}
}



void Rates__of__Domestic__users(){
	int i,n;
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("_________________________________________________________________________________\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|                                   | # of Units | Energy Charge | Fixed Charge |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|                                   |   (kWh)    |   (LKR/kWh)   |  (LKR/month) |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|___________________________________|____________|_______________|______________|\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|Consumption 0-60 kWh per month     |            |               |              |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|                                   |    0-30    |     8.00      |     150.00   |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|                                   |    31-60   |     20.00     |     300.00   |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|Consumption above 60 kWh per month |            |               |              |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|                                   |    0-60    |     25.00     |    -         |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|                                   |    61-90   |     30.00     |    400.00    |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|                                   |   91-120   |     50.00     |    1000.00   |\n");
	for (i=0;i<30;i++){
		printf(" ");
	} 
	printf("|                                   |   121-180  |     50.00     |    1500.00   |\n");
	for (i=0;i<30;i++){
		printf(" ");
	} 
	printf("|                                   |  Above 180 |     70.00     |    2000.00   |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|___________________________________|____________|_______________|______________|\n\n");
	
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("PRESS '1' to GO BACK TO 'DOMESTIC USERS' MENU :-");
	
	scanf("%d",&n); //READS USERS RESPONSE
	
	printf("\n\n");	
			for (i=0;i<30;i++){				//-------
		printf(" ");					//		-
		}								//		-
		for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'DOMESTIC USERS' TITLE
		printf("*");					//		-
		}								//		-
		printf("\n");					//-------
		
		
		for (i=0;i<30;i++){					//-------
		printf(" ");						//		-
		}									//		-
											//		-
		for (i=0;i<17;i++){					//		-
		printf("*");						//		--------- TO PRINT 'DOMESTIC USERS' TITLE
		}									//		-
		printf("    DOMESTIC USERS    ");	//		-
		for (i=0;i<24;i++){					//		-
		printf("*");						//		-
		}									//		-
		printf("\n");						//-------
		
		Sub_Menu(n); //CALLING Sub_Menu FUNCTION
		
}


void Rates__of__Religious__Users(){
	int i,n;
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("_____________________________________________\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("| # of Units | Energy Charge | Fixed Charge |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|   (kWh)    |   (LKR/kWh)   |  (LKR/month) |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|____________|_______________|______________|\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|    0-30    |     8.00      |    150.00    |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|   31-90    |     9.00      |    250.00    |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|   91-120   |     18.00     |    600.00    |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|  121-180   |     32.00     |    1500.00   |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("| Above 180  |     43.00     |    2000.00   |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|____________|_______________|______________|\n\n");
	
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("PRESS '1' to GO BACK TO 'RELIGIOUS USERS' MENU :-");
	
	scanf("%d",&n); //READS USERS RESPONSE
	
	printf("\n\n");	
			for (i=0;i<30;i++){				//-------
		printf(" ");					//		-
		}								//		-
		for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'RELIGIOUS USERS' TITLE
		printf("*");					//		-
		}								//		-
		printf("\n");					//-------
		
		
		for (i=0;i<30;i++){					//-------
		printf(" ");						//		-
		}									//		-
											//		-
		for (i=0;i<17;i++){					//		-
		printf("*");						//		--------- TO PRINT 'RELIGIOUS USERS' TITLE
		}									//		-
		printf("    RELIGIOUS USERS   ");   //		-
		for (i=0;i<24;i++){					//		-
		printf("*");						//		-
		}									//		-
		printf("\n");						//-------
		
		Sub_Menu(n); //CALLING Sub_Menu FUNCTION
}
void Rates__of__Industrial__Hotel__users(){
	int i,n;
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("_____________________________________________\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("| # of Units | Energy Charge | Fixed Charge |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|   (kWh)    |   (LKR/kWh)   |  (LKR/month) |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|____________|_______________|______________|\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|   <=300    |     13.50     |    300.00    |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|   >300     |     21.50     |    1000.00   |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|____________|_______________|______________|\n\n");
	
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("PRESS '1' to GO BACK TO 'INDUSTRIAL/ HOTEL USERS' MENU :-");
	
	scanf("%d",&n); //READS USERS RESPONSE
	
	printf("\n\n");	
	for (i=0;i<30;i++){				//-------
		printf(" ");					//		-
		}								//		-
		for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'INDUSTRIAL/ HOTEL USERS' TITLE
		printf("*");					//		-
		}								//		-
		printf("\n");					//-------
		
		
		for (i=0;i<30;i++){						//-------
		printf(" ");							//		-
		}										//		-
												//		-
		for (i=0;i<17;i++){						//		-
		printf("*");							//		--------- TO PRINT 'INDUSTRIAL/ HOTEL USERS' TITLE
		}										//		-
		printf(" INDUSTRIAL/ HOTEL USERS ");	//		-
		for (i=0;i<21;i++){						//		-
		printf("*");							//		-
		}										//		-
		printf("\n");							//-------
		Sub_Menu(n);
}



void Rates__of__General__Purpose__Governmnet_Users(){
	int i,n;
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("_____________________________________________\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("| # of Units | Energy Charge | Fixed Charge |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|   (kWh)    |   (LKR/kWh)   |  (LKR/month) |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|____________|_______________|______________|\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|   <=180    |     33.00     |    600.00    |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|   >180     |     43.00     |    1500.00   |\n");
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("|____________|_______________|______________|\n\n");
	
	for (i=0;i<30;i++){
		printf(" ");
	}
	printf("PRESS '1' to GO BACK TO 'GENERAL PURPOSE/GOVERNMENT USERS' MENU :-");
	
	scanf("%d",&n); //READS USERS RESPONSE
	
	printf("\n\n");	
	for (i=0;i<30;i++){					//-------
		printf(" ");					//		-
		}								//		-
		for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'GENERAL PURPOSE/GOVERNMENT USERS' TITLE
		printf("*");					//		-
		}								//		-
		printf("\n");					//-------
		
		
		for (i=0;i<30;i++){									//-------
		printf(" ");										//		-
		}													//		-
															//		-
		for (i=0;i<12;i++){									//		-
		printf("*");										//		--------- TO PRINT 'GENERAL PURPOSE/GOVERNMENT USERS' TITLE
		}													//		-
		printf("   GENERAL PURPOSE/GOVERNMENT USERS   ");	//		-
		for (i=0;i<13;i++){									//		-
		printf("*");										//		-
		}													//		-
		printf("\n");										//-------
		Sub_Menu(n);
}


void Calculate__Domestic__users(){
	
	int n,i;
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	printf("--SELECT THE CONSUMPTION CATEGORY--");
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	printf("[1] 0-60 kWh PER MONTH"); //CONSUMPTION SELECTION CODELINE
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	printf("[2] ABOVE 60 kWh PER MONTH"); //CONSUMPTION SELECTION CODELINE
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	printf("ENTER:-");
	scanf("%d",&n);
	
	while(1){
		int unit,multiply,final_sum;
		if (n==1){
			
			
			int unit_1;
			
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
			printf("ENTER THE UNITS COUNT:- ");
			scanf("%d",&unit);
			
			if(unit>0 && unit<=30){
				multiply = unit * 8.00 ; 		//FOR UNITS LESS THAN 30 MULTIPLICATION
				final_sum = multiply + 150.00 ; //FOR FINAL CHARGE VALUE WITH FIXED CHARGE PER MONTH ADDITION
				
				
			printf("\n\n");	
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("_________________________________________________________\n");
				
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|               F I N A L    S U M M A RY               |\n");
			
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|_______________________________________________________|\n");
				
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|    DOMESTIC USERS      |               |    CHARGE    |\n");
				
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|________________________|_______________|______________|\n");
				
			
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  NO. OF UNITS          |      %d       |      -       |\n",unit);
				
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|                        |   %d * 8.00   |    %d.00    |\n",unit,multiply);
				
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  FIXED MONTHLY CHARGE  |       -       |    150.00    |\n");
				
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|________________________|_______________|______________|\n");
				
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  TOTAL PAYMENT         |               |  Rs.%d.00   |\n",final_sum);	
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|________________________|_______________|______________|");
				
			}
			else if(unit>=31 && unit<=60){
				unit_1= unit-30; //TO FILTER NUMBERS BELONG TO 31-60 RANGE UNITS TO MULTIPLY BY THEIR ENERGY CHARGE
				multiply= unit_1 * 20.00 ; //RELEVANT MULTIPLICATION
				final_sum = multiply + 240.00 + 300.00; //HERE 240=30*8 i.e. FIRST 30 UNITS CHARGE, 300 MEANS FIXED CHARGE PER MONTH
				
				
			printf("\n\n");	
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("_________________________________________________________\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|               F I N A L    S U M M A RY               |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|_______________________________________________________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|    DOMESTIC USERS      |               |    CHARGE    |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|  NO. OF UNITS          |      %d       |      -       |\n",unit);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|  FIRST 30 UNITS        |    30 * 8.00  |    240.00    |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|  LEFT %d UNITS         |   %d * 20.00  |    %d.00    |\n",unit_1,unit_1,multiply);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|  FIXED MONTHLY CHARGE  |       -       |    300.00    |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|  TOTAL PAYMENT         |               |  Rs.%d.00   |\n",final_sum);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|________________________|_______________|______________|");
			}
			break;
		}
		else if (n==2){
			int unit_1,multiply_0,multiply_1,multiply_2,multiply_3;
				//multiply_0 = 60 * 25.00 ;  FIRST 60 UNITS CHARGE 
				//multiply_1= 30 * 30.00;   61-90 UNITS CHARGE
				//multiply_2 = 30 * 50.00;  91-120 UNITS CHARGE
				//multiply_3 = 60 * 50.00 ; 121-180 UNITS CHARGE
			
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
			printf("ENTER THE UNITS COUNT:- ");
			scanf("%d",&unit);
			if (unit>0 && unit<=60){
				
				multiply_0 = 60 * 25.00 ; 		//FOR UNITS LESS THAN 60 MULTIPLICATION
				
			}
			else if (unit>=61 && unit<=90){
				unit_1=unit-60; //TO FILTER RANGE UNIT COUNT
				multiply= unit_1 * 30.00;
				multiply_0 = 60 * 25.00 ; 
				multiply_1= 30 * 30.00;
				final_sum=   multiply_0 + multiply + 400.00 ;// 400 MEANS FIXED MONTHLY CHARGE
				
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("_________________________________________________________\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("|               F I N A L    S U M M A RY               |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|_______________________________________________________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|    DOMESTIC USERS      |               |    CHARGE    |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  NO. OF UNITS          |      %d       |      -       |\n",unit);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  FIRST 60 UNITS        |   60 * 25.00  |    1500.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  LEFT %d UNITS         |  %d * 30.00   |     %d.00   |\n",unit_1,unit_1,multiply);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  FIXED MONTHLY CHARGE  |       -       |     400.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  TOTAL PAYMENT         |               |  Rs.%d.00  |\n",final_sum);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|________________________|_______________|______________|");
				
			}
			else if (unit>=91 && unit<=120){
				unit_1=unit-90; //TO FILTER RANGE UNIT COUNT
				multiply= unit_1 * 50.00;
				multiply_0 = 60 * 25.00 ; 
				multiply_1= 30 * 30.00;
				multiply_2 = 30 * 50.00;
				final_sum = multiply_0 + multiply_1 + multiply + 1000.00 ;// 1000 MEANS FIXED MONTHLY CHARGE
			
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
				printf("_________________________________________________________\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|               F I N A L    S U M M A RY               |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|_______________________________________________________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|    DOMESTIC USERS      |               |    CHARGE    |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  NO. OF UNITS          |      %d      |      -       |\n",unit);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  FIRST 60 UNITS        |   60 * 25.00  |    1500.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  61-90 UNITS           |   30 * 30.00  |     900.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  LEFT %d UNITS         |   %d * 50.00  |    %d.00   |\n",unit_1,unit_1,multiply);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  FIXED MONTHLY CHARGE  |       -       |    1000.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|  TOTAL PAYMENT         |               |  Rs.%d.00  |\n",final_sum);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("|________________________|_______________|______________|");
				
			}
			else if (unit>=121 && unit<=180){
				unit_1=unit-120; //TO FILTER RANGE UNIT COUNT
				multiply= unit_1 * 50.00;
				multiply_0 = 60 * 25.00 ; 
				multiply_1= 30 * 30.00;
				multiply_2 = 30 * 50.00;
				multiply_3 = 60 * 50.00 ;
				final_sum = multiply_0 + multiply_1 + multiply_2 + multiply + 1500.00 ;// 1500 MEANS FIXED MONTHLY CHARGE
			
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("_________________________________________________________\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|               F I N A L    S U M M A RY               |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|_______________________________________________________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|    DOMESTIC USERS      |               |    CHARGE    |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  NO. OF UNITS          |      %d      |      -       |\n",unit);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  FIRST 60 UNITS        |   60 * 25.00  |    1500.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  61-90 UNITS           |   30 * 30.00  |     900.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  91-120 UNITS          |   30 * 50.00  |    1500.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  LEFT %d UNITS         |   %d * 50.00  |    %d.00   |\n",unit_1,unit_1,multiply);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  FIXED MONTHLY CHARGE  |       -       |    1500.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  TOTAL PAYMENT         |               |  Rs.%d.00  |\n",final_sum);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|________________________|_______________|______________|");
			}
			else if (unit>=181 ){
				unit_1=unit-180; //TO FILTER RANGE UNIT COUNT
				multiply= unit_1 * 70.00;
				multiply_0 = 60 * 25.00 ; 
				multiply_1= 30 * 30.00;
				multiply_2 = 30 * 50.00;
				multiply_3 = 60 * 50.00 ;
				final_sum = multiply_0 + multiply_1 + multiply_2 + multiply_3 + multiply + 2000.00 ;// 2000 MEANS FIXED MONTHLY CHARGE
				
				
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----	
				printf("_________________________________________________________\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|               F I N A L    S U M M A RY               |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|_______________________________________________________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|    DOMESTIC USERS      |               |    CHARGE    |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  NO. OF UNITS          |      %d      |      -       |\n",unit);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  FIRST 60 UNITS        |   60 * 25.00  |    1500.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  61-90 UNITS           |   30 * 30.00  |     900.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  91-120 UNITS          |   30 * 50.00  |    1500.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  121-180 UNITS         |   60 * 50.00  |    3000.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  LEFT %d UNITS         |   %d * 70.00  |    %d.00   |\n",unit_1,unit_1,multiply);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  FIXED MONTHLY CHARGE  |       -       |    2000.00   |\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|  TOTAL PAYMENT         |               | Rs.%d.00  |\n",final_sum);
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----		
				printf("|________________________|_______________|______________|");
				
			}
			break;
		}
		else{
			printf("\n\n");	
			for(i=0;i<30;i++){
			printf(" ");
			}
			printf("INVALID RESPONSE...BACK TO 'DOMESTIC USERS' AGAIN..!!!!");
			printf("\n\n");	
			
			//REDIRECTING TO DOMESTIC USERS MENU WHEN INVALID RESPONSE HAPPENS
			for (i=0;i<30;i++){				//-------
			printf(" ");					//		-
			}								//		-
			for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'DOMESTIC USERS' TITLE
			printf("*");					//		-
			}								//		-
			printf("\n");					//-------
		
		
			for (i=0;i<30;i++){					//-------
			printf(" ");						//		-
			}									//		-
											//		-
			for (i=0;i<17;i++){					//		-
			printf("*");						//		--------- TO PRINT 'DOMESTIC USERS' TITLE
			}									//		-
			printf("    DOMESTIC USERS    ");	//		-
			for (i=0;i<24;i++){					//		-
			printf("*");						//		-
			}									//		-
			printf("\n");						//-------
		
			Sub_Menu(n); //CALLING Sub_Menu FUNCTION
			break;
		}
		
	}
}


void Calculate__Religious__Users(){
	int unit,i;
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	
	printf("ENTER THE NO. OF UNITS :-");
	scanf("%d",&unit);
	int multiply,final_sum;
	int unit_1,multiply_0,multiply_1,multiply_2,multiply_3;
				//multiply_0 = 30 * 8.00 ;  FIRST 30 UNITS CHARGE 
				//multiply_1= 60 * 9.00;   31-90 UNITS CHARGE
				//multiply_2 = 30 * 18.00;  91-120 UNITS CHARGE
				//multiply_3 = 60 * 32.00 ; 121-180 UNITS CHARGE
			
			printf("\n");
			if (unit>0 && unit<=30){
				
				multiply_0 = unit * 8.00 ; 		//FOR UNITS LESS THAN OR EQUAL 30 MULTIPLICATION
				final_sum= multiply_0 + 150.00; // 150 MEANS FIXED MONTHLY CHARGE
				
			for(i=0;i<30;i++){
			printf(" ");
			}
				printf("_________________________________________________________\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|               F I N A L    S U M M A RY               |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|_______________________________________________________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|    RELIGIOUS USERS     |               |    CHARGE    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  NO. OF UNITS          |      %d       |      -       |\n",unit);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|                        |    %d * 8.00  |    %d.00    |\n",unit,multiply_0);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  FIXED MONTHLY CHARGE  |       -       |    150.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  TOTAL PAYMENT         |               |  Rs.%d.00   |\n",final_sum);
			for(i=0;i<30;i++){
			printf(" ");
			}
				printf("|________________________|_______________|______________|");
				
			}
			else if (unit>=31 && unit<=90){
				unit_1=unit-30; //TO FILTER RANGE UNIT COUNT
				multiply= unit_1 * 9.00;
				multiply_0 = 30 * 8.00 ;
				multiply_1= 60 * 9.00;
				final_sum=   multiply_0 + multiply + 250.00 ; //250 MEANS MONTHLY FIXED CHARGE
				
			for(i=0;i<30;i++){
			printf(" ");
			}
				printf("_________________________________________________________\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|               F I N A L    S U M M A RY               |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|_______________________________________________________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|    RELIGIOUS USERS     |               |    CHARGE    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  NO. OF UNITS          |      %d       |      -       |\n",unit);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  FIRST 30 UNITS        |    30 * 8.00  |    240.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  LEFT %d UNITS         |   %d * 9.00   |    %d.00    |\n",unit_1,unit_1,multiply);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  FIXED MONTHLY CHARGE  |       -       |    250.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  TOTAL PAYMENT         |               |  Rs.%d.00   |\n",final_sum);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|_______________|______________|");
				
			
			}
			else if (unit>=91 && unit<=120){
				unit_1=unit-90; //TO FILTER RANGE UNIT COUNT
				multiply= unit_1 * 18.00;
				multiply_0 = 30 * 8.00 ;
				multiply_1= 60 * 9.00;
				multiply_2 = 30 * 18.00;
				final_sum = multiply_0 + multiply_1 + multiply + 600.00 ;// 600 MEANS FIXED MONTHLY CHARGE
				
			for(i=0;i<30;i++){
			printf(" ");
			}
				printf("_________________________________________________________\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|               F I N A L    S U M M A RY               |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|_______________________________________________________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|    RELIGIOUS USERS     |               |    CHARGE    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  NO. OF UNITS          |      %d      |      -       |\n",unit);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  FIRST 30 UNITS        |    30 * 8.00  |    240.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  31-90 UNITS           |    60 * 9.00  |    540.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  LEFT %d UNITS         |   %d * 18.00  |    %d.00    |\n",unit_1,unit_1,multiply);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  FIXED MONTHLY CHARGE  |       -       |    600.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  TOTAL PAYMENT         |               |  Rs.%d.00  |\n",final_sum);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|_______________|______________|");
				
			
			}
			else if (unit>=121 && unit<=180){
				unit_1=unit-120; //TO FILTER RANGE UNIT COUNT
				multiply= unit_1 * 32.00;
				multiply_0 = 30 * 8.00 ;
				multiply_1= 60 * 9.00;
				multiply_2 = 30 * 18.00;
				multiply_3 = 60 * 32.00 ;
				final_sum = multiply_0 + multiply_1 + multiply_2 + multiply + 1500.00 ;// 1500 MEANS FIXED MONTHLY CHARGE
				
			for(i=0;i<30;i++){
			printf(" ");
			}
				printf("_________________________________________________________\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|               F I N A L    S U M M A RY               |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|_______________________________________________________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|    RELIGIOUS USERS     |               |    CHARGE    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  NO. OF UNITS          |      %d      |      -       |\n",unit);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  FIRST 30 UNITS        |    30 * 8.00  |    240.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  31-90 UNITS           |    60 * 9.00  |    540.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  91-120 UNITS          |    30 * 18.00 |    540.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  LEFT %d UNITS         |   %d * 32.00  |    %d.00    |\n",unit_1,unit_1,multiply);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  FIXED MONTHLY CHARGE  |       -       |   1500.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  TOTAL PAYMENT         |               |  Rs.%d.00  |\n",final_sum);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|_______________|______________|");
			
			}
			else if (unit>=181 ){
				unit_1=unit-180; //TO FILTER RANGE UNIT COUNT
				multiply= unit_1 * 43.00;
				multiply_0 = 30 * 8.00 ;
				multiply_1= 60 * 9.00;
				multiply_2 = 30 * 18.00;
				multiply_3 = 60 * 32.00 ;
				final_sum = multiply_0 + multiply_1 + multiply_2 + multiply_3 + multiply + 2000.00 ;// 2000 MEANS FIXED MONTHLY CHARGE
				
			for(i=0;i<30;i++){
			printf(" ");
			}
				printf("_________________________________________________________\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
                printf("|    RELIGIOUS USERS     |               |    CHARGE    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
                printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
                printf("|  NO. OF UNITS          |      %d      |      -       |\n",unit);
			for(i=0;i<30;i++){
			printf(" ");
			}	
                printf("|  FIRST 30 UNITS        |    30 * 8.00  |    240.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
                printf("|  31-90 UNITS           |    60 * 9.00  |    540.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  91-120 UNITS          |    30 * 18.00 |    540.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  121-180 UNITS         |    60 * 32.00 |   1920.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
                printf("|  LEFT %d UNITS         |   %d * 43.00  |    %d.00    |\n",unit_1,unit_1,multiply);
			for(i=0;i<30;i++){
			printf(" ");
			}	
                printf("|  FIXED MONTHLY CHARGE  |       -       |   2000.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
                printf("|________________________|_______________|______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
                printf("|  TOTAL PAYMENT         |               |  Rs.%d.00  |\n",final_sum);
			for(i=0;i<30;i++){
			printf(" ");
			}	
                printf("|________________________|_______________|______________|");
			
				
			}
}

void Calculate__Industrial__Hotel_Users(){
	int n,i;
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	printf("SELECT THE CONSUMPTION CATEGORY");
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	printf("[1] UNITS <= 300 kWh PER MONTH");
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	printf("[2] UNITS > 300 kWh PER MONTH");
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	printf("ENTER:-");
	scanf("%d",&n);
	
	while(1){
		float unit,final_sum,multiply; //HERE WE HAVE TO ASSIGN UNIT AND FINAL_SUM,MULTIPLY AS FLOAT BCZ ENERGY CHARGE PER Kwh IS A FLOAT NUMBER
		
		if (n==1){
			printf("\n\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
			printf("ENTER THE UNITS COUNT:- ");
			scanf("%f",&unit);
			if(unit>0 && unit<=300){
				multiply= unit * 13.50;
				final_sum= multiply + 300.00 ;
			
			printf("\n");
			for(i=0;i<30;i++){
			printf(" ");
			}
				printf("___________________________________________________________\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|               F I N A L    S U M M A RY                 |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|_________________________________________________________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("| INDUSTRIAL/HOTEL USERS |                |    CHARGE     |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|________________|_______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  NO. OF UNITS          |      %.f       |       -       |\n",unit);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|                        | %.f * 13.50    |    %.2f    |\n",unit,multiply);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  FIXED MONTHLY CHARGE  |       -        |    300.00     |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|________________|_______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  TOTAL PAYMENT         |                | Rs.%.2f    |\n",final_sum);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|________________|_______________|");
				break;
				
			}
			//INCASE IF THE USER ENTERS ANY NUMBER MORE THAN 300, THIS SECTION IS FOR BELOW 300 UNITS
			else{
				printf("\n\n");	
			for(i=0;i<30;i++){
			printf(" ");
			}
			printf("COUNT NUMBER OUT OF CONDITION...BACK TO 'INDUSTRIAL/ HOTEL USERS' AGAIN..!!!!");
			
			
			printf("\n\n");	
			for (i=0;i<30;i++){				//-------
			printf(" ");					//		-
			}								//		-
			for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'INDUSTRIAL/ HOTEL USERS' TITLE
			printf("*");					//		-
			}								//		-
			printf("\n");					//-------
		
		
			for (i=0;i<30;i++){						//-------
			printf(" ");							//		-
			}										//		-
												//		-
			for (i=0;i<17;i++){						//		-
			printf("*");							//		--------- TO PRINT 'INDUSTRIAL/ HOTEL USERS' TITLE
			}										//		-
			printf(" INDUSTRIAL/ HOTEL USERS ");	//		-
			for (i=0;i<21;i++){						//		-
			printf("*");							//		-
			}										//		-
			printf("\n");							//-------
		
			Sub_Menu(n); //CALLING Sub_Menu FUNCTION
			break;
		}
		}
		else if (n==2){
			printf("\n\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
			printf("ENTER THE UNITS COUNT:- ");
			scanf("%f",&unit);
			if(unit>300){
				multiply= unit * 21.50;
				final_sum= multiply + 1000.00 ;
			
			printf("\n");
			for(i=0;i<30;i++){
			printf(" ");
			}
				printf("___________________________________________________________\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|               F I N A L    S U M M A RY                 |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|_________________________________________________________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("| INDUSTRIAL/HOTEL USERS |                |    CHARGE     |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|________________|_______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  NO. OF UNITS          |      %.f       |       -       |\n",unit);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|                        | %.f * 21.50    |    %.2f    |\n",unit,multiply);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  FIXED MONTHLY CHARGE  |       -        |    1000.00    |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|________________|_______________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  TOTAL PAYMENT         |                | Rs.%.2f   |\n",final_sum);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|________________________|________________|_______________|");
				break;
				
			}
			//INCASE IF THE USER ENTERS ANY NUMBER LESS THAN 300, THIS SECTION IS FOR MORE THAN 300 UNITS
			else{
				printf("\n\n");	
			for(i=0;i<30;i++){
			printf(" ");
			}
			printf("COUNT NUMBER OUT OF CONDITION...BACK TO 'INDUSTRIAL/ HOTEL USERS' AGAIN..!!!!");
			
			
			printf("\n\n");	
			for (i=0;i<30;i++){				//-------
			printf(" ");					//		-
			}								//		-
			for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'INDUSTRIAL/ HOTEL USERS' TITLE
			printf("*");					//		-
			}								//		-
			printf("\n");					//-------
		
		
			for (i=0;i<30;i++){						//-------
			printf(" ");							//		-
			}										//		-
												//		-
			for (i=0;i<17;i++){						//		-
			printf("*");							//		--------- TO PRINT 'INDUSTRIAL/ HOTEL USERS' TITLE
			}										//		-
			printf(" INDUSTRIAL/ HOTEL USERS ");	//		-
			for (i=0;i<21;i++){						//		-
			printf("*");							//		-
			}										//		-
			printf("\n");							//-------
		
			Sub_Menu(n); //CALLING Sub_Menu FUNCTION
			break;
		}
		}
		else{
			printf("\n\n");	
			for(i=0;i<30;i++){
			printf(" ");
			}
			printf("INVALID RESPONSE...BACK TO 'INDUSTRIAL/ HOTEL USERS' AGAIN..!!!!");
			
			printf("\n\n");	
			for (i=0;i<30;i++){				//-------
			printf(" ");					//		-
			}								//		-
			for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'INDUSTRIAL/ HOTEL USERS' TITLE
			printf("*");					//		-
			}								//		-
			printf("\n");					//-------
		
		
			for (i=0;i<30;i++){						//-------
			printf(" ");							//		-
			}										//		-
													//		-
			for (i=0;i<17;i++){						//		-
			printf("*");							//		--------- TO PRINT 'INDUSTRIAL/ HOTEL USERS' TITLE
			}										//		-
			printf(" INDUSTRIAL/ HOTEL USERS ");	//		-
			for (i=0;i<21;i++){						//		-
			printf("*");							//		-
			}										//		-
			printf("\n");							//-------
		
			Sub_Menu(n); //CALLING Sub_Menu FUNCTION
			}
			break;
		
	}
}

void Calculate__General__Purpose__Government__Users(){
	int n,i;
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	printf("SELECT THE CONSUMPTION CATEGORY");
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	printf("[1] UNITS <= 180 kWh PER MONTH");
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	printf("[2] UNITS > 180 kWh PER MONTH");
	printf("\n\n");
	for(i=0;i<30;i++){
		printf(" ");
	}
	printf("ENTER:-");
	scanf("%d",&n);
	
	while(1){
		int unit,final_sum,multiply; 
		
		if (n==1){
			printf("\n\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
			printf("ENTER THE UNITS COUNT:- ");
			scanf("%d",&unit);
			if(unit>0 && unit<=180){
				multiply= unit * 33.00;
				final_sum= multiply + 600.00 ;
			
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("________________________________________________________________\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|                   F I N A L    S U M M A RY                  |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|______________________________________________________________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("| GENERAL/GOVERNMENT USERS |                |    CHARGE        |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|__________________________|________________|__________________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}		
				printf("|  NO. OF UNITS            |      %d       |       -          |\n",unit);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|                          | %d * 33.00    |    %d.00       |\n",unit,multiply);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  FIXED MONTHLY CHARGE    |       -        |     600.00       |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|__________________________|________________|__________________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  TOTAL PAYMENT           |                | Rs.%d.00       |\n",final_sum);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|__________________________|________________|__________________|");
				break;
				
			}
			//INCASE IF THE USER ENTERS ANY NUMBER MORE THAN 180, THIS SECTION IS FOR BELOW 180 UNITS
			else{
				printf("\n\n");	
			for(i=0;i<30;i++){
			printf(" ");
			}
			printf("COUNT NUMBER OUT OF CONDITION...BACK TO 'GENERAL PURPOSE/GOVERNMENT USERS' AGAIN..!!!!");
			
			
			printf("\n\n");	
		for (i=0;i<30;i++){				//-------
		printf(" ");					//		-
		}								//		-
		for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'GENERAL PURPOSE/GOVERNMENT USERS' TITLE
		printf("*");					//		-
		}								//		-
		printf("\n");					//-------
		
		
		for (i=0;i<30;i++){									//-------
		printf(" ");										//		-
		}													//		-
															//		-
		for (i=0;i<12;i++){									//		-
		printf("*");										//		--------- TO PRINT 'GENERAL PURPOSE/GOVERNMENT USERS' TITLE
		}													//		-
		printf("   GENERAL PURPOSE/GOVERNMENT USERS   ");	//		-
		for (i=0;i<13;i++){									//		-
		printf("*");										//		-
		}													//		-
		printf("\n");										//-------
		
		Sub_Menu(n); //CALLING Sub_Menu FUNCTION
			break;
		}
		}
		else if (n==2){
			printf("\n\n");
			for(i=0;i<30;i++){		//----
			printf(" ");			//   ---- TO GET THE OUTPUT CODE TO CENTRE SIDE OF SCREEN
			}						//----
			printf("ENTER THE UNITS COUNT:- ");
			scanf("%d",&unit);
			if(unit>180){
				multiply= unit * 43.00;
				final_sum= multiply + 1500.00 ; //1500 MEANS FIXED MONTHLY CHARGE
			
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("________________________________________________________________\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|                   F I N A L    S U M M A RY                  |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|______________________________________________________________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("| GENERAL/GOVERNMENT USERS |                |    CHARGE        |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|__________________________|________________|__________________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}		
				printf("|  NO. OF UNITS            |      %d       |       -          |\n",unit);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|                          | %d * 43.00    |    %d.00       |\n",unit,multiply);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  FIXED MONTHLY CHARGE    |       -        |    1500.00       |\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|__________________________|________________|__________________|\n");
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|  TOTAL PAYMENT           |                | Rs.%d.00       |\n",final_sum);
			for(i=0;i<30;i++){
			printf(" ");
			}	
				printf("|__________________________|________________|__________________|");
				break;
				
			}
			//INCASE IF THE USER ENTERS ANY NUMBER LESS THAN 180, THIS SECTION IS FOR MORE THAN 180 UNITS
			else{
				printf("\n\n");	
			for(i=0;i<30;i++){
			printf(" ");
			}
			printf("COUNT NUMBER OUT OF CONDITION...BACK TO 'GENERAL PURPOSE/GOVERNMENT USERS' AGAIN..!!!!");
			
			
		for (i=0;i<30;i++){				//-------
		printf(" ");					//		-
		}								//		-
		for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'GENERAL PURPOSE/GOVERNMENT USERS' TITLE
		printf("*");					//		-
		}								//		-
		printf("\n");					//-------
		
		
		for (i=0;i<30;i++){									//-------
		printf(" ");										//		-
		}													//		-
															//		-
		for (i=0;i<12;i++){									//		-
		printf("*");										//		--------- TO PRINT 'GENERAL PURPOSE/GOVERNMENT USERS' TITLE
		}													//		-
		printf("   GENERAL PURPOSE/GOVERNMENT USERS   ");	//		-
		for (i=0;i<13;i++){									//		-
		printf("*");										//		-
		}													//		-
		printf("\n");										//-------
		
		Sub_Menu(n); //CALLING Sub_Menu FUNCTION
			break;
		}
		}
		else{
			printf("\n\n");	
			for(i=0;i<30;i++){
			printf(" ");
			}
			printf("INVALID RESPONSE...BACK TO 'GENERAL PURPOSE/GOVERNMENT USERS' AGAIN..!!!!");
			
			printf("\n\n");	
			for (i=0;i<30;i++){				//-------
		printf(" ");					//		-
		}								//		-
		for (i=0;i<63;i++){				//		------- TO PRINT '*' LINE ABOVE 'GENERAL PURPOSE/GOVERNMENT USERS' TITLE
		printf("*");					//		-
		}								//		-
		printf("\n");					//-------
		
		
		for (i=0;i<30;i++){									//-------
		printf(" ");										//		-
		}													//		-
															//		-
		for (i=0;i<12;i++){									//		-
		printf("*");										//		--------- TO PRINT 'GENERAL PURPOSE/GOVERNMENT USERS' TITLE
		}													//		-
		printf("   GENERAL PURPOSE/GOVERNMENT USERS   ");	//		-
		for (i=0;i<13;i++){									//		-
		printf("*");										//		-
		}													//		-
		printf("\n");										//-------
		
		Sub_Menu(n); //CALLING Sub_Menu FUNCTION
			}
			break;
		
	}
}
