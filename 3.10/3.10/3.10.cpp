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
	//Ҫ��ȡ�ļ��ĺ�׺��
	size_t pos = file.find('.');
	size_t pos = file.rfind('.');//������
	if (pos != string::npos)//npos�� c++�б�ʾһ����������ʾ�����ڵ�λ�ã�����һ����std::container_type::size_type����ֵһ��Ϊ - 1.
	{
		//string su = file.substr(pos, file.size() - pos);//\0��λ�� - '.'��λ��,���Ǻ�׺�ĳ��� 
		string su = file.substr(pos);//Ĭ��ȡ����β
		cout << suffix << endl;
	}
	//http
	string url("https://gitee.com/bithange/class_code");
	size_t pos1 = url.find(':');//ð�ŵ�λ��
	string protocol = url.substr(0, pos1 - 0);//����ҿ����ð��ǰ�ĳ��ȣ�ð�Ŵ�-����ĸ��

	//������gitee.com
	size_t pos2 = url.find('/', pos1 + 3);//������/��λ��
	string dd = url.substr(pos1 + 3, pos2 - (pos1 + 3));//��g��ʼ��������/��λ��-g��λ�õĳ���

	string cc = url.substr(pos2 + 1);//bithange/class_code



}
void t5()
{
	string s("hh");

	s.push_back('a');
	//ͷ�壬Ч�ʵ�
	s.insert(0, 1, 'x');//��ͷ����һ���ַ�
	s.insert(s.begin(), 'y');
	s.insert(0, "ja99");
	//�м�λ�ò���
	s.insert(4, "ja99");

	s.erase(0,1);//ͷɾ������ͷɾ���в�ɾ
	s.erase(s.size() - 1, 1);//βɾ
	s.erase(3);//�����3ɾ��

}
int main()
{
	//string s1("111");
	//string s2("222");
	//string s3(s2);
	//string s4(s2, 1, 3);
	//s2.clear();
	//s1.operator[](1);
	//s1.push_back('a');//�ַ�����
	//s1.append("aa");//β��

}
