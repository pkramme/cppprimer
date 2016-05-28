#include<iostream>

int main()
{
     int value1 = 0, value2 = 0;
     std::cin >> value1 >> value2;
     std::cout << "The product of ";
     std::cout << value1;
     std::cout << " and ";
     std::cout << value2;
     std::cout << " is ";
     std::cout << value1 * value2 << std::endl;
     return 0;
}
