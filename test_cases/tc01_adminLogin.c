#include <stdio.h>
#include <string.h>
#include "medstore_testlib.h"

int main() {
    char input[64];

    printf("=== Test Case: Admin Login ===\n");
    printf("Enter admin password: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    printf("\nExpected Output: Login successful!\n");

    if (strcmp(input, ADMIN_PASS) == 0) {
        printf("Actual Output  : Login successful!\n");
        printf("Result         : PASS\n");
    } else {
        printf("Actual Output  : Incorrect password!\n");
        printf("Result         : FAIL\n");
    }

    return 0;
}