#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

struct Complex
{
	double rp = 0;
	double ip = 0;

	Complex plus(Complex n1);
	Complex minus(Complex n2);
	Complex umn(Complex n3);
	Complex delitb(Complex n4);
	void printc();
	
};

double mod(Complex n5);
void summa_c();
void raznost_c();
void proizvedenie_c();
void delenie_c();
Complex toComplex(string s);
#endif // COMPLEX_H