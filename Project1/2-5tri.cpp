#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "높이 입력: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
            cout << " ";

        for (int j = 1; j <= 2 * i - 1; j++)
            cout << "*";

        cout << endl;
    }
}
//1 3 5 7 9
//2*i-1개씩 찍기