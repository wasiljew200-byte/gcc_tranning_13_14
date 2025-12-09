#pragma once
#include "Product.h"

class Buy : public Product {
    private:
        int sum;
        double sumPrice;
        double sumWeight;

    public:
        Buy();
        Buy(const std::string & name, double price, double weight);

        void setSum(const int &);
        int getSum() const;
        double getSumPrice() const;
        double getSumWeight() const;
};
