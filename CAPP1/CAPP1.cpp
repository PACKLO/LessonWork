#include <iostream>

using namespace std;

int main()
{
	int x = 0;
	setlocale(LC_ALL, "Russian");
	for (;;)
	{
		cout << x << endl;
		x++;
	}
	return 0;
}