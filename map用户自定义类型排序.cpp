//#include <iostream>
//#include <map>
//#include <string>
//using namespace std;
//class person
//{
//public:
//	string name;
//	int year;
//	person(string name, int year)
//	{
//		this->name = name;
//		this->year = year;
//    }
//};
//class compare
//{
//public:
//	bool operator()(int v1,int v2)const
//	{
//		return v1>v2;
//	}
//};
//void show(map<int, person, compare>& m)
//{
//	for (map<int, person, compare>::iterator it = m.begin(); it != m.end(); it++)
//		cout << "序号：" << it->first << " " 
//		<< "姓名：" << it->second.name << " "<<"年龄："<<it->second.year<<endl;
//	cout << endl;
//}
//void test01()
//{
//	map<int, person, compare>m;
//	person p1("张三", 20);
//	person p2("李四", 10);
//	person p3("王五", 50);
//	person p4("赵六", 40);
//	person p5("李二", 30);
//	m.insert(pair<int, person>(1, p1));
//	m.insert(pair<int, person>(2, p2));
//	m.insert(pair<int, person>(3, p3));
//	m.insert(pair<int, person>(4, p4));
//	m.insert(pair<int, person>(5, p5));
//	show(m);
//}
//int main()
//{
//	test01();
//	return 0;
//}