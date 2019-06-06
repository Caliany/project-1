#pragma once
class Animal
{
private:
	int x,y;
public:
	Animal(int weight,int height);
	Animal();
	void eat();

	void sleep();

	virtual void breathe();


};