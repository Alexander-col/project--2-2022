#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v1 = {1,2,3,4};
    v1.push_back(9);
    std::cout << v1.front() << std::endl;
    std::cout << v1.capacity() << std::endl;
}