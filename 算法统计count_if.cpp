//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//bool greater20(int val)
//{
//	return val > 10;
//}
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(20);
//	v.push_back(10);
//	int num = count_if(v.begin(), v.end(), greater20);
//	cout << "大于10的数有：" << num << endl;
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
//};
//class greater30
//{
//public:
//	bool operator()(person&p)
//	{
//		return p.age > 30;
//    }
//};
//void test02()
//{
//	vector<person>v1;
//	person p1("张三", 20);
//	person p2("李四", 40);
//	person p3("王五", 50);
//	person p4("赵六", 40);		
//	person p5("李二", 30);
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//	int num = count_if(v1.begin(), v1.end(), greater30());
//	cout << "大于30的数有：" << num << endl;
//}//count_if通常用来找大于或小于，count找等于
//int main()
//{
//	test01();
//	return 0;
//}