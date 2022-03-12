#include <iostream>
#include <vector>

using namespace std;

class string
{
public:

private:


};
void t1()
{
	vector<int>v1;
	vector<int> v2(10, 8);
	vector<int> v3(v2);
	std::string s("hhhh");
	vector<char> v4(s.begin(), s.end());

}
void t2()
{
	vector<int> v;
	v.push_back(1);
	for (size_t i = 0; i < v.size(); i++)
	{
		v[i] += 1;
	}
	for (auto e : v)
	{
		cout << e << endl;
	}
	v.max_size() ;
	v.reserve(100);
	v.resize(100);
}