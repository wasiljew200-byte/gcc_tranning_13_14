#pragma once
#include "Buy.h"
#include <iostream>

class Check : public Buy {
    private:
    public:
        Check();
        Check(const std::string & name, double price, double weight);

        void printProductInfo();
        
        void printBuyInfo();
};