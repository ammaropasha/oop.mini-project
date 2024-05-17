#include <iostream>
#include <vector>
#include "User.h"
#include "Product.h"
#include "ElectronicProduct.h"
#include "ClothingProduct.h"
#include "GroceryProduct.h"
#include "DiscountManager.h"
#include "ShoppingCart.h"
#include "CheckoutProcess.h"
using namespace std;


void displayCategories() {
    cout << "Please select a product category:\n";
    cout << "1. Electronics\n";
    cout << "2. Clothing\n";
    cout << "3. Groceries\n";
    cout << "4. Exit\n";
}


void addProductToCart(ShoppingCart& cart, const Product& product) {
    cart.addProduct(product);
    cout << "Product added to cart.\n";
}

int main() {
    
    User user("John Doe", "john.doe@example.com", "555-1234");
    ShoppingCart cart;
    CheckoutProcess checkout;

    
    cout << "Welcome to the Online Shopping System!\n";

    while (true) {
        displayCategories();

        
        int choice;
        cin >> choice;

        if (choice == 4) {
            cout << "Exiting...\n";
            break;
        }

        switch (choice) {
            case 1: {
                
                ElectronicProduct laptop(1, "Laptop", 999.99, "Dell", "XPS 13", "1 year");
                addProductToCart(cart, laptop);
                break;
            }
            case 2: {
                
                ClothingProduct shirt(2, "Shirt", 19.99, "M", "Blue", "Cotton");
                addProductToCart(cart, shirt);
                break;
            }
            case 3: {
                
                GroceryProduct milk(3, "Milk", 2.49, "2024-05-20", "Organic");
                addProductToCart(cart, milk);
                break;
            }
            default: {
                cout << "Invalid choice. Please try again.\n";
                break;
            }
        }
    }

    
    checkout.processCheckout(cart);

    return 0;
}
