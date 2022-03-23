#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> n;
	
	n.push_back(1);
	n.push_back(2);
	n.push_back(3);
	n.push_back(2);
	n.push_back(2);
	n.push_back(2);
	n.push_back(5);
	n.push_back(4);
	n.push_back(2);
	vector<int>ans(10000);
	if (n.size() <= 1)
		return n.size();
	for (int i = 0; i < n.size(); i++)
	{
		ans[n[i]]++;
		if (ans[n[i]] > n.size() / 2)
			return n[i];
	}

	return 0;


}
