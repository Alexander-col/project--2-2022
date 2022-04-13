#include <iostream>

class BankAccount {
    public:
    std::string name;
    int amount;
};

int main()
{
    std::cout << "Where is the sauce?" << std::endl;
    BankAccount alex;
    alex.amount = 2000;
    alex.name = "Alexander";
    std::cout << alex.name << " " << alex.amount << std::endl;



    return 0;
}