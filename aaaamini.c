#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct customer 
{
    char ID[10];  
    char name[20];
    char type[20];
    char query[30];
    int balance;
    struct customer *next;
};
struct customer *create() 
{
    struct customer *head = (struct customer *)malloc(sizeof(struct customer));
    head->next = NULL;
    return head;
}

void enquecustomer(struct customer *head, char ID[10], char t[20], char q[30], char name[20], int balance) 
{
    struct customer *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    struct customer *newnode = (struct customer *)malloc(sizeof(struct customer));
    strcpy(newnode->ID, ID);
    strcpy(newnode->type, t);
    strcpy(newnode->query, q);
    strcpy(newnode->name, name);
    newnode->balance = balance;
    newnode->next = NULL;
    temp->next = newnode;
}
void editCustomer(struct customer *head, char ID[10]) {
    struct customer *temp = head->next;
    while (temp!=NULL)
    {
        if (strcmp(temp->ID, ID) == 0)
        {
            printf("Editing customer %s...\n", ID);
            printf("Enter new name: ");
            scanf("%s", temp->name);
            printf("Enter new account type (Savings/Business): ");
            scanf("%s", temp->type);
            printf("Enter new query: ");
            scanf("%s", temp->query);
            printf("Enter new balance: ");
            scanf("%d", &temp->balance);
            printf("Customer updated successfully.\n");
            return;
        }
        temp = temp->next;
    }
    printf("Customer with ID %s not found.\n", ID);
}
void searchCustomer(struct customer *head, char ID[10]) 
{
    struct customer *temp = head->next;
    while (temp!=NULL) 
    {
        if (strcmp(temp->ID, ID) == 0) 
        {
            printf("\n--- Customer Found ---\n");
            printf("Customer ID: %s\n", temp->ID);
            printf("Accountant Name: %s\n", temp->name);
            printf("Account Type: %s\n", temp->type);
            printf("Query: %s\n", temp->query);
            printf("Balance: %d\n", temp->balance);
            return;
        }
        temp = temp->next;
    }
    printf("Customer with ID %s not found.\n", ID);
}
void serve(struct customer *head) {
    struct customer *temp = head->next;
    while (temp != NULL) {
        printf("\nWelcome Sir/Madam:\n");
        printf("Serving Customer ID: %s | Name: %s | Query: %s\n", temp->ID, temp->name, temp->query);

        if (strcmp(temp->query, "Deposit") == 0) 
        {
            printf("===========================================\n");
            printf("Accountant: %s\n", temp->name);
            printf("Enter the amount to deposit: ");
            int n;
            scanf("%d", &n);
            temp->balance += n;
            printf("Your amount is deposited.\n");
            printf("Your Bank balance: %d\n", temp->balance);
        } 
        else if (strcmp(temp->query, "Withdrawal") == 0)
        {
            printf("===========================================\n");
            printf("Enter the amount to withdraw: ");
            int n;
            scanf("%d", &n);
            if (n <= temp->balance) 
            {
                temp->balance -= n;
                printf("Your amount is withdrawn.\n");
                printf("Your Bank balance: %d\n", temp->balance);
            } 
            else 
            {
                printf("Insufficient balance. You can only withdraw %d.\n", temp->balance);
            }
        } 
        else if (strcmp(temp->query, "New") == 0) 
        {
            printf("===========================================\n");
            printf("Get the form and fill the details.\n");
            printf("Pay some initial amount: ");
            int n;
            scanf("%d", &n);
            temp->balance = n;
            printf("Bank Balance: %d\n", temp->balance);
        } 
        else if (strcmp(temp->query, "Otherqueries") == 0) 
        {
            printf("===========================================\n");
            printf("Contact the help desk.\n");
        }

        struct customer *t = temp;
        temp = temp->next;
        free(t);
    }
    head->next = NULL; 
}
void removeCustomer(struct customer *head) 
{
    char ID[10];
    printf("Enter Customer ID to remove: ");
    scanf("%s", ID);

    struct customer *prev = head, *curr = head->next;
    while (curr != NULL) 
    {
        if (strcmp(curr->ID, ID) == 0) 
        {
            prev->next = curr->next;
            free(curr);
            printf("Customer removed successfully!\n");
            return;
        }
        prev = curr;
        curr = curr->next;
    }
    printf("Customer with ID %s not found.\n", ID);
}

void showStats(struct customer *head) 
{
    struct customer *temp = head->next;
    int count = 0, priorityCount = 0, regularCount = 0, totalBalance = 0;

    while (temp != NULL)
    {
        count++;
        totalBalance += temp->balance;
        if ((temp->ID[0] == 'P' || temp->ID[0] == 'p') && 
            (temp->type[0] == 'B' || temp->type[0] == 'b'))
        {
            priorityCount++;
        } 
        else if ((temp->ID[0] == 'R' || temp->ID[0] == 'r') && 
                 (temp->type[0] == 'S' || temp->type[0] == 's'))
        {
            regularCount++;
        }
        temp = temp->next;
    }

    printf("\nBank Statistics:\n");
    printf("Total customers: %d\n", count);
    printf("Priority customers: %d, Regular customers: %d\n", priorityCount, regularCount);
    if (count > 0)
    {
        printf("Average balance: %d\n", totalBalance / count);
    }
}

void display(struct customer *head)
{
    struct customer *temp = head->next;
    while (temp != NULL)
    {
        printf("-----------------------------------------------\n");
        printf("Customer ID: %s\n", temp->ID);
        printf("Accountant Name: %s\n", temp->name);
        printf("Account Type: %s\n", temp->type);
        printf("Query: %s\n", temp->query);
        printf("Balance: %d\n", temp->balance);
        temp = temp->next;
    }
    printf("-----------------------------------------------\n");
}
int main() 
{
    struct customer *priorityQueue = create();
    struct customer *regularQueue = create();

    int choice;
    char ID[10], t[20], query[30], name[20];
    int balance;

    while (1)
    {
        printf("\n================== BANK QUEUE MANAGEMENT ==================\n");
        printf("1. Add Customer to Queue\n");
        printf("2. Display All Customers\n");
        printf("3. Search Customer by ID\n");
        printf("4. Edit Customer Details\n");
        printf("5. Serve Customers\n");
       printf("6. Remove Customer\n");
        printf("7. Show Bank Statistics\n");
      printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
            {
                printf("\nEnter Customer ID (Starts with P for Priority, R for Regular): ");
                scanf("%s", ID);
                printf("Enter Accountant Name: ");
                scanf("%s", name);
                printf("Enter the Account type (Savings/Business): ");
                scanf("%s", t);
                printf("Enter purpose/query (Deposit/Withdrawal/New/Otherqueries): ");
                scanf("%s", query);
                printf("Enter your Bank balance: ");
                scanf("%d", &balance);

                if ((ID[0] == 'P' || ID[0] == 'p') && (t[0] == 'B' || t[0] == 'b'))
                {
                    enquecustomer(priorityQueue, ID, t, query, name, balance);
                    printf("Added to Priority Queue.\n");
                } 
                else if ((ID[0] == 'R' || ID[0] == 'r') && (t[0] == 'S' || t[0] == 's')) 
                {
                    enquecustomer(regularQueue, ID, t, query, name, balance);
                    printf("Added to Regular Queue.\n");
                } 
                else 
                {
                    printf("Ivalid ID or Account Type! Customer not added.\n");
                }
                break;
            }
            case 2:
            {
                printf("\n=== Priority Queue ===\n");
                display(priorityQueue);
                printf("\n=== Regular Queue ===\n");
                display(regularQueue);
                break;
            }
            case 3:
            {
                printf("Enter Customer ID to search: ");
                scanf("%s", ID);
                printf("\n--- Searching in Priority Queue ---\n");
                searchCustomer(priorityQueue, ID);
                printf("\n--- Searching in Regular Queue ---\n");
                searchCustomer(regularQueue, ID);
                break;
            }
            case 4:
            {
                printf("Enter Customer ID to edit: ");
                scanf("%s", ID);
                printf("\n--- Searching in Priority Queue ---\n");
                editCustomer(priorityQueue, ID);
                printf("\n--- Searching in Regular Queue ---\n");
                editCustomer(regularQueue, ID);
                break;
            }
            case 5:
            {
                printf("\n=== Serving Priority Customers ===\n");
                serve(priorityQueue);
                printf("\n=== Serving Regular Customers ===\n");
                serve(regularQueue);
                break;
            }
            case 6:
            {
            printf("\n--- Remove from Priority Queue ---\n");
            removeCustomer(priorityQueue);
            printf("\n--- Remove from Regular Queue ---\n");
            removeCustomer(regularQueue);
            break;
            }
        case 7:
        {
            printf("\n--- Priority Queue Stats ---\n");
            showStats(priorityQueue);
            printf("\n--- Regular Queue Stats ---\n");
            showStats(regularQueue);
            break;
        }
            case 8:
            {
                printf(" Exiting Bank Queue Management System... Have a nice day!\n");
                return 0;
            }
            default:
                printf("Invalid choice! Please select a valid option.\n");
        }
    }
}

