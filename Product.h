#pragma once
#include <string>
class Product {
    private:
        std::string name;
        double price;
        double weight;
    
    public:
        Product();
        Product(const std::string & name, double price, double weight);

        void setName(const std::string & name);
        void SetPrice(const double price);
        void setWeight(const double weight);

        std::string getName() const;
        double getPrice() const;
        double getWeight() const;
};