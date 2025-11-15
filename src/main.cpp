#include <iostream>
#include "AdaTypes.hpp"
#include "AdaFunctions.hpp"

int main() {
    std::cout << "Ada-like-Cplusplus starting..." << std::endl;

    int x = 5;
    int result = increment(double_val(x));

    std::cout << "Result: " << result << std::endl;

    Pair p {10, 20};
    std::cout << "Pair: (" << p.a << ", " << p.b << ")" << std::endl;

    return 0;
}
