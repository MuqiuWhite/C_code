#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void t1()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	while (!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
}
void t2()
{
	queue<int>s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	while (!s.empty())
	{
		cout << s.front() << endl;
		s.pop();
	}
}

int main()
{
	t2();
}