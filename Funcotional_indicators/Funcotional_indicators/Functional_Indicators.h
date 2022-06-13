#ifndef FUNCTIONAL_INDICATORS_H
#define FUNCTIONAL_INDICATORS_H
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void invert(int* arr, int n);
void neubivka(int* massive, int n);
void nevozrost(int* massive, int n);
void (*function(int summa, int* massive))(int* massive, int n);

#endif //FUNCTIONAL_INDICATORS_H