//#include <iostream>
//#include <vector>
//using namespace std;
//void test01(vector<int>v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//		cout << " " << *it;
//	cout << endl;
//}
//void test02()
//{
//	//默认构造函数
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	test01(v);
//
//	//运用区间来构造
//	vector<int>v1(v.begin(), v.end());
//	test01(v);
//	
//	//n个元素来构造
//	vector<int>v2(10, 100);//10个100
//	test01(v2);
//
//	//复制构造函数
//	vector<int>v3(v2);
//	test01(v3);
//
//	//赋值
//	vector<int>v4;
//	v4 = v1;
//	test01(v4);
//}
//int main()
//{
//	test02();
//	return 0;
//}