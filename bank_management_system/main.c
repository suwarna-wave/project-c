#include <stdio.h>
#include <string.h>
#include "transaction.h"
#include "file_operations.h"
#include "input_output.h"

int main() {
    int choice;
    char account[MAX_ACCOUNT_LEN];
    char date[MAX_DATE_LEN];

    do {
        printf("\nBanking Management System\n");
        printf("1. Create Transaction\n");
        printf("2. List Transactions\n");
        printf("3. Get Transactions for User Account\n");
        printf("4. Get Transactions from Date\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createTransaction();
                break;
            case 2:
                listTransactions();
                break;
            case 3:
                printf("Enter account number: ");
                getInputString(account, MAX_ACCOUNT_LEN);
                getTransactionsForAccount(account);
                break;
            case 4:
                printf("Enter date (YYYY-MM-DD): ");
                getInputString(date, MAX_DATE_LEN);
                getTransactionsFromDate(date);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 5);

    return 0;
}
