#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <cmath>

using namespace std;

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

	double x = v.front();
	double y = v.back();
	double res = sqrt(x*1. * y*1.);
	cout << res;
	
	copy(begin(v), end(v), ostream_iterator<double>(cout, " "));

	cout << endl;

	for_each(begin(v), end(v), [&res](auto&i) {	
		i += res;
	});

	copy(begin(v), end(v), ostream_iterator<double>(cout, " ")); 



	system("pause");
}