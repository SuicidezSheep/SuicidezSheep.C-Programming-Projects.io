#include <stdio.h>

struct BankAccount {
    float balance;
};

float total_balance = 0;
int total_transactions = 0;

void initializeAccount(struct BankAccount* account, float initial_balance) {
    account->balance = initial_balance;
    total_balance += initial_balance;
    total_transactions++;
}

void deposit(struct BankAccount* account, float amount) {
    account->balance += amount;
    total_balance += amount;
    total_transactions++;
}

void withdraw(struct BankAccount* account, float amount) {
    if (amount <= account->balance) {
        account->balance -= amount;
        total_balance -= amount;
        total_transactions++;
    } else {
        printf("Insufficient funds! Withdrawal canceled.\n");
    }
}

void displayDetails(struct BankAccount* account) {
    printf("Account Name: Liga Alther\n");
    printf("Account Balance: ₱%.2f\n", account->balance);
}

int main() {
    struct BankAccount account;
    float initial_balance, deposit_amount, withdraw_amount;

    // Header message
    printf("**** Welcome to Liga Alther's Bank - Manage Your Accounts ****\n\n");

    printf("Enter initial balance for the account (in pesos): ");
    scanf("%f", &initial_balance);
    initializeAccount(&account, initial_balance);

    printf("Enter deposit amount (in pesos): ");
    scanf("%f", &deposit_amount);
    deposit(&account, deposit_amount);

    printf("Enter withdrawal amount (in pesos): ");
    scanf("%f", &withdraw_amount);
    withdraw(&account, withdraw_amount);

    printf("\nAccount Details:\n");
    displayDetails(&account);

    printf("\nTotal Bank Balance: ₱%.2f\n", total_balance);
    printf("Total Transactions: %d\n", total_transactions);

    return 0;
}
