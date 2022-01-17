#include <iostream>
#include <vector>

struct student {
    std::string imie;
    std::string nazwisko;
    std::vector<double> oceny;
};

auto average_of(struct student) -> double;
auto get_best_student(std::vector<struct student>) -> struct student;

auto main() -> int {
    std::vector<double> a{2, 5, 3, 4, 3, 3};
    std::vector<double> b{2, 2, 2, 3, 2, 2};
    std::vector<double> c{5, 5, 4, 4, 5, 3};
    struct student first{"a", "a", a};
    struct student second{"b", "b", b};
    struct student third{"c", "c", c};
    std::vector<struct student> s;
    s.push_back(first);
    s.push_back(second);
    s.push_back(third);
    for(auto const i : s) {
        std::cout << "Srednia studenta " << i.imie << ": " << average_of(i) << "\n";
    }
    std::cout << "Najlepszy student to: " << get_best_student(s).imie << "\n";
}

auto average_of(struct student s) -> double {
    double srednia = 0;
    for(auto const i : s.oceny) {
        srednia += i;
    }
    return srednia/s.oceny.size();
}

auto get_best_student(std::vector<struct student> s) -> struct student {
    double m = 0;
    struct student best_one;
    for(auto const i : s) {
        auto tmp = average_of(i);
        if(m < tmp) {
            m = tmp;
            best_one = i;
        }
    }
    return best_one;
}
