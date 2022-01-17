#include <iostream>

auto fpprint(void* a[], size_t n, void(*fp)(void*)) -> void;
auto print_int(void*) -> void;
auto print_str(void*) -> void;

int main() {
    std::string arr_str[2];
    arr_str[0] = "Hello";
    arr_str[1] = "World";

    int arr_int[3];
    arr_int[0] = 89;
    arr_int[1] = 20;
    arr_int[2] = 30;

    void *ptr_str[2];
    void *ptr_int[3];
    for(auto i=0; i < 2; ++i)
        ptr_str[i] = &arr_str[i];
    for(auto i=0; i < 3; ++i)
        ptr_int[i] = &arr_int[i];

    fpprint(ptr_str, 2, &print_str);
    fpprint(ptr_int, 3, &print_int);
}

auto fpprint(void* a[], size_t n, void(*fp)(void*)) -> void {
    for(auto i=0; i < n; ++i) {
        fp(a[i]);
    }
}

auto print_int(void* p) -> void {
    std::cout << *(int*)p << "\n";
}

auto print_str(void* p) -> void {
    std::cout << *(std::string*)p << "\n";
}
