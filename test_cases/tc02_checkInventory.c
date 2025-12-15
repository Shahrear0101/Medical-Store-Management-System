#include <stdio.h>
#include "medstore_testlib.h"

void printMedicine(const Medicine *m) {
    printf("ID: %d | %-20s | Price: %6.2f | Qty: %3d | Exp: %02d-%02d-%04d\n",
           m->id, m->name, m->price, m->quantity,
           m->expiry_day, m->expiry_month, m->expiry_year);
}

int main() {
    printf("=== Test Case: Show Inventory ===\n");

    FILE *fp = fopen(DATAFILE, "rb");
    if (!fp) {
        printf("[INFO] No inventory found.\n");
        printf("Expected Output: Table of medicines\n");
        printf("Actual Output  : No inventory found\n");
        printf("Result         : FAIL\n");
        return 1;
    }

    Medicine m;
    int found = 0;
    printf("\n%-4s %-20s %-10s %-5s %-10s\n", "ID", "Name", "Price", "Qty", "Expiry");
    printf("---------------------------------------------------------------\n");

    while (fread(&m, sizeof(Medicine), 1, fp) == 1) {
        printMedicine(&m);
        found = 1;
    }

    if (!found) {
        printf("[INFO] Inventory is empty.\n");
        printf("Result         : FAIL\n");
    } else {
        printf("Expected Output: Table of medicines\n");
        printf("Result         : PASS\n");
    }

    fclose(fp);
    return 0;
}