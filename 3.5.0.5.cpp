#include <iostream>

auto fpsort(void* a[], size_t n, int (*fp)(void*, void*)) -> void;
auto compare(void* a, void* b) -> int;

int main() {
    int arr[4];
    arr[0] = 3;
    arr[1] = 10;
    arr[2] = 5;
    arr[3] = 1;
    void *ptr[4];
    for(auto i=0; i < 4; ++i)
        ptr[i] = &arr[i];
    fpsort(ptr, 4, &compare);
    for(auto i=0; i < 4; ++i)
        std::cout << *(int*)ptr[i] << "\n";
}

auto fpsort(void* a[], size_t n, int (*fp)(void*, void*)) -> void {
    for(auto i=0; i < n-1; ++i) {
        for(auto j=0; j < n-i-1; ++j) {
            if(fp(a[j+1], a[j]) == 1) {
                int tmp = *(int*)a[j];
                *(int*)a[j] = *(int*)a[j+1];
                *(int*)a[j+1] = tmp;
            }
        }
    }
}

auto compare(void* a, void* b) -> int {
    if(*(int*)a < *(int*)b)
        return 1;
    return 0;
}
