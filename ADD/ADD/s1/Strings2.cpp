#include <iostream>
#include <string>
using namespace std;
int main()
{
	string str = "Hello World";

	string c = "JAVA";
	cout << b;
	//cout << str << endl;
	//str.resize(20, ' ');//双参填充后者
	//str.resize(20);//单参数不填充
	//b.append(c, 0, 2);//第二参是索引，第三参是字符串数
	//b.assign(c, 0, 2);//第二参是索引，第三参是字符串数
	//b.insert(0, c, 0, 2);//一参b索引，三参c索引，四参插入长度
	string b = "JAVAC++JAVA";	
	b.erase(0, 2);//清除
	cout << b;
	string num = "2020";
	int year = atoi(num.c_str());//c_str.string输出字符数组
	int found = b.rfind(c);//找第二个c
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