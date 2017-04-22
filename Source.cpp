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

/*
#include <iostream>       // std::cout
#include <stack>          // std::stack
#include <vector>         // std::vector
#include <deque>          // std::deque

int main ()
{
  std::deque<int> mydeque (3,100);          // deque with 3 elements
  std::vector<int> myvector (2,200);        // vector with 2 elements

  std::stack<int> first;                    // empty stack
  std::stack<int> second (mydeque);         // stack initialized to copy of deque

  std::stack<int,std::vector<int> > third;  // empty stack using vector
  std::stack<int,std::vector<int> > fourth (myvector);

  std::cout << "size of first: " << first.size() << '\n';
  std::cout << "size of second: " << second.size() << '\n';
  std::cout << "size of third: " << third.size() << '\n';
  std::cout << "size of fourth: " << fourth.size() << '\n';

  return 0;
}
*/
