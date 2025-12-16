# 🏥 Medical Store Management System

A console-based C application for managing a medical store.  
This system provides separate Admin and Customer panels to manage medicines, track sales, and handle purchases efficiently.

---

## 📋 Features

### Admin Panel
- Add, update, delete, and search medicines
- View all medicines with detailed info
- View complete sales history

### Customer Panel
- Browse available medicines
- Search medicines by name
- Add/remove items to/from shopping cart
- Checkout with subtotal, VAT, and total calculation

---

## 🚀 Quick Start

### Installation
1. Make sure you have a C compiler installed (e.g., GCC).  
2. Clone or download the repository.  
3. Navigate to the project folder:
   ```bash
   cd "MEDICAL STORE MANAGEMENT SYSTEM"
   ```bash
   gcc -o medical_store main.c
   ```bash
   ./medical_store

---


## Data File

| File Name         | Purpose                                      |
| ----------------- | -------------------------------------------- |
| medicines.dat     | Binary file storing medicine inventory       |
| sales_history.txt | Text file storing sales records and invoices |

## ⚙️ Technologies

Language: C
Interface: Console-based
File Handling: Binary and text files
VAT Calculation: Default 5%

---

## Usage

### Admin Panel
1. Select **Admin Panel** from the main menu.
2. Enter the admin password (`admin123` by default).
3. Perform operations such as:
   - Add new medicines
   - Update existing medicines
   - Delete medicines
   - View sales history

### Customer Panel
1. Select **Customer Panel** from the main menu.
2. Browse all available medicines or search by name.
3. Add items to the cart with desired quantity.
4. View cart and proceed to checkout, which shows:
   - Subtotal
   - VAT
   - Total amount
5. Optionally, provide your name during checkout (recorded in the sales history).

---

## Data Validation
- Numeric fields such as **price**, **quantity**, and **ID** are validated.
- Case-insensitive search for medicine names.
- Cart operations and checkout enforce **quantity validation** to prevent overselling.

---

## Configuration
- **Admin password**: Can be changed by modifying the `ADMIN_PASS` macro in the source code.
- **VAT rate**: Controlled by the `TAX_RATE` macro (default is 5%).

---

## 📌 License

This project is open-source and free to use, modify, and distribute.
Designed for educational purposes; not intended for production without additional security measures.
