#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Fish.h"
#include "Check.h"
#include <locale>
#include <iostream>
using namespace std;



int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    Check Apple("Apple", 99.99, 1.0);
    cout << Apple.getName();
    Apple.setSum(12);
    Apple.printBuyInfo();

    cout << "Какое домашнее животное вы хотите завести?" << endl;
    cout << "1. Кошка" << endl;
    cout << "2. Собака" << endl;
    cout << "3. Рыбка" << endl;
    cout << "[Выберите 1-3]: ";
    
    int choice;
    cin >> choice;
    
    Pet* p = nullptr;
    
    switch (choice) {
    case 1:
        p = new Cat();
        break;
    case 2:
        p = new Dog();
        break;
    case 3:
        p = new Fish();
        break;
    default:
        cout << "Нет таких животных" << endl;
        return 1;
    }
    
    cout << "Придумайте имя своему питомцу: ";
    string name;
    cin.ignore();
    getline(cin, name);
    
    p->setName(name);
    p->play();
    
    delete p;
    return 0;
}