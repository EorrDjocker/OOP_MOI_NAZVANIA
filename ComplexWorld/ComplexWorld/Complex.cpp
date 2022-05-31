#include "Complex.h"

Complex Complex::plus(Complex n1)
{
	Complex* c = new Complex();
	c->ip = n1.ip + ip;
	c->rp = n1.rp + rp;
	return *c;
}

Complex Complex::minus(Complex n2)
{
	Complex* c = new Complex();
	c->ip = ip - n2.ip;
	c->rp = rp - n2.rp;
	return *c;
}

Complex Complex::umn(Complex n2)
{
	Complex* c = new Complex();
	c->ip = ip * n2.rp + rp * n2.ip;
	c->rp = rp * n2.rp - ip * n2.ip;
	return *c;
}

Complex Complex::delitb(Complex n2)
{
	Complex* c = new Complex();
	c->ip = (ip * n2.rp - rp * n2.ip)/ (n2.rp * n2.rp + n2.ip * n2.ip);
	c->rp = (rp * n2.rp + ip * n2.ip)/(n2.rp * n2.rp + n2.ip * n2.ip);
	return *c;
}

void Complex::printc()
{
	double r, i;
	r = rp;
	i = ip;
	if (i != 0)
	{
		if (i < 0)
			cout << r << " - i*" << -1 * i;
		else
			cout << r << " + i*" << i;
	}
	else
		cout << r;
}


void summa_c()
{
	double r, i;
	cout << "\nВведите действительную часть первого комплексного слагаемого\n";
	cin >> r;
	cout << "Теперь мнимую\n i*";
	cin >> i;
	Complex a = { r, i };
	cout << "Введите действительную часть второго комплесного слагаемого\n";
	cin >> r;
	cout << "Теперь мнимую\n i*";
	cin >> i;
	Complex b = { r, i };
	cout << "Результат сложения: ";
	Complex c = a.plus(b);
	c.printc();
}

void raznost_c()
{
	double r, i;
	cout << "\nВведите действительную часть комплексного уменьшаемого\n";
	cin >> r;
	cout << "Теперь мнимую\n i*";
	cin >> i;
	Complex a = { r, i };
	cout << "Введите действительную часть комплексного вычитаемого\n";
	cin >> r;
	cout << "Теперь мнимую\n i*";
	cin >> i;
	Complex b = { r, i };
	cout << "Результат вычисления разности: ";
	Complex c = a.minus(b);
	c.printc();
}

void proizvedenie_c()
{
	double r, i;
	cout << "\nВведите действительную часть первого комплексного множителя\n";
	cin >> r;
	cout << "Теперь мнимую\n i*";
	cin >> i;
	Complex a = { r, i };
	cout << "Введите действительную часть второго комплесного множителя\n";
	cin >> r;
	cout << "Теперь мнимую\n i*";
	cin >> i;
	Complex b = { r, i };
	cout << "Результат произведения: ";
	Complex c = a.umn(b);
	c.printc();
}

void delenie_c()
{
	double r, i;
	cout << "\nВведите действительную часть комплексного делимого\n";
	cin >> r;
	cout << "Теперь мнимую\n i*";
	cin >> i;
	Complex a = { r, i };
	cout << "Введите действительную часть комплексного делителя\n";
	cin >> r;
	cout << "Теперь мнимую\n i*";
	cin >> i;
	Complex b = { r, i };
	cout << "Частное: ";
	Complex c = a.delitb(b);
	c.printc();
}

double mod(Complex n5)
{
	return pow(n5.rp * n5.rp + n5.ip * n5.ip, 0.5);
}

Complex toComplex(string s)
{
	double rp = 0, ip = 0;
	int a = 1, b = 1;
	bool I = 0;
	if (s.length() != 0)
	{
		int i;
		string l = "";
		for (i = 0; i < s.length(); i++)
		{
			l += s[i];
			if (s[i] == ' ' or s[i] == '\n')
			{
				if (s[i - 1] == 'i')
				{
					I = true;
					l.erase(l.find('i'), 1);
					if (l != "" and l != "\n")
					{
						ip += stod(l);
					}
					else
					{ 
						ip += 1.0;
					}
					l = "";
				}
				else if (s[i-1] == '+' or s[i - 1] == '-')
				{
					if (s[i - 1] == '-')
					{ 
						if (I == true)
							a *= -1;
						else
							b *= -1;
					
					}
					l = "";
				}
				else
				{
					if (l != "")
						rp += stod(l);
					l = "";
				}
			}
		}
		
	}
	return {rp*a, ip*b};
}