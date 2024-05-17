#ifndef ELECTRONICPRODUCT_H
#define ELECTRONICPRODUCT_H

#include "Product.h"
#include <string>

using namespace std;

class ElectronicProduct : public Product {
private:
    string brand;
    string model;
    string warranty;

public:
    ElectronicProduct(int id, const string& name, double price,
                       const string& brand, const string& model, const string& warranty)
        : Product(id, name, price), brand(brand), model(model), warranty(warranty) {}

    const string& getBrand() const {
        return brand;
    }

    const string& getModel() const {
        return model;
    }

    const string& getWarranty() const {
        return warranty;
    }

    double calculateDiscount() const override {
       

        return 0.0;
    }

    double getFinalPrice() const override {
       

        return price;
    }
};

#endif
