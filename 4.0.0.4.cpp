#include <iostream>
#include <vector>

struct student {
    std::string imie;
    std::string nazwisko;
    std::vector<double> oceny;
};

struct grupy {
    std::string nazwa;
    std::vector<struct student> studenci;
};

auto push_to_group(struct grupy*, struct student) -> void;

auto main() -> int {
    std::vector<double> a{2, 5, 3, 4, 3, 3};
    std::vector<double> b{2, 2, 2, 3, 2, 2};
    std::vector<double> c{5, 5, 4, 4, 5, 3};
    struct student first{"a", "a", a};
    struct student second{"b", "b", b};
    struct student third{"c", "c", c};
    std::vector<struct student> s;
    struct grupy g{"nazwa grupy", s};
    push_to_group(&g, first);
    push_to_group(&g, second);
    push_to_group(&g, third);
    for(auto const i : g.studenci) {
        std::cout << i.imie << "\n";
    }
}

auto push_to_group(struct grupy* g, struct student s) -> void {
    (*g).studenci.push_back(s);
}
