#include <iostream>
#include <vector>

int main() {
	std::vector<int> bubbles = { 5, 8, 1, 45, 2, 0 };
	bool change = true;
	while (change) {
		change = false;
		for (int i = 0; i < bubbles.size() - 1; i++) {
			if (bubbles[i] > bubbles[i + 1]) {
				int c = bubbles[i];
				bubbles[i] = bubbles[i + 1];
				bubbles[i + 1] = c;
				change = true;
			}
		}
	}
	for (int i : bubbles) {
		std::cout << i<< " ";
	}

}


//int main()
//{
//    int a = 7, b = 5;
//
//    std::swap(a, b);
//
//    std:: cout << a << '\n' << b << '\n';
//    return 0;
//}

//int main()
//{
//    int a;
//    std::cin >> a;
//    int b;
//    std::cin >> b;
//
//    int c;
//    c = a;
//    a = b;
//    b = c;
//
//
//    std::cout << a<<'\n';
//    std::cout << b;
//
//}
