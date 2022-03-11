#include <iostream>
using namespace std;
class string
{
public:
	/*string(const string & a)
	:str(new chat[strlen(s) + 1]
	{
						strcpy(a,str);
	}*/
	//s1=s3
	string& operator=(const string& s)
	{
		if (this != &s)
		{
			char* tmp = new char[strlen(s._str) + 1];//字符串
			strcpy(tmp, s._str);
			delete[]_str;
			_str = tmp;
		}	
		return*this;
	}
	string()
		:_size(0)
		,_capacity(13)
	{
		
	}
	string(const char* str="")
		:_size(strlen(str))
		,_capacity(_size)
	{
		_str = new char[_capacity + 1];
		strcpy(_str, str);
	}
	
	char& operator[](size_t pos)
	{

	}
	void f(const string& s)
	{

	}
	typedef char* aa;
	aa begin()
	{
		return _str;
	}
	aa end()
	{
		return _str + _size;
	}
	void t1(const string& s)
	{
		string s1("ja");
		string::aa it = s1.begin();

		while (it != s1.end())
		{
			*it + -1; 
			++it;
		}
		it = s1.begin();
		while (it != s1.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		/*for (auto wq :s1)
		{
			cout << wq << " ";
			cout << wq << ;
		}]*/
	}

	void push_back(char ch)
	{}
	string(const string& s)
		:_str(nullptr)
	{
		string tmp(s._str);
		swap(_str, tmp._str);
	}

	~string()
	{
		delete[] _str;
		_str = nullptr;
	}
private:
	char* _str;
	size_t _size;
	size_t _capacity;//有效字符空间数
	/*attend (string s)const
	{}*/

};
int main()
{
	/*;
	a1 = a3;*///a1指向a3的空间，a1原本的空间也没被释放 
	
	
	
}
