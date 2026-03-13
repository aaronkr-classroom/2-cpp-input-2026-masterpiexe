#include<iostream>
int main()
{
	using std::cout;
	using std::endl;

	int i = 11;
	while (1)
	{
		i -= 1;
		cout << i << endl;
		if (i == -5)
			break;
	}
	return 0;
}