#include <stdio.h>
#include <string.h>
#define MAX 10
struct customer {
    int acc_no;
    char name[50];
    float balance;
};

void printLowBalance(struct customer c[], int n) {
    printf("\nCustomers with balance below Rs. 100:\n");
    for(int i = 0; i < n; i++) {
        if(c[i].balance < 100) {
            printf("Account Number: %d, Name: %s\n", c[i].acc_no, c[i].name);
        }
    }
}
void updateBalance(struct customer c[], int n, int acc, float amt, int code) {
    int found = 0;
    for(int i = 0; i < n; i++) {
        if(c[i].acc_no == acc) {
            found = 1;
            if(code == 1) {   
                c[i].balance += amt;
                printf("Amount deposited successfully. New Balance: %.2f\n", c[i].balance);
            }
            else if(code == 0) {   
                if(c[i].balance < amt) {
                    printf("The balance is insufficient for the specified withdrawal.\n");
                } else {
                    c[i].balance -= amt;
                    printf("Withdrawal successful. New Balance: %.2f\n", c[i].balance);
                }
            }
            break;
        }
    }
    if(!found)
        printf("Account not found.\n");
}
int main() {
    struct customer c[MAX];
    int n;

    printf("Enter number of customers (max 10): ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        printf("\nEnter details of customer %d:\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &c[i].acc_no);
        printf("Name: ");
        scanf("%s", c[i].name);
        printf("Balance: ");
        scanf("%f", &c[i].balance);
    }

    printLowBalance(c, n);
    int acc, code;
    float amt;
    printf("\nEnter transaction details (Acc_No Amount Code[1=deposit,0=withdraw]): ");
    scanf("%d %f %d", &acc, &amt, &code);
    updateBalance(c, n, acc, amt, code);
    return 0;
}
