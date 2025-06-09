#include <iostream>
#include <vector>


bool canPlaceFlowers(std::vector<int>& flowerbed, int n) {

}

int fib(int number) {

    if (number == 1) {
    return 1;
    }
    if (number == 0) {
    return 0;
    }
    return fib(number - 1) + fib(number - 2);
}

int fact(int number) {

    if (number <= 1) {
    return 1;
    }
        return number * fact(number - 1);
}


int main()
{
    std::cout << fib(8);

    //std::cout << fact(15);
    return 0;
}
