//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void print(int val)
//{
//	cout << val << " ";
//}
//class greater20
//{
//public:
//	bool operator()(int val)
//	{
//		return val <= 20;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(50);
//	cout << "替换前：" << endl;
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//	replace_if(v.begin(), v.end(),greater20(), 100);// //replace_if通常用来找大于或小于，replace找等于
//	cout << "替换后：" << endl;
//	for_each(v.begin(), v.end(), print);
//}
//int main()
//{
//	test01();
//	return 0;
//}