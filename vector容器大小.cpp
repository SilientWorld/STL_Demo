//#include <iostream>
//#include <vector>
//using namespace std;
//void test01(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//		cout << " " << *it ;
//	cout << endl;
//}
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	test01(v);
//	if (v.empty())
//		cout << "v为空！" << endl;
//	else
//	{
//		cout << "v不为空！" << endl;
//		cout << "v的容器为：" << v.capacity() << endl;
//		cout << "v的大小是：" << v.size() << endl;
//	}
//	v.resize(15);//拓展大的容器，多的部分为0
//	test01(v);
//	v.resize(5);//缩小容器，并删除多的元素
//	test01(v);
//}
//int main()
//{
//	test02();
//	return 0;
//}