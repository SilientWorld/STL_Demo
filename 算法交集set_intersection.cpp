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
//	vector<int>v;
//	vector<int>v1;//两个容器必须是同向升序的
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	cout << "v的元素：" << endl;
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//	for (int j = 5; j < 15; j++)
//		v1.push_back(j);
//	cout << "v1的元素：" << endl;
//	for_each(v1.begin(), v1.end(), print);
//	cout << endl;
//	vector<int>v2;//目标交集的容器
//	v2.resize(min(v.size(), v1.size()));//交集取v和v1中最小的
//	vector<int>::iterator it = set_intersection(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
//	cout << "交集：" << endl;
//	for_each(v2.begin(), v2.end(), print);//这样写会多后面的0
//	cout << endl;
//	for_each(v2.begin(), it, print);//这样写显示出的就是交集
//}
//int main()
//{
//	test01();
//	return 0;
//}