#include "Check.h"

Check::Check() : Buy() {

}

Check::Check(const std::string & name, double price, double weight) : Buy(name, price, weight) {

}

void Check::printProductInfo() {
    std::cout << "Товар: " << getName() << " Цена: " << getPrice() << " Вес: " << getWeight();
}
        
void Check::printBuyInfo() {
    std::cout << "Куплено: " << getSum() << " На сумму: " << getSumPrice() << " Общий вес: " << getSumWeight();
}