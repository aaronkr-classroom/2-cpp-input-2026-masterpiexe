#include<iostream>
int main()
{
	using std::cout;
	using std::endl;
	int i = 1;
	for (int k = 1; k < 10; k++)
	{
		i *= k;
	}
	cout << i << endl;

	return 0;
}