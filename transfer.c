#include "transfer.h"


struct transfer {
	float price;
	char *type;
	char *date;
}transfer1;

void transfer_init()
{
	int choice;
	
	printf("Transfer Init\n");
	printf("[1] Seeding money\n");
	printf("[2] Transaction history\n");
	
	printf("Choice:\n");
	scanf("%d", &choice);
	
	
	switch(choice){
		case 1:
			transfer_sending_money();
			break;
		case 2:
			transfer_transaction_history();
			break;
	}
	
	
}
void transfer_sending_money()
{	
	int amount;
	printf("Transfer sending money\n");
	printf("Amount: ");
	scanf("%d", &amount);
	
	transfer1.price = amount;
	transfer1.type = 'Send Money';
	transfer1.date = "2023/12/12";

}
void transfer_transaction_history()
{
	printf("Transfer Transaction history\n");
}
