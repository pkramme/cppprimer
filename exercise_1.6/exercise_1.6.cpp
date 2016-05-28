/*
std::cout << "The sum of " << v1;
          << " and " << v2;
          << " is " << v1 + v2 << std::endl;

The program is not legal because of the semicolons at the end of the line. They have to be removed
*/
#include<iostream>

int main()
{
     int v1 = 50, v2 = 8923;
     std::cout << "The sum of " << v1
               << " and " << v2
               << " is " << v1 + v2 << std::endl;
     return 0;
}
