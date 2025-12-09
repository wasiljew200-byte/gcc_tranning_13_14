#include <iostream>
using namespace std;
#include "Check.h"

int main() 
{ 
    Check Apple("Apple", 99.99, 1.0);
    cout << Apple.getName();
    Apple.setSum(12);
    Apple.printBuyInfo();
}