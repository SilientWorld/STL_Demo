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
//		cout << "��ţ�" << it->first << " " 
//		<< "������" << it->second.name << " "<<"���䣺"<<it->second.year<<endl;
//	cout << endl;
//}
//void test01()
//{
//	map<int, person, compare>m;
//	person p1("����", 20);
//	person p2("����", 10);
//	person p3("����", 50);
//	person p4("����", 40);
//	person p5("���", 30);
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