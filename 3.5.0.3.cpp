#include <iostream>

auto memrev(void* s, size_t n) -> void;

int main() {
    unsigned char bytes[4];
    bytes[0] = 'a';
    bytes[1] = 'b';
    bytes[2] = 'c';
    bytes[3] = 'd';
    void *ptr = bytes;
    memrev(ptr, 4);
    for(auto i = 0; i < 4; i++) {
        std::cout << bytes[i] << " ";
    }
    std::cout << "\n";
}

auto memrev(void* s, size_t n) -> void {
    void *out;
    for(auto i=1; n-i > i-1; i++) {
        char tmp = *((char*)s+n-i);
        *((unsigned char*)s+n-i) = *((unsigned char*)s+i-1);
        *((unsigned char*)s+i-1) = tmp;
    }
}
