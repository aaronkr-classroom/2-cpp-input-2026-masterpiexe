#include<iostream>
#include<string>
int main()
{
	using std::cout;
	using std::endl;
	using std::cin;
	int a, b;
	cout << "enter two numbers." << endl;
	cin >> a;
	cin >> b;
	if (a > b)
		cout << a << " is bigger" << endl;
	else if (a < b)
		cout << b << " is bigger" << endl;
	else
		cout << "they are the same" << endl;

	return 0;

}