#include <iostream>
#include "Student.h"

double Add(double a, double b)
{
	return a + b;
}
int main()
{
	
	
	Student *pStu = new Student();
	pStu->SayHello();
	double x = 3.0;
	double y = 5.0;
	double result = pStu->Add(x,y);
	std::cout << x << "+" << y << "=" << result;
	return 0;
}

