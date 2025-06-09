#include <iostream>
#include <cstdlib>

int main()
{
   /* int number = 4;
    A = number;*/
    //int number;
    //std::cin >> number;
    //if (number % 2 == 0) {
    //    std::cout << number <<" " << "true" << "\n";
    //}
    //else
    //{
    //    std::cout << number <<" " << "false" << "\n";
    //}
    //return 0;
    int mass [10];
    int min = 0;
    int max = 100;

for (int i = 0; i < 10; ++i) {
    mass[i] = rand() % max;
    std::cout << mass[i] << "\n ";
}



return 0;
}


