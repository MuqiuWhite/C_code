#include <iostream>
using namespace std;
void t1()
{
	string t1("ja99");
	for (size_t i = 0; i < t1.size(); ++i)
	{
		t1[i]++;
		cout << t1[i];
	}

	string::const_iterator it = t1.begin();
	while (it != t1.end())
	{
		cout << *it << " ";
		++it;
	}
	cout << endl;

	for (auto e : t1)
	{
		cout << e << endl;
	}
	string t1("ja99");
	string::reverse_iterator a = t1.rbegin();
	while (a != t1.rend())
	{
		cout << *a << endl;
	}
	string cs("ja99ja");
	func(cs);
}
void func(const string aa)
{

}
void T()
{
	string s;
	size_t sz = s.capacity();

}
void T1()
{
	string s1;
	s1.reserve(100);
	string s2;
	s2.resize(100,'a');
	cout << s1.c_str() << endl;
	string file("ee");
	FILE* fout = fopen(file.c_str(), "w");
	//要求取文件的后缀名
	size_t pos = file.find('.');
	size_t pos = file.rfind('.');//倒着找
	if (pos != string::npos)//npos在 c++中表示一个常数，表示不存在的位置，类型一般是std::container_type::size_type。其值一般为 - 1.
	{
		//string su = file.substr(pos, file.size() - pos);//\0的位置 - '.'的位置,就是后缀的长度 
		string su = file.substr(pos);//默认取到结尾
		cout << suffix << endl;
	}
	//http
	string url("https://gitee.com/bithange/class_code");
	size_t pos1 = url.find(':');//冒号的位置
	string protocol = url.substr(0, pos1 - 0);//左闭右开求出冒号前的长度，冒号处-首字母处

	//求域名gitee.com
	size_t pos2 = url.find('/', pos1 + 3);//第三个/的位置
	string dd = url.substr(pos1 + 3, pos2 - (pos1 + 3));//从g开始，第三个/的位置-g的位置的长度

	string cc = url.substr(pos2 + 1);//bithange/class_code



}
void t5()
{
	string s("hh");

	s.push_back('a');
	//头插，效率低
	s.insert(0, 1, 'x');//从头插入一个字符
	s.insert(s.begin(), 'y');
	s.insert(0, "ja99");
	//中间位置插入
	s.insert(4, "ja99");

	s.erase(0,1);//头删，少用头删和中部删
	s.erase(s.size() - 1, 1);//尾删
	s.erase(3);//从序号3删完

}
int main()
{
	//string s1("111");
	//string s2("222");
	//string s3(s2);
	//string s4(s2, 1, 3);
	//s2.clear();
	//s1.operator[](1);
	//s1.push_back('a');//字符插入
	//s1.append("aa");//尾插

}
