#include "A.h"
int main()
{
    std::cout << "sim=" << A::get_sim() << '\n';
    A a;
    a.set_sim(23);
    std::cout << "sim=" << A::get_sim() << '\n';
}

