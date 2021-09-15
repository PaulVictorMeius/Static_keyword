#pragma once
#include <iostream>
class A
{
public:
	static int get_sim() { return sim; }
	static void set_sim(int sim_) { sim = sim_; }
private:
	static int sim;
};
int A::sim = 7;
