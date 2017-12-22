#include <iostream>
#include "matrix.hpp"
using namespace std;

int main()
{
	// declare objects , ( matrix_brain is a class , declaration matrix.hpp )
	matrix_brain m1,m2,m3;
	m1.read();
	m2.read();
	m3.multiply(m1 , m2);
	m3.display();
	m3.transpose();
	m3.display();
}
