#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str = "Hello World";

	string c = "JAVA";
	cout << b;
	//cout << str << endl;
	//str.resize(20, ' ');//˫��������
	//str.resize(20);//�����������
	//b.append(c, 0, 2);//�ڶ��������������������ַ�����
	//b.assign(c, 0, 2);//�ڶ��������������������ַ�����
	//b.insert(0, c, 0, 2);//һ��b����������c�������Ĳβ��볤��
	string b = "JAVAC++JAVA";	
	b.erase(0, 2);//���
	cout << b;
	string num = "2020";
	int year = atoi(num.c_str());//c_str.string����ַ�����
	int found = b.rfind(c);//�ҵڶ���c
	if (found == string::npos)
		cout << "error";
	//find_first_of(),find_last_of(),find_first_not_of,find_last_not_of
	else cout << found;
	string d = b.substr(6,2);
	string a;
	getline(cin,a);
	cout << a;
	return 0;
}