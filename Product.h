#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

using namespace std;

class Product {
protected:
    int id;
    string name;
    double price;

public:
    Product(int id, const string& name, double price)
        : id(id), name(name), price(price) {}

    int getId() const {
        return id;
    }

    const string& getName() const {
        return name;
    }

    double getPrice() const {
        return price;
    }

    virtual double calculateDiscount() const = 0;
    virtual double getFinalPrice() const = 0;
};

#endif
