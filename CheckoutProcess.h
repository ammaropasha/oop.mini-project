#ifndef CHECKOUTPROCESS_H
#define CHECKOUTPROCESS_H

#include "ShoppingCart.h"
#include <iostream>

using namespace std;

class CheckoutProcess {
public:
    void processCheckout(const ShoppingCart& cart) {
        cout << "Processing checkout...\n";
        
       
        const std::vector<Product*>& products = cart.getProducts();
        for (const auto& product : products) {
            cout << "Product: " << product->getName() 
                      << " - Price: $" << product->getPrice() << "\n";
        }
        
       
        double total = cart.calculateTotal();
        cout << "Total cost: $" << total << "\n";

       
        cout << "Enter payment details:\n";
        string paymentDetails;
        cin.ignore();
        getline(std::cin, paymentDetails);

      
        cout << "Enter shipping address:\n";
        string shippingAddress;
        getline(std::cin, shippingAddress);

        cout << "Order confirmed! Your items will be shipped to " << shippingAddress << ".\n";
    }
};

#endif
