#ifndef GROCERYPRODUCT_H
#define GROCERYPRODUCT_H

#include "Product.h"
#include <string>

using namespace std;

class GroceryProduct : public Product {
private:
    string expirationDate;
    string origin;

public:
    GroceryProduct(int id, const string& name, double price,
                   const string& expirationDate, const string& origin)
        : Product(id, name, price), expirationDate(expirationDate), origin(origin) {}

    const string& getExpirationDate() const {
        return expirationDate;
    }

    const string& getOrigin() const {
        return origin;
    }

    double calculateDiscount() const override {
        

        return 0.0;
    }

    double getFinalPrice() const override {
        
        
        return price;
    }
};

#endif
