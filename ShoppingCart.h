#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <vector>
#include "Product.h"
#include "DiscountManager.h"

using namespace std;

class ShoppingCart {
private:
    vector<Product*> products;
    DiscountManager discountManager;

public:
    void addProduct(Product* product) {
        products.push_back(product);
    }

    void removeProduct(int productId) {
        products.erase(
            remove_if(products.begin(), products.end(),
                           [productId](Product* product) { return product->getId() == productId; }),
            products.end());
    }

    double calculateTotal() const {
        double total = 0.0;
        for (const auto& product : products) {
            total += product->getFinalPrice();
        }
        return total;
    }

    void applyDiscounts() {
        for (auto& product : products) {
            double discount = discountManager.calculateDiscount(*product);
           
            product->setPrice(product->getPrice() - discount);
        }
    }

    const vector<Product*>& getProducts() const {
        return products;
    }
};

#endif
