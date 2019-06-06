#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal(int weight, int height)
{
	weight = x;
	height = y;
}
Animal::Animal()
{
}
void Animal::eat()
{
	cout << "animal eat" << endl;
}
void Animal::sleep()
{
	cout << "animal sleep" << endl;
}
void Animal::breathe()
{
	cout << "animal breathe" << endl;
}