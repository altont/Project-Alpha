// Project Alpha.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <assert.h>
#include <string.h>
#include <cstdlib>
#include <cmath>
#include <limits>
#include <vector>
#include <time.h>
#include <random>

#define ATRAND (double)rand()/RAND_MAX

using namespace std;


class arm {
public:
	void init();
	void pull();
};

void arm::init() {
	vector<int> arm;
};

void arm::pull() {
	/*double mu;
	double sigma;
	double generateGaussianNoise(double mu, double sigma);
	{
		const double epsilon = std::numeric_limits<double>::min();
		const double two_pi = 2.0*3.14159265358979323846;

		static double z0, z1;
		static bool generate;
		generate = !generate;

		if (!generate)
			return z1 * sigma + mu;

		double u1, u2;
		do
		{
			u1 = rand() * (1.0 / RAND_MAX);
			u2 = rand() * (1.0 / RAND_MAX);
		} while (u1 <= epsilon);

		z0 = sqrt(-2.0 * log(u1)) * cos(two_pi * u2);
		z1 = sqrt(-2.0 * log(u1)) * sin(two_pi * u2);
		return z0 * sigma + mu;*/
	}
};

class MAB {
public:
	void init();

};

void MAB::init() {
	int n;
	vector<int> MAB;
	for (int i = 1; i < n; i++) {

	}
}

class agent {
	void init();
	void decide();
	void act();
	void react();
	void reset();
};


void agent::init() {
	
}

void agent::decide() {

}

void agent::act() {

}


void agent::react() {

}

void agent::reset() {

}

int main()
{
	srand(time(NULL));
	
	double mu;
	double sigma;
	double generateGaussianNoise(double mu, double sigma);
	{
		const double epsilon = std::numeric_limits<double>::min();
		const double two_pi = 2.0*3.14159265358979323846;

		static double z0, z1;
		static bool generate;
		generate = !generate;

		if (!generate)
			return z1 * sigma + mu;

		double u1, u2;
		do
		{
			u1 = rand() * (1.0 / RAND_MAX);
			u2 = rand() * (1.0 / RAND_MAX);
		} while (u1 <= epsilon);

		z0 = sqrt(-2.0 * log(u1)) * cos(two_pi * u2);
		z1 = sqrt(-2.0 * log(u1)) * sin(two_pi * u2);
		return z0 * sigma + mu;
	}

	vector<int> MAB;


    return 0;
}

