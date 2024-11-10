//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//using namespace std;
//int compare(int val)
//{
//	return val > 6;
//}
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);      //find_if通常用来找大于或小于，find找等于
//	vector<int>::iterator it = find_if(v.begin(), v.end(), compare);//返回的是迭代器
//	if (it == v.end())       //find_if第三个参数是谓词，find的第三个参数是值
//		cout << "没有找到！" << endl;
//	else cout << "已找到！" << *it << endl;
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
//	//bool operator==(const person& p)//重载==，让机器知道怎么比较几个person
// //   {
//	//	if (this->name == p.name && this->age == p.age)
//	//		return true;
//	//	else return false;
// //   }
//};
//class Compare
//{
//public:
//	bool operator()(const person& p)
//	{
//		return p.age > 20;
//	}
//};
//void test02()
//{   
//	vector<person>v1;
//	person p1("张三", 20);
//	person p2("李四", 10);
//	person p3("王五", 50);
//	person p4("赵六", 40);
//	person p5("李二", 30);
//	v1.push_back(p1);
//	v1.push_back(p2);
//	v1.push_back(p3);
//	v1.push_back(p4);
//	v1.push_back(p5);
//	vector<person>::iterator it = find_if(v1.begin(), v1.end(), Compare());
//	if (it == v1.end())
//		cout << "未找到！" << endl;
//	else
//		cout << "已找到！" << "姓名：" << it->name << " " << "年龄：" << it->age << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}