#include<iostream>

int main()
{
     int value1 = 50, sum = 0;
     while(value1 <= 100)
     {
          sum += value1;
          ++value1;
     }
     std::cout << "The sum of all numbers from 50 to 100 is " << sum << std::endl;
     return 0;
}
