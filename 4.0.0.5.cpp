#include <iostream>
#include <vector>
#include <algorithm>

struct student {
    std::string imie;
    std::string nazwisko;
    std::vector<double> oceny;
};

struct grupy {
    std::string nazwa;
    std::vector<struct student> studenci;
};

auto average_of(struct student) -> double;
auto median(std::vector<double>) -> double;
auto best_groups_name(std::vector<struct grupy>) -> struct grupy;

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
    std::vector<struct grupy> g;
    g.push_back({"a", s});
    a = {4, 3, 2, 5, 3};
    b = {4, 2, 2, 4, 3};
    c = {4, 5, 2, 5, 3};
    first = {"a2", "a2", a};
    second = {"b2", "b2", b};
    third = {"c2", "c2", c};
    std::vector<struct student> s2;
    s2.push_back(first);
    s2.push_back(second);
    s2.push_back(third);
    g.push_back({"b", s2});
    a = {1, 2, 3, 4, 5};
    b = {4, 3, 3, 4, 3};
    c = {4, 5, 3, 5, 3};
    first = {"a3", "a3", a};
    second = {"b3", "b3", b};
    third = {"c3", "c3", c};
    std::vector<struct student> s3;
    s3.push_back(first);
    s3.push_back(second);
    s3.push_back(third);
    g.push_back({"c", s3});
    std::cout << "Nazwa najlepszej grupy to: " << best_groups_name(g).nazwa << "\n";
}

auto best_groups_name(std::vector<struct grupy> g) -> struct grupy {
    double m = 0;
    struct grupy best_one;
    for(auto const i : g) {
        std::vector<double> tmp;
        for(auto const j : i.studenci) {
            tmp.push_back(average_of(j));
        }
        if(m < median(tmp)) {
            m = median(tmp);
            best_one = i;
        }
    }
    return best_one;
}

auto average_of(struct student s) -> double {
    double srednia = 0;
    for(auto const i : s.oceny) {
        srednia += i;
    }
    return srednia/s.oceny.size();
}

auto median(std::vector<double> s) -> double {
    std::sort(s.begin(), s.end());
    if(s.size()%2 == 1)
        return s[s.size()/2];
    else
        return (s[s.size()/2]+s[s.size()/2-1])/2;
}
