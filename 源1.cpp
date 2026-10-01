#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b;
	c = a % b;
	if (c==0)
	{
		cout << "最大公约数为:"	<< c << endl;
	}
	else {
		c = b % c;
	}
	cout << "最大公约数为:" << c << endl;
	return 0;
}