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
//		cout << "������" << it->name << " " << "���䣺" << it->age << endl;
//}
//void test01()
//{
//	person p1("�����", 100);
//	person p2("��ɮ", 90);
//	person p3("��˽�", 80);
//	person p4("ɳɮ", 70);
//	list<person>p;//Ĭ�Ϲ���
//	p.push_back(p1);
//	p.push_back(p2);
//	p.push_back(p3);
//	p.push_back(p4);
//	show(p);
//	list<person>a(p.begin(), p.end());//�������
//	show(a);
//	list<person>b(a);//��������
//	show(b);
//}
//int main()
//{
//	test01();
//	return 0;
//}