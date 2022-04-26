#include <iostream>
#include <string>
using namespace std;

class CollegeStudent
{
    public:
    string name;
    string school;
    string year;
    void bio()
    {
        cout << "Their name is " << name << " they go to " << school << " and they are a " << year << "." << endl;
    }

};

int main()
{
    cout << "Where did all of the sauce go" << endl;
    CollegeStudent Alex;
    Alex.name = "Alexander";
    Alex.school = "Hunter College";
    Alex.year = "Freshman";
    Alex.bio();


    return 0; 
}