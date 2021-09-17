#include "A.h"
int main()
{
    std::cout << "sim=" << A::get_sim() << '\n';
    A::set_sim(99);
    std::cout << "sim=" << A::get_sim() << '\n';
    std::cout << "star=" << A::get_star() << '\n';
}

