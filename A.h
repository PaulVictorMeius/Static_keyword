#pragma once
#include <iostream>
class A
{
public:
	static int get_sim() { return sim; }
	static void set_sim(int sim_) { sim = sim_; }
	static int get_star(){ return star; }
	static void printValues(){ std::cout << "sim = " << sim << " and star = " << star << '\n'; }
	/*static*/ int f() { return m; }//cannot access m if static
private:
	static int sim;
	static const int star = 5;
	int m = 24;
};
int A::sim = 7;
