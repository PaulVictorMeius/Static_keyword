#include "A.h"
int main()
{
    std::cout << "sim=" << A::get_sim() << '\n';
    A::set_sim(99);
    std::cout << "sim=" << A::get_sim() << '\n';
    std::cout << "star=" << A::get_star() << '\n';
    A::printValues();
    A a;
    std::cout << "m=" << a.f() << '\n';
    std::cout << "again sim=" << a.g() << '\n';
}

