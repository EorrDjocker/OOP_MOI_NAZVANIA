#include "Hector.h"

double Vector::Set_x()
{
	cin >> x;
	return x;
}

double Vector::Set_y()
{
	cin >> y;
	return y;
}

double Vector::Set_z()
{
	cin >> z;
	return z;
}

double Vector::Change_x(double x1)
{
	return x = x1;
}

double Vector::Change_y(double y1)
{
	return y = y1;
}

double Vector::Change_z(double z1)
{
	return z = z1;
}

void Vector::Print(Vector n)
{
	cout << "(" << n.x << "," << n.y << "," << n.z << ")";
}

double Vector::Module(Vector n)
{
	cout << "\nModule";
	n.Print(n);
	cout << " = " << sqrt(x * x + y * y + z * z) << "\n";
	return sqrt(x * x + y * y + z * z);
}

double Vector::Scalar_proizv(Vector n1, Vector n2)
{
	cout << "\n";
	n1.Print(n1);
	cout << " * ";
	n2.Print(n2);
	cout << " = " << n1.x * n2.x + n1.y * n2.y + n1.z * n2.z << "\n";
	return n1.x * n2.x + n1.y * n2.y + n1.z * n2.z;
}

Vector Vector::Vector_proizv(Vector n1, Vector n2)
{
	Vector n3;
	double x1 = (n1.y * n2.z - n1.z * n2.y);
	n3.Change_x(x1);
	double y1 = (n1.z * n2.x - n1.x * n2.z);
	n3.Change_y(y1);
	double z1 = (n1.x * n2.y - n1.y * n2.x);
	n3.Change_z(z1);
	cout << "\n";
	n1.Print(n1);
	cout << " x ";
	n2.Print(n2);
	cout << " = ";
	n3.Print(n3);
	cout << "\n";
	return n3;
}

Vector Vector::Sum(Vector n1, Vector n2)
{
	Vector n3;
	double x1 = (n1.x + n2.x);
	n3.Change_x(x1);
	double y1 = (n1.y + n2.y);
	n3.Change_y(y1);
	double z1 = (n1.z + n2.z);
	n3.Change_z(z1);
	n1.Print(n1);
	cout << " + ";
	n2.Print(n2);
	cout << " = ";
	n3.Print(n3);
	cout << "\n";
	return n3;
}

Vector Vector::Raznost(Vector n1, Vector n2)
{
	Vector n3;
	double x1 = (n1.x - n2.x);
	n3.Change_x(x1);
	double y1 = (n1.y - n2.y);
	n3.Change_y(y1);
	double z1 = (n1.z - n2.z);
	n3.Change_z(z1);
	n1.Print(n1);
	cout << " - ";
	n2.Print(n2);
	cout << " = ";
	n3.Print(n3);
	cout << "\n";
	return n3;
}

Vector Vector::MnojitNa(Vector n1, double n2)
{
	Vector n3;
	double x1 = (n1.x * n2);
	n3.Change_x(x1);
	double y1 = (n1.y * n2);
	n3.Change_y(y1);
	double z1 = (n1.z * n2);
	n3.Change_z(z1);
	n1.Print(n1);
	cout << " * " << n2 << " = ";
	n3.Print(n3);
	cout << "\n";
	return n3;
}