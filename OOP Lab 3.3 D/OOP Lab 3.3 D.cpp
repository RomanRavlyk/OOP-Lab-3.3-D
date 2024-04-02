#include "Solution.h"
#include "Solution1.h"
#include <iostream>
using namespace std;

int main()
{
	Liquid liquid;
	Solution sol(liquid, 0);

	Liquid liquid1;
	Solution sol1(liquid, 0);

	cin >> sol;
	cout << sol;

	cin >> sol1;
	cout << sol1;

	cout << sol++ << endl;
	cout << sol-- << endl;
	cout << ++sol << endl;
	cout << --sol << endl;

	sol = sol1;
	cout << sol;

	Solution1 sol2("", 0, 0);

	Solution1 sol3("", 0, 0);

	cin >> sol;
	cout << sol;

	cin >> sol1;
	cout << sol1;

	cout << sol++ << endl;
	cout << sol-- << endl;
	cout << ++sol << endl;
	cout << --sol << endl;

	sol = sol1;
	cout << sol;
	return 0;
}