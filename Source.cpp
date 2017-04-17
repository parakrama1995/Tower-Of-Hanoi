#include <iostream>
#include <stack>>
#include <time.h>
#include <string>
#include <hash_map>
#include <math.h>
#include <vector>
#include <algorithm>
#include <functional>


using namespace std;

void poles(int, int, int, int);

int main()
{
	int num = 5;
	poles(num, 1, 2, 3);
	system("pause>nul");
	return 0;
}
void poles(int num, int frompole, int topole, int secpole)
{
	if (num == 1)
	{
		cout << "n Move disk 1 from pole " << frompole << " to pole " << topole;
		return;
	}
	poles(num - 1, frompole, secpole, topole);
	cout << "\n Move disk " << num << " from pole " << frompole << " to pole " << topole;
	poles(num - 1, secpole, topole, frompole);
}