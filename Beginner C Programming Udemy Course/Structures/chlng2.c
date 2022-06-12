#include <stdlib.h>
#include <stdio.h>

//struct items;
struct items {
    char *itemName;
    int quantity;
    float price;

    // amount = quantity * price
    float amount;
};

void readItem(struct items *ptrItem);
void printItem(struct items *ptrItem);

void printItem(struct items *ptrItem) {
    printf("Contents:\n");
    printf("%s\n", ptrItem->itemName);
    printf("%d\n", ptrItem->quantity);
    printf("%f\n", ptrItem->price);
}

void readItem(struct items *ptrItem) {
    printf("Enter the info:\n");
    scanf("%s", (ptrItem->itemName));
    scanf("%d", &(ptrItem->quantity));
    scanf("%f", &(ptrItem->price));

    ptrItem->amount = ptrItem->quantity * ptrItem->price;
}

int main(void) {
    struct items itm;
    struct items *item = &itm;

    item->itemName = (char *)malloc(30 * sizeof(char));

    readItem(item);
    printItem(item);
    free(item->itemName);

    return 0;
}