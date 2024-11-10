//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//class person
//{
//public:
//	string name;
//	int year;
//	person(string n, int y)
//	{
//		name = n;
//		year = y;
//	}
//};
//void test01()
//{
//	vector<person>p;
//	person p1("aaa", 10);
//	person p2("bbb", 20);
//	person p3("ccc", 30);
//	person p4("ddd", 40);
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	p.push_back(p4);
//	for (vector<person>::iterator i = p.begin(); i != p.end(); i++)
//		cout << "姓名：" << (*i).name<< " " << "年龄：" << (*i).year << endl;
//}
//void test02()//指针
//{ 
//	vector<person*>p;
//	person p1("eee", 50);
//	person p2("fff", 60);
//	person p3("ggg", 70);
//	person p4("hhh", 80);
//	p.push_back(&p1);
//	p.push_back(&p2);
//	p.push_back(&p3);
//	p.push_back(&p4);
//	for (vector<person*>::iterator i = p.begin(); i != p.end(); i++)
//		cout << "姓名：" << (*i)->name << " " << "年龄：" << (*i)->year << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}