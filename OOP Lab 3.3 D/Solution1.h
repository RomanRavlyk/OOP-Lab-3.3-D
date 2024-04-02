#pragma once
#include <string>
#include "Liquid.h"
using namespace std;

class Solution1: private Liquid
{
private:
	std::string name;
	int density;
	int amount;
public:
	Solution1() : name(""), amount(0), density(0) {}

	Solution1(string name, int density, int amount1) : name(name), amount(amount1), density(density) {}

	Solution1(const Solution1& other) : name(other.name), amount(other.amount), density(other.density) {}
	~Solution1() {}
	int getAmount() const { return amount; }
	void setAmount(int value) { this->amount = value; };
	string getName() const { return name; }
	void setName(std::string value) { this->name = value; };
	int getDensity() const { return density; }
	void setDen(int value) { this->density = value; };


	Solution1& operator=(const Solution1& other);
	Solution1& operator ++();
	Solution1& operator --();
	Solution1 operator ++(int);
	Solution1 operator --(int);
	operator string() const;
	friend ostream& operator << (ostream&, const Solution1&);
	friend istream& operator >> (istream&, Solution1&);
};

