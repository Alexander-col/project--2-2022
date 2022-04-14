#include <iostream>

class BankAccount {
    public:
    std::string name;
    int amount;
    int sss = 6666;
    private:
    int ss = 666;
};
class Employee {
    public:
    std::string name;
    double get_salary()
    {
        return salary;
    }

    void set_salary(double potential_salary)
    {
        salary = potential_salary;
    }

    void print_bonus()
    {
        std::cout << name << ", has a bonus of: " << calculate_bonus() << std::endl;
    }


    private:
    int salary;

    double calculate_bonus()
    {
        return salary * .10;
    }
};
int main()
{
    std::cout << "Where is the sauce?" << std::endl;
    BankAccount alex;
    alex.amount = 2000;
    alex.name = "Alexander";
    std::cout << alex.name << " " << alex.amount << "\n" << alex.sss;
    // Now i will try to genreate random numbers 
    int v1;
    v1 = rand() % 50; 
    for (int i = 0; i != 10; i++)
    {
        std::cout << rand() % 10  << std::endl;
    }
    std::cout << "And the random number that was generated was: " << v1 << std::endl;

    // Down here I am messing around with the employee class 
    Employee employee1;
    employee1.name = "Kevin";
    employee1.set_salary(50000);
    
    std::cout << employee1.name << " " << employee1.get_salary() << std::endl;

    employee1.print_bonus();




    return 0;
}