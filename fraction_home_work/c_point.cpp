#include "c_point.h"

int fraction::get_p()
{
	return p;
}

int fraction::get_q()
{
	return q;
}



void fraction::set_p(int _p)
{
		p = _p;
}

void fraction::set_q(int _q)
{
	if (_q < 1) cerr << "enter natural number\n";
	else q = _q;
}

void fraction::set_pq(int _p, int _q)
{
	set_p(_p);
	set_q(_q);
}

void fraction::console_input()
{
	int _p, _q;
	cout << "\np: ";
	cin >> _p;
	cout << "q: ";
	cin >> _q;
	set_pq(_p, _q);

}

void fraction::console_output()
{	
	if (p % q == 0) {
		cout << p / q;
	}
	else cout << p << "/" << q;
}

void fraction::output()
{
	cout << p << "/" << q<< endl;
}

void fraction::output(ostream& out)
{
	cout << p << "/" << q << endl;
}

void fraction::output_all(fraction _tmp)
{
	cout << "r1: " << p << "/" << q << endl;
	cout << "r2: " << _tmp.p << "/" << _tmp.q << endl;
}

bool fraction::equals(fraction _tmp)
{
	if ((float)p / q == (float)_tmp.p / _tmp.q)return true;
	else return false;
}

bool fraction::not_equals(fraction _tmp)
{
	return !equals(_tmp);
}

bool fraction::less(fraction _tmp)
{
	if ((float)p / q < (float)_tmp.p / _tmp.q)return true;
	else return false;
}

bool fraction::less_equal(fraction _tmp)
{	
	if (equals(_tmp) || less(_tmp))return true;
	else return false;
}

bool fraction::greater(fraction _tmp)
{
	return !less(_tmp);
}

bool fraction::greater_equals(fraction _tmp)
{
	if (equals(_tmp) || greater(_tmp))return true;
	else return false;
}

fraction fraction::plus(fraction _tmp)
{
	fraction result;
	result.q = q * _tmp.q;
	result.p = ((result.q / q) * p) + ((result.q / _tmp.q) * _tmp.p);
	return result;
}

fraction fraction::minus(fraction _tmp)
{
	fraction result;
	result.q = q * _tmp.q;
	result.p = ((result.q / q) * p) - ((result.q / _tmp.q) * _tmp.p);
	return result;
}

fraction fraction::multiple(fraction _tmp)
{
	fraction result;
	result.q = q * _tmp.q;
	result.p =  p * _tmp.p;
	return result;
}

fraction fraction::divide(fraction _tmp)
{
	fraction result;
	result.q = q * _tmp.p;
	result.p = p * _tmp.q;
	return result;
}

fraction fraction::pow(int &_tmp)
{
	fraction result;
	if (_tmp < 0) {
		result.p = q;
		result.q = p;
		_tmp *= -1;
		for (int i = 1; i < _tmp; i++)
		{
			result.p *= q;
			result.q *= p;
		}
	}
	else {
		result.p = p;
		result.q = q;
		for (int i = 1; i < _tmp; i++)
		{
			result.p *= p;
			result.q *= q;
		}
	}

	return result;
}

fraction fraction::negate()
{
	fraction res;
	res.p = p;
	res.q = q;
	res.p *= -1;
	return res;
}

fraction fraction::simplification()
{
	fraction res;
	res.p = p;
	res.q = q;
	for (int i = q; i > 1; i--)
	{
		if (res.q % i == 0 && res.p % i == 0) {
			res.p /= i;
			res.q /= i;
		}
	}
	return res;
}

fraction fraction::operator++()
{
	fraction tmp;
	tmp.p = 1;
	tmp.q = 1;
	*this = this->plus(tmp);
	return *this;
}

fraction fraction::operator--()
{
	fraction tmp;
	tmp.p = 1;
	tmp.q = 1;
	*this = this->minus(tmp);
	return *this;
}

fraction fraction::operator++(int val)
{
	fraction tmp2(*this);
	fraction tmp;
	tmp.p = 1;
	tmp.q = 1;
	*this = this->plus(tmp);
	return tmp2;
}

fraction fraction::operator--(int val)
{
	fraction tmp2(*this);
	fraction tmp;
	tmp.p = 1;
	tmp.q = 1;
	*this = this->minus(tmp);
	return tmp2;
}

fraction fraction::operator+(fraction _tmp)
{
	fraction res;
	res = this->plus(_tmp);
	return res;
}

fraction fraction::operator-(fraction _tmp)
{
	fraction res;
	res = this->minus(_tmp);
	return res;

}

fraction fraction::operator/(fraction _tmp)
{
	fraction res;
	res = this->divide(_tmp);
	return res;

}

fraction fraction::operator*(fraction _tmp)
{
	fraction res;
	res = this->multiple(_tmp);
	return res;
}

bool fraction::operator==(fraction _tmp)
{
	return this->equals(_tmp);
}

bool fraction::operator!=(fraction _tmp)
{
	return !this->equals(_tmp);
}

bool fraction::operator<(fraction _tmp)
{
	return this->less(_tmp);
}

bool fraction::operator>(fraction _tmp)
{
	return this->greater(_tmp);
}

bool fraction::operator<=(fraction _tmp)
{
	return this->less_equal(_tmp);
}

bool fraction::operator>=(fraction _tmp)
{
	return this->greater_equals(_tmp);
}

fraction fraction::operator+()
{
	this->p *= 1;
	return *this;
}

fraction fraction::operator-()
{
	this->p *= -1;
	return *this;
}

fraction fraction::operator+=(const fraction _tmp)
{
	*this = this->plus(_tmp);
	return *this;
}

fraction fraction::operator-=(fraction _tmp)
{
	*this = this->minus(_tmp);
	return *this;
}

fraction fraction::operator/=(fraction _tmp)
{
	*this = this->divide(_tmp);
	return *this;
}

fraction fraction::operator*=(fraction _tmp)
{
	*this = this->multiple(_tmp);
	return *this;
}

//int fraction::operator[](string& _val)
//{
//	string num = "numerator";
//	string den = "denominator";
//	if (num == _val)return this->get_p();
//	else if (den == _val)return this->get_q();
//	else return 0;
//}


ostream& operator<<(ostream& out, fraction& obj)
{
	obj.output(out);
	return out;
}

istream& operator>>(istream& in, fraction& obj)
{
	int _p,_q;
	cout << "enter numerator: ";
	cin >> _p;
	obj.set_p(_p);
	cout << "enter denominator: ";
	cin >> _q;
	obj.set_q(_q);
	return in;

}



void menu_print()
{
	cout << "\n\n1 - get\n";
	cout << "2 - set\n";
	cout << "3 - consol input\n";
	cout << "4 - consol output\n";
	cout << "5 - equals\n";
	cout << "6 - not equal\n";
	cout << "7 - less\n";
	cout << "8 - less equal\n";
	cout << "9 - greater\n";
	cout << "10 - greater equal\n";
	cout << "11 - plus, minus, multiple, divide\n";
	cout << "12 - pow\n";
	cout << "13 - negate\n";
	cout << "14 - simplification\n";
	cout << "15 - ++prefix\n";
	cout << "16 - postfix++\n";
	cout << "17 - --prefix\n";
	cout << "18 - postfix--\n";
	cout << "19 - operator +\n";
	cout << "20 - operator -\n";
	cout << "21 - operator /\n";
	cout << "22 - operator *\n";
	cout << "23 - operator ==\n";
	cout << "24 - operator !=\n";
	cout << "25 - operator <\n";
	cout << "26 - operator <=\n";
	cout << "27 - operator >\n";
	cout << "28 - operator >=\n";
	cout << "29 - + and -\n";
	cout << "30 - more...\n";
	cout << "0 - exit\n";
	cout << "enter you choice: ";
}

void menu_print2()
{
	cout << "1 - r1 += r2\n";
	cout << "2 - r1 -= r2\n";
	cout << "3 - r1 *= r2\n";
	cout << "4 - r1 /= r2\n";
	cout << "5 - cout << r1 or cout << r1\n";
	cout << "6 - cin >> r1 or cin >> r1\n";
	cout << "7 - []\n";
	cout << "0 - exit\n";

}
