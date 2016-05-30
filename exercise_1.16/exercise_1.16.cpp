#include<iostream>

int main()
{
     int sum = 0, value1 = 0;
     while(std::cin >> value1)
     {
          sum += value1;
     }
     std::cout << sum << std::endl;
     return 0;
}
