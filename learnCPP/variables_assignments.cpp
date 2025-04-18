#include <iostream>

int main()
{
    // copy initialization 
    int a = 10;

    // direct init
    int b (10);

    // list init 
    int c{ 10 };
    

    std:: cout << a << " " << b << " " << c << std::endl; 

    // this should give compiler error
    int d{ 6.7 };

}