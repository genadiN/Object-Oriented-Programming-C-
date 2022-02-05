#pragma once

enum class ProductType{
    Food,
    Drink,
    Invalid,
};

class ResturantItem{
protected:
    ProductType type;
    double price;
    int inStock;
public:
    ResturantItem(ProductType type = ProductType :: Invalid , int stock = 0, double price = 0.0);

    ProductType getType() const;
    int getPrice() const;
    int getStock() const;

    void setPrice(double price);
    void setStock(int stock);
// abstract class = purely virtual function
    virtual ~ResturantItem() = 0;

    virtual ResturantItem* clone() const = 0;

    virtual void print() const = 0;
};

