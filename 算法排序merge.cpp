//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void print(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v1;
//	vector<int>v2;//两个容器的数据必须同向有序
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//	cout << "v1的数据：" << endl;
//	for_each(v1.begin(), v1.end(), print);
//	for (int j = 10; j < 20; j++)
//		v2.push_back(j);
//	cout << endl;
//	cout << "v2的数据：" << endl;
//	for_each(v2.begin(), v2.end(), print);
//	vector<int>v3;//目标容器
//	v3.resize(v1.size()+v2.size());//需要提前分配空间
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());//两个同向有序的容器合到一个容器
//	cout << endl;
//	cout << "合并后：" << endl;
//	for_each(v3.begin(), v3.end(), print);//输出的也是同向有序的数列
//}
//int main()
//{
//	test01();
//	return 0;
//}