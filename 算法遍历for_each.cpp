//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void print(int val)
//{
//	cout << val << " ";
//}
//void test02()
//{
//	vector<int>v1;
//	for (int i = 10; i < 20; i++)
//		v1.push_back(i);
//	for_each(v1.begin(), v1.end(), print);
//	cout << endl;
//}
//class Myprint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void test03()
//{
//	vector<int>v2;
//	for (int i = 20; i < 30; i++)
//		v2.push_back(i);
//	for_each(v2.begin(), v2.end(), Myprint());
//	cout << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	return 0;
//}