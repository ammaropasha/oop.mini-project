#ifndef DISCOUNTMANAGER_H
#define DISCOUNTMANAGER_H

#include "Product.h"

using namespace std;

class DiscountManager {
public:
    double calculateDiscount(const Product& product) {
       
        return product.getPrice() * 0.1; 
    }
};

#endif
