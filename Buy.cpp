#include "Buy.h"

Buy::Buy() : sum(0), sumPrice(0.0), sumWeight(0.0) {

}

Buy::Buy(const std::string & name, double price, double weight) : Product(name, price, weight), sum(0), sumPrice(0.0), sumWeight(0.0) {
    
}

void Buy::setSum(const int & value) {
    sum = (value >= 0 ? value : 0);
    sumPrice = sum * getPrice();
    sumWeight = sum * getWeight();
}

int Buy::getSum() const {
    return sum;
}

double Buy::getSumPrice() const {
    return sumPrice;
}

double Buy::getSumWeight() const {
    return sumWeight;
}