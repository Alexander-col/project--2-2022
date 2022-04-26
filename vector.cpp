#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main()
{
    // This below is me tyring to nabigate around vectors 
    // std::vector<int> v1 = {1,2,3,4};
    // v1.push_back(9);
    // std::cout << v1.front() << std::endl;
    // std::cout << v1.capacity() << std::endl;
    
    srand(time(NULL));

    for (int i = 0; i != 20; i++)
    {
        std::cout << "This is print out #" << i+1 << std::endl;
        std::cout << "the random value this time is " << rand()% 1000  << std::endl;
    }


}