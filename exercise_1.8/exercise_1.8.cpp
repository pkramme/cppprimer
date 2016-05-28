#include<iostream>

int main()
{
     std::cout << "/*";
     std::cout << "*/";
     //std::cout << /* "*/" */ WTF, obviously not.
     std::cout << /* "*/" /* "/*" */; //So broken, it actually works.
     return 0;
}
