#ifndef FILE_OPERATIONS_H
#define FILE_OPERATIONS_H

#include "transaction.h"

void appendTransactionToFile(struct Transaction transaction);
void readTransactionsFromFile();

#endif
