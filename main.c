#include <stdio.h>
#include <stdlib.h>


void deposit_init();
void deposit_lodgement();

void balance_init();
void balance_viewing();

void transfer_init();
void transfer_sending_money();
void transfer_transaction_history();

void withdraw_init();
void withdraw_money();

/*
	- Ana menü
		- process_selection()

	- Para yatırma - Deposit

		- deposit_init()
		- deposit_lodgement()
		- balance_file

	- Para çekme - Withdraw

		- withdraw_init()
		- withdraw_money()
		- balance_file

	- Bakiye görüntüleme - Balance

		- balance_init()
		- balance_viewing()
		- balance_file

	- Havele - Transfer

		- transfer_init()
		- transfer_sending_money()
		- transfer_transaction_history()
		- balance_file
		- transfer_file

*/

void save_file();

int main(int argc, char *argv[]) {

    // ...
    //save_file(); // pass FILENAME to save_file

    //process_selection();
    /*
    balance_init();
    balance_viewing();
    deposit_init();
    deposit_lodgement();
    transfer_init();
    transfer_sending_money();
    transfer_transaction_history();
    withdraw_init();
    withdraw_money();
    */

    int choice;
    printf("%s", "****************\n");
    printf("%s", "[1] Transfer\n");
    printf("%s", "[2] Deposit\n");
    printf("%s", "[3] Balance inquiry\n");
    printf("%s", "[4] withdraw money\n");

    printf("Choice:\n");
    scanf("%d", &choice);


    if( choice == 1){
        transfer_init();
    }else if(choice == 2){
        deposit_init();
    }else if(choice == 3){
        balance_init();
    }else if(choice == 4){
        withdraw_init();
    }

	return 0;
}

void save_file()
{
    FILE *fptr;
    fptr = fopen("filename.txt", "w");
    fprintf(fptr, "Some text");
    fclose(fptr);
}

void process_selection()
{

    int choice;

    printf("%s", "****************\n");
    printf("%s", "[1] Transfer\n");
    printf("%s", "[2] Deposit\n");
    printf("%s", "[3] Balance inquiry\n");
    printf("%s", "[4] withdraw money\n");

    printf("Choice:\n");
    scanf("%d", &choice);


    if( choice == 1){
        transfer_init();
    }else if(choice == 2){
        deposit_init();
    }else if(choice == 3){
        balance_init();
    }else if(choice == 4){
        withdraw_init();
    }

    /*

    switch(choice){
        case 1:
            transfer_init();
            //printf("%s", "[1] Transfer\n");
            break;
        case 2:
            printf("%s", "[2] Deposit\n");
            break;
        case 3:
            printf("%s", "[3] Balance inquiry\n");
            break;
        case 4:
            printf("%s", "[4] withdraw money\n");
            break;
    }

    */
    //printf("total: %d", choice);
    //printf("naber\n");
}


/*
 * Balance
 */

void balance_init()
{
    int choice;
    printf("BALANCE INIT\n");
    printf("[1] Balance View\n");

    printf("Choice:\n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            balance_viewing();
            break;
    }
}
void balance_viewing()
{
    int num;
    FILE *fptr;

    if ((fptr = fopen("filename.txt","r")) == NULL){
        printf("Error! opening file");
        exit(1);
    }
    printf("********************\n");
    fscanf(fptr,"%d", &num);
    printf("Balance = %d", num);
    fclose(fptr);
}


/*
 * Deposit
 */

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
    printf( "%f %s %s\n", deposit1.price, deposit1.type, deposit1.date);
    printf("Succesfull!\n");
    printf("Deposit Lodgement\n");
}

/*
 * Transfer
 */

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
    transfer1.type = "Send Money";
    transfer1.date = "2023/12/12";

}
void transfer_transaction_history()
{
    printf("Transfer Transaction history\n");
}
void withdraw_init()
{
    int choice;
    printf("Withdraw Init\n");
    printf("[1] Withdraw Money\n");
    printf("Choice:\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            withdraw_money();
            break;
    }
}
void withdraw_money()
{
    printf("Withdraw Money\n");
}