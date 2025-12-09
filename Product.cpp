#include "Product.h"
#include <string>

Product::Product() : name(""), price(0.0), weight(0.0) {

}

Product::Product(const std::string & name, double price, double weight) : name(name), price(price), weight(weight) {

}

void Product::setName(const std::string & name) {
    this->name = name;
}

void Product::SetPrice(double price) {
    this->price = price;
}

void Product::setWeight(double weight) {
    this->weight = weight;
}

std::string Product::getName() const {
    return name;
}

double Product::getPrice() const {
    return price;
}

double Product::getWeight() const {
    return weight;
}