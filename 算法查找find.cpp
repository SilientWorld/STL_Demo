//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	vector<int>::iterator it = find(v.begin(), v.end(), 6);//���ص��ǵ�����
//	if (it == v.end())
//		cout << "û���ҵ���" << endl;
//	else cout << "���ҵ���" << *it << endl;
//}
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
//	bool operator==(const person& p)//����==���û���֪����ô�Ƚϼ���person
//    {
//		if (this->name == p.name && this->age == p.age)
//			return true;
//		else return false;
//    }
//};
//
//void test02()
//{   
//	vector<person>v1;
//	person p1("����", 20);
//	person p2("����", 10);
//	person p3("����", 50);
//	person p4("����", 40);
//	person p5("���", 30);
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//	vector<person>::iterator it = find(v1.begin(), v1.end(), p1);
//	if (it == v1.end())
//		cout << "δ�ҵ���" << endl;
//	else
//		cout << "���ҵ���" << "������" << it->name << " " << "���䣺" << it->age << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}