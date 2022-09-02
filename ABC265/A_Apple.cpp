#include <iostream>

int main() {
    int x, y, n, result = 0;

    std::cin >> x >> y >> n;

    if (y > 3 * x) {
        result = n * x;
    }
    else {
        result = ((n / 3) * y) + ((n % 3) * x);
    }

    std::cout << result << std::endl;
}