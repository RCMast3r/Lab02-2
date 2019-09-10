// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ostream>
#include <cmath>
using namespace std;
class Complex {
	double real, imag;
public:
	Complex();
	Complex(double r, double i);
	void setVals(double r, double i);
	double getReal(); // Return real part
	double getImag(); // Return imaginary part
	double getMag(); // Return magnitude
	Complex operator+(Complex c); // Add two complex numbers
	Complex operator-(Complex c); // Subtract two complex numbers
	Complex operator*(Complex c); // Multiply two complex numbers
	Complex operator/(Complex c); // Divide two complex numbers
};
//ostream& operator<<(ostream& out, Complex z); // Write z to the output stream out
Complex operator/(double x, Complex z); // Return reciprocal of z multiplied by scalar x



Complex::Complex()
{
}

Complex::Complex(double r, double i)
{
}

void Complex::setVals(double r, double i)
{
	real = r;
	imag = i;

}

double Complex::getReal()
{
	return real;
}

double Complex::getImag()
{
	return imag;
}

double Complex::getMag()
{
	return sqrt(pow(real,2)+pow(imag,2));
}

Complex Complex::operator+(Complex c)
{
	Complex a;
	double r = real + c.getReal();
	double i = imag + c.getImag();
	a.setVals(r, i);

	return a;
}

Complex Complex::operator-(Complex c)
{
	Complex a;
	double r = real - c.getReal();
	double i = imag - c.getImag();
	a.setVals(r, i);

	return a;
}

Complex Complex::operator*(Complex c)
{
	Complex a;
	double r = (real*c.getReal()) - (imag*c.getImag());
	double i = (real * c.getImag()) + (imag*c.getReal());
	a.setVals(r, i);
	return a;
}
Complex operator/(double x, Complex z) { //reciprocal part
	Complex a;
	double r = (z.getReal() / (pow(z.getReal(), 2) + pow(z.getImag(), 2)));
	double i = (z.getImag() / (pow(z.getReal(), 2) + pow(z.getImag(), 2)));
	a.setVals(r, -i);
	return a;
}
Complex Complex::operator/(Complex c) {
	Complex a;
	double r = real * c.getReal();
	double i = imag * c.getImag();
	a.setVals(r, -i);
	return a;
}
int main()
{
	Complex a;
	a.setVals(3.0, 2.0);
	Complex b;
	b.setVals(3.0, -2.0);
	Complex c = 1.0 / b;
	Complex d = a * c;
	cout << d.getReal()<<endl;
	cout << d.getImag();
	/*
	Complex y[20];
	Complex yt;
	const int n = 20;
	double yMin = -1.5, yMax = 1.5;
	for (int x = 0; x < n; x++) {
		double m = (yMax - yMin) / (n - 1);
		yt.setVals((m*x) + yMin, -1.2);
		y[x]->

	}
	*/
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

