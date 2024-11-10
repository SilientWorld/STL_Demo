//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//void test01()
//{
//	vector<int>v;
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(4);
//	v.push_back(4);
//	v.push_back(1);
//	int num = count(v.begin(), v.end(), 4);
//	cout << "4的个数：" << num << endl;
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
//	bool operator == (const person & p3)
//	{
//		if (this->age == p3.age)
//			return true;
//		else
//			return false;
//	}
//};
//void test02()
//{
//	vector<person>v1;
//	person p1("张三", 20);
//	person p2("李四", 40);
//	person p3("王五", 40);
//	person p4("赵六", 40);		
//	person p5("李二", 30);
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//	int num = count(v1.begin(), v1.end(), p3);
//	cout << "40岁的人有：" << num << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}