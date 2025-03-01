#include <bits/stdc++.h>
using namespace std;

class Bank {
private:
    int BankBalance;
    string AccountHolderName;
    vector<string> transactionHistory;  // To keep track of transactions

public:
    // Constructor to initialize BankBalance and AccountHolderName
    Bank(int NewAccount, string name) {
        BankBalance = NewAccount;
        AccountHolderName = name;
    }

    // Getter for BankBalance
    int GetBalance() {
        return BankBalance;
    }

    // Getter for AccountHolderName
    string GetAccountHolderName() {
        return AccountHolderName;
    }

    // Method to deposit money into the account
    void DepositMoney(int Money) {
        if (Money > 0) {
            BankBalance += Money;
            transactionHistory.push_back("Deposited: " + to_string(Money));  // Add transaction to history
        }
    }

    // Method to withdraw money from the account
    void WithDrawMoney(int Amount) {
        if (Amount > 0 && BankBalance >= Amount) {
            BankBalance -= Amount;
            transactionHistory.push_back("Withdrew: " + to_string(Amount));  // Add transaction to history
        } else {
            cout << "No Sufficient Amount" << endl;
        }
    }

    // Method to calculate interest and add it to the balance
    void CalculateInterest(float interestRate) {
        if (interestRate > 0) {
            float interest = (BankBalance * interestRate) / 100;
            BankBalance += interest;
            transactionHistory.push_back("Interest Added: " + to_string(interest));
        }
    }

    // Method to transfer money to another account (this functionality is no longer needed, but kept for generality)
    void TransferMoney(Bank &otherAccount, int amount) {
        if (amount > 0 && BankBalance >= amount) {
            BankBalance -= amount;
            otherAccount.BankBalance += amount;
            transactionHistory.push_back("Transferred: " + to_string(amount) + " to " + otherAccount.GetAccountHolderName());
            otherAccount.transactionHistory.push_back("Received: " + to_string(amount) + " from " + AccountHolderName);
        } else {
            cout << "Insufficient funds for transfer!" << endl;
        }
    }

    // Method to show transaction history
    void ShowTransactionHistory() {
        cout << "Transaction History for " << AccountHolderName << ":\n";
        if (transactionHistory.empty()) {
            cout << "No transactions yet.\n";
        } else {
            for (const auto& transaction : transactionHistory) {
                cout << transaction << endl;
            }
        }
    }
};

int main() {
    Bank sai(5000, "Sai");  // Create a bank account for Sai with initial balance 5000

    sai.DepositMoney(2000);  // Deposit 2000 into Sai's account
    sai.WithDrawMoney(3000); // Withdraw 3000 from Sai's account
    sai.CalculateInterest(5); // Calculate and add 5% interest to Sai's balance
    
    // Display balance for Sai
    cout << sai.GetAccountHolderName() << "'s Balance: " << sai.GetBalance() << endl;
    
    // Show transaction history for Sai
    sai.ShowTransactionHistory();

    return 0;
}
