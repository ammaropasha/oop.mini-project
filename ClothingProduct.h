#ifndef CLOTHINGPRODUCT_H
#define CLOTHINGPRODUCT_H

#include "Product.h"
#include <string>

using namespace std;

class ClothingProduct : public Product {
private:
    string size;
    string color;
    string fabric;

public:
    ClothingProduct(int id, const string& name, double price,
                    const string& size, const std::string& color, const string& fabric)
        : Product(id, name, price), size(size), color(color), fabric(fabric) {}

    const string& getSize() const {
        return size;
    }

    const string& getColor() const {
        return color;
    }

    const string& getFabric() const {
        return fabric;
    }

    double calculateDiscount() const override {
       

        return 0.0;
    }

    double getFinalPrice() const override {
       
       
        return price;
    }
};

#endif
