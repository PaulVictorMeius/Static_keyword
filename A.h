#pragma once
#include <iostream>
class A
{
public:
	static int get_sim() { return sim; }
	static void set_sim(int sim_) { sim = sim_; }
	static int get_star(){ return star; }
private:
	static int sim;
	static const int star = 5;
};
int A::sim = 7;
