//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class change
//{
//public:
//	int operator()(int val)
//	{
//		return val+100;
//	}
//};
//void print(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	vector<int>v1;
//	v1.resize(v.size());//重新设置空间来转移数据
//	transform(v.begin(), v.end(), v1.begin(), change());
//	for_each(v1.begin(), v1.end(), print);
//}
//int main()
//{
//	test01();
//	return 0;
//}