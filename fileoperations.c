#include <stdio.h>
#include <stdlib.h>
#include "transaction.h"

void appendTransactionToFile(struct Transaction transaction) {
    FILE *file = fopen("transactions.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    fprintf(file, "%s %s %.2f %s\n", transaction.account, transaction.date, transaction.amount, transaction.description);

    fclose(file);
}

void readTransactionsFromFile() {
    FILE *file = fopen("transactions.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Transactions:\n");
    struct Transaction currentTransaction;
    while (fscanf(file, "%s %s %lf %[^\n]", currentTransaction.account, currentTransaction.date, &currentTransaction.amount, currentTransaction.description) != EOF) {
        printf("Account: %s | Date: %s | Amount: %.2f | Description: %s\n",
               currentTransaction.account, currentTransaction.date, currentTransaction.amount, currentTransaction.description);
    }

    fclose(file);
}
