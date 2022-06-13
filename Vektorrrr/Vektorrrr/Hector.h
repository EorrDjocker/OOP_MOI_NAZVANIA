#ifndef HECTOR_H
#define HECTOR_H

#include <iostream>
using namespace std;

class Vector
{
	private:
		double x;
		double y;
		double z;

	public:
		Vector() : x(0), y(0), z(0) //По умолчанию
		{

		}

		Vector(double x, double y, double z)
		{
			this->x = x;
			this->y = y;
			this->z = z;
		}

		Vector( Vector const & a) //Копия
		{
			this->x = a.x;
			this->y = a.y;
			this->z = a.z;
		}

		~Vector() //Деструктор
		{

		}

		double Set_x();
		double Set_y();
		double Set_z();
		double Module(Vector n);
		double Scalar_proizv(Vector n1, Vector n2);
		double Change_x(double x1);
		double Change_y(double y1);
		double Change_z(double z1);
		Vector Vector_proizv(Vector n1, Vector n2);
		void Print(Vector n);
		Vector Sum(Vector n1, Vector n2);
		Vector Raznost(Vector n1, Vector n2);
		Vector MnojitNa(Vector n1, double n2);
};
#endif