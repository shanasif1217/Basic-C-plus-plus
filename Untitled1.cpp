#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter number:" << endl;
	cin >> num;
	cout << "Here is your pattern:" << endl;
	for (int i = num; i > 0; i--) {
		for (int j = i; j > 0; j--)
		{

			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
