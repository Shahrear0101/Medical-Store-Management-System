#ifndef MEDSTORE_TESTLIB_H
#define MEDSTORE_TESTLIB_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ADMIN_PASS "admin123"
#define NAME_LEN 64
#define MAX_CART 100
#define DATAFILE "medicines.dat"

typedef struct {
    int id;
    char name[NAME_LEN];
    double price;
    int quantity;
    int expiry_day;
    int expiry_month;
    int expiry_year;
} Medicine;

typedef struct {
    int med_id;
    char name[NAME_LEN];
    double price;
    int qty;
} CartItem;

int checkStockAvailability(Medicine med, int requested_qty);

#endif