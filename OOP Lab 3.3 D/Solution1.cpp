#include <iostream>
#include <string>
#include <sstream>
#include "Solution1.h"

using namespace std;

Solution1& Solution1::operator ++() {
	amount++;
	return *this;
}

Solution1& Solution1::operator --() {
	amount--;
	return *this;
}

Solution1 Solution1::operator ++(int)
{
	Solution1 t(*this);
	amount++;
	return t;
}

Solution1 Solution1::operator --(int)
{
	Solution1 t(*this);
	amount--;
	return t;
}

ostream& operator << (ostream& out, const Solution1& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Solution1& r)
{
	string x;
	int y;
	cout << "Enter liquid name: ";  in >> x; cout << endl;
	r.setName(x);
	cout << "Enter liquid density: ";  in >> y; cout << endl;
	r.setDen(y);
	cout << " Enter amount = "; int z;  
	in >> z; cout << endl;
	r.setAmount(z);
	return in;
}

Solution1::operator string() const {
	stringstream ss;
	ss << "Your name: " << getName() << endl;
	ss << "Your density: " << getDensity() << endl;
	ss << "Your amount: " << amount << endl;
	return ss.str();
}

Solution1& Solution1::operator=(const Solution1& other) {
	string y = other.getName();
	int x = other.getDensity();
	setName(y);
	setDen(x);
	amount = other.amount;
	return *this;
}