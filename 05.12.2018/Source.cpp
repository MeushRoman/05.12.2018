#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <cmath>

using namespace std;

bool isEven(int a)
{
	return (a < 0);
}
void main() {
	/*int size = 10;
	int y = 1;

	vector<vector<int>> arr(size);
	for_each(begin(arr), end(arr), [size, &y](auto&i) {
		i.resize(size);
		int x = 1;
		generate_n(begin(i), size, [&x, &y]() {

			return y * x++;
		});

		ostream_iterator<int> os(cout, "\t");
		copy(begin(i), end(i), os);

		y++;
		cout << endl;
	});*/

	/*srand(time(NULL));

	int size = 100;

	vector<int> v(size);
	generate_n(begin(v), v.size(), []() {
		return rand() % 1000;
	});

	sort(begin(v), end(v));

	copy(begin(v), end(v), ostream_iterator<int>(cout, "\n"));*/

	srand(time(NULL));
	int size = 10;
	vector<double>	v(size);

	generate_n(begin(v), v.size(), []() {
		return  rand() % 100 - 50;
	});

	

	copy(begin(v), end(v), ostream_iterator<double>(cout, " "));
	cout << endl;

	//cout << res;
	
	//1.
	/*
	double x = v.front();
	double y = v.back();
	double res = sqrt(x*1. * y*1.);

	for_each(begin(v), end(v), [&res](auto&i) {	
		i += res;	
	});

	cout << "1. ";
	copy(begin(v), end(v), ostream_iterator<double>(cout, " "));*/
	
	//2.

	/*double z = v[5];
	res = 0;
	for_each(begin(v), end(v), [&res](auto&i) {
		if (i < 0 && res == 0) {
			res = i ;
		}

	});
	cout << endl;
	res += v[5];
	cout << res << endl;

	for_each(begin(v), end(v), [&res](auto&i) {
		i /= res;
	});
	cout << endl;
	cout << "2. ";
	copy(begin(v), end(v), ostream_iterator<double>(cout, " "));*/

	double sr = 0;

	for_each(begin(v), end(v), [&sr](auto&i) {
		sr += i;
	});

	sr = sr / 10.;
	cout << endl << "Sr = " << sr << endl;;
	for_each(begin(v), end(v), [&sr](auto&i) {
		if ((int)i % 2 != 0) i /= sr;
	});

	copy(begin(v), end(v), ostream_iterator<double>(cout, " "));

	system("pause");
}