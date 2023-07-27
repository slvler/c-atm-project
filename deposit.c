#include "deposit.h"


struct deposit {
	float price;
	char *type;
	char *date;
}deposit1;

void deposit_init()
{
	int choice;
	printf("Deposit Init\n");
	printf("[1] Deposit Lodgement\n");

	printf("Choice:\n");
	scanf("%d", &choice);
	
	switch(choice){
		case 1:
			deposit_lodgement();
			break;
	}
}	

void deposit_lodgement()
{

	int amount;
	printf("Amount: ");
	scanf("%d", &amount);
	
	deposit1.price = amount;
	deposit1.type = "l";
	deposit1.date = "2023/12/12";
	
	
	printf("Succesfull!");
	
	printf("Deposit Lodgement\n");
	
}
