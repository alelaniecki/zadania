#include <iostream>

auto fSum(double(*f)(double), int n, int m) -> double;
auto any_function(double) -> double;

int main() {
    std::cout << fSum(&any_function, 0, 5) << "\n";
}

auto fSum(double(*f)(double), int n, int m) -> double {
    double sum = 0;
    for(auto i = n; i <= m; i++) {
        sum += f(i);
    }
    return sum;
}

auto any_function(double n) -> double {
    return n*1.5;
}
