#pragma once
#include <iostream>
#include <iomanip>
using namespace std;

class fraction {
	int p;
	int q;
public:
	int get_p();
	int get_q();
	void set_p(int _p);
	void set_q(int _q);
	void set_pq(int _p, int _q);
	void console_input();
	void console_output();
	void output();
	void output(ostream& out);
	void output_all(fraction _tmp);
	bool equals(fraction _tmp);
	bool not_equals(fraction _tmp);
	bool less(fraction _tmp);
	bool less_equal(fraction _tmp);
	bool greater(fraction _tmp);
	bool greater_equals(fraction _tmp);
	fraction plus(fraction _tmp);
	fraction minus(fraction _tmp);
	fraction multiple(fraction _tmp);
	fraction divide(fraction _tmp);
	fraction pow(int &_tmp);
	fraction negate();
	fraction simplification();
	fraction operator++();
	fraction operator--();
	fraction operator++(int val);
	fraction operator--(int val);
	fraction operator+(fraction _tmp);
	fraction operator-(fraction _tmp);
	fraction operator/(fraction _tmp);
	fraction operator*(fraction _tmp);	
	bool operator==(fraction _tmp);
	bool operator!=(fraction _tmp);
	bool operator<(fraction _tmp);
	bool operator>(fraction _tmp);
	bool operator<=(fraction _tmp);
	bool operator>=(fraction _tmp);
	fraction operator+();
	fraction operator-();
	fraction operator+=(fraction _tmp);
	fraction operator-=(fraction _tmp);
	fraction operator/=(fraction _tmp);
	fraction operator*=(fraction _tmp);
	//int operator[](string& _val);
};
	ostream& operator<<(ostream& out,fraction& obj);
	istream& operator>>(istream& in, fraction& obj);
void menu_print();
void menu_print2();