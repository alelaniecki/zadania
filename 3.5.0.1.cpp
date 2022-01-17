#include <iostream>
#include <random>

auto call_with_random_int(void(*fp)(int const)) -> void;
auto some_function(int const) -> void;

int main() {
    call_with_random_int(&some_function);
}

auto call_with_random_int(void(*fp)(int const)) -> void {
   std::mt19937 engine;
   std::uniform_int_distribution<int> distribution(1, 100);
   engine.seed(std::random_device{}());
   auto const RANDOM_NUMBER = distribution(engine);
   fp(RANDOM_NUMBER);
}

auto some_function(int const a) -> void {
    std::cout << a << "\n";
}
