//vector.cpp
// Question 1, Assignment 4, COEN 244
// Student 1: Mark Zalass 40097293
// Student 2: Suyash Sinha 40096587
#include <iostream>
//#include <math.h>
using namespace std;

class Vector
{
public:

	Vector() {
	}
	Vector(double a, double b, double c) {
		x = a;
		y = b;
		z = c;
		unitX = x / sqrt(x*x + y * y + z * z);
	}
	/*
	//setting the unit vector using the dot product
	void setUnitVector(double a) {

		unitX= x/sqrt(a);
		unitY = y/ sqrt(a);
		unitZ= z / sqrt(a);
		cout << endl << "<" << unitX << "," << unitY << "," << unitZ << ">" << endl;

	} */


	Vector operator+(const Vector& parameter)
	{
		Vector temp;
		temp.x = x + parameter.x;
		temp.y = y + parameter.y;
		temp.z = z + parameter.z;
		return temp;
	}
	Vector operator*(const Vector& parameter)
	{
		Vector temp;
		temp.x = y * parameter.z - z * parameter.y;
		temp.y = z * parameter.x - x * parameter.z;
		temp.z = x * parameter.y - y * parameter.x;
		return temp;
	}
	double operator,(const Vector& parameter) {
		double temp;
		temp = x * parameter.x + y * parameter.y + z * parameter.z;
		return temp;
	}
	Vector operator<<(const Vector& parameter) {

	}
	Vector operator>>(const Vector& parameter) {

	}


	/*
	using boolean for == and!=

	bool operator==( Vector& parameter) {

		if (parameter.unitX==unitX&& parameter.unitY== unitY&&parameter.unitX == unitX)
		{
			return true;
		}
		else
		{
			return false;//unneccassary else
		}
	}
	bool operator!=(const Vector& parameter) {
		if (parameter.unitX == unitX && parameter.unitY == unitY && parameter.unitX == unitX)
		{
			return false;
		}
		else
		{
			return true;//unneccassary else
		}

		}
		*/

	void operator==(Vector& parameter) {

		if (parameter.unitX == unitX && parameter.unitY == unitY && parameter.unitX == unitX)
		{
			cout << " The equality is true since, the 2 vectors are equal.\n\n";
		}
		else
		{
			cout << " The equality is false since,the 2 vectors are not equal.\n\n";
		}
	}
	void operator!=(const Vector& parameter) {
		if (parameter.unitX == unitX && parameter.unitY == unitY && parameter.unitX == unitX)
		{
			cout << " The inequality is true since, the 2 vectors are not equal.\n\n";
		}
		else
		{
			cout << " The inequality is false since,the 2 vectors are equal.\n\n";
		}

	}

	void print()
	{
		cout <<"<" << x << "," << y << "," << z << ">";
	
	}
	void printUnitVector()
	{
		cout << endl << "The vector:<" << x << "," << y << "," << z << ">";
		cout << endl << "and it's unit vector is <" << unitX << "," << unitY << "," << unitZ << ">" << endl;
	}

	
	~Vector() {

	}

private:
	double x, y, z;
	double unitX, unitY, unitZ;
};


int main() // Main Function
{



	Vector v1(1.0,1.0,1.0);//need to enter decimal or else it will read as int and not function
	Vector v2(-1.0,4.5,6.2);
	Vector temp;

	v1.print();
	cout << "+";
	v2.print();
	cout << "=";
	temp = v1 + v2;
	temp.print();
	cout << endl << endl;

	v1.print();
	cout << "x";
	v2.print();
	cout << "=";
	temp = v1 * v2;
	temp.print();
	cout << endl<<endl;

	//cout << endl << v1.operator,(v1) << endl;
	//cout << endl << v2.operator,(v2) << endl;
	//double x = (v1, v1);
	//cout << x;
	//v1.setUnitVector((v1,v1));
	//v2.setUnitVector(v2.operator,(v2));

	v1.print();
	cout << ".";
	v1.print();
	cout << "=";
	cout << (v1, v1) << endl<<endl;
	
	
	
	v2.print();
	cout << ".";
	v2.print();
	cout << "=";
	cout << (v2, v2) << endl << endl;
	
	
	v1.print();
	cout << ".";
	v2.print();
	cout << "=";
	cout << (v1, v2)<<endl << endl;


	v1.print();
	cout << "!=";
	v2.print();
	v1 != v2;


	v1.print();
	cout << "==";
	v2.print();
	v1 == v2;
	
	Vector v3(-2.0, -2.0, -2.0);
	
	v1.print();
	cout << "!=";
	v3.print();
	v1 != v3;


	v1.print();
	cout << "==";
	v3.print();
	v1 == v3;

	
	
	system("pause");
	return 0;
}