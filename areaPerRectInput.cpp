// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 09 - 25 - 22
// This program does basic math.

#include <iostream>

int main() {
    int L;
    int w;
    std::cout << "What is the length of your rectangle? ";
    std::cin >> L;
    std::cout << L << " cm" << std::endl;
    std::cout << "What is the width of your rectangle? ";
    std::cin >> w;
    std::cout << w << " cm" << std::endl;
    std::cout << "Perimeter = (L+w)*2" << std::endl;
    std::cout << "Perimeter is (" << L << "+" << w << ")*2" << std::endl;
    std::cout << "=" << (L + w) * 2 << " cm" << std::endl;
    std::cout << "Area = L*w" << std::endl;
    std::cout << "Area is " << L << "*" << w << std::endl;
    std::cout << "=" << (L * w) << " cm^2" << std::endl;
}
