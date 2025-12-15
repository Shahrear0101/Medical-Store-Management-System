#include <stdio.h>
#include <string.h>
#include "medstore_testlib.h"

int main() {
    printf("=== Test Case: Check Stock Availability ===\n");

    // Sample medicine in inventory
    Medicine med = {1, "Paracetamol", 12.0, 5}; // 5 units in stock

    // Simulate a customer request
    int requested_qty = 6;
    printf("Medicine: %s | Available Stock: %d | Requested: %d\n",
           med.name, med.quantity, requested_qty);

    // Expected Output
    printf("Expected Result: Available\n");

    // Actual check
    if (requested_qty <= med.quantity) {
        printf("Actual Result  : Available\n");
        printf("Test Result    : PASS\n");
    } else {
        printf("Actual Result  : Not Available\n");
        printf("Test Result    : FAIL\n");
    }

    return 0;
}