#include<iostream>

int main()
{
     int value1 = 0, value2 = 0;
     std::cin >> value1 >> value2;
     while(value1 <= value2)
     {
          std::cout << value1 << std::endl;
          ++value1;
     }
     return 0;
}
