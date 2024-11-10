//#include <iostream>
//#include <list>
//#include <string>
//using namespace std;
//class person
//{
//public:
//	string name;
//	int age;
//	person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//};
//void show(list<person>& l)
//{
//	for (list<person>::iterator it = l.begin(); it != l.end(); it++)
//		cout << "姓名：" << it->name << " " << "年龄：" << it->age << endl;
//}
//void test01()
//{
//	person p1("孙悟空", 100);
//	person p2("唐僧", 90);
//	person p3("猪八戒", 80);
//	person p4("沙僧", 70);
//	list<person>p;//默认构造
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	p.push_back(p4);
//	show(p);
//	list<person>a(p.begin(), p.end());//区间访问
//	show(a);
//	list<person>b(a);//拷贝构造
//	show(b);
//}
//int main()
//{
//	test01();
//	return 0;
//}