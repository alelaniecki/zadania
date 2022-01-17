#include <iostream>

enum PERMISSION {
PERM_READ    = 1,
PERM_WRITE   = 2,
PERM_EXETUTE = 4,
};

int main() {
    int users[10];
    for(auto i = 0; i < 10; ++i) {
        users[i] = (i*3-i*2+i*10)%8;
    }
    for(auto i = 0; i < 10; ++i) {
        std::cout << "User " << i << ": ";
        auto const can_read = (users[i] & PERM_READ);
        auto const can_write = (users[i] & PERM_WRITE);
        auto const can_exec = (users[i] & PERM_EXETUTE);
        if(can_read > 0)
            std::cout << "[read] ";
        if(can_write > 0)
            std::cout << "[write] ";
        if(can_exec > 0)
            std::cout << "[execute] ";
        std::cout << "\n";
    }
}
