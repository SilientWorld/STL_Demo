//#include <iostream>
//#include <set>
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
//	}
//};
//class comparePerson
//{
//public:
//	bool operator()(const person& p1,const person& p2)const
//	{
//		return p1.year > p2.year;
//	}
//};
//void test01()
//{
//	set<person,comparePerson>s;//�Զ���������set����Ҫ��ǰʹ�÷º���
//	person p1("����", 20);
//	person p2("����", 10);
//	person p3("����", 50);
//	person p4("����", 40);
//	person p5("���", 30);
//	s.insert(p1);
//	s.insert(p2);
//	s.insert(p3);
//	s.insert(p4);
//	s.insert(p5);
//	for (set<person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
//		cout << "������" << it->name << " " << "���䣺" << it->year << endl ;
//	cout << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}