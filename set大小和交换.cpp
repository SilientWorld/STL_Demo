//#include <iostream>
//#include <set>
//using namespace std;
//void show(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test01()
//{
//	set<int>s;
//	s.insert(10);//没有push_back，push_front等等插入数据的操作，只有insert
//	s.insert(40);
//	s.insert(60);
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	show(s);//自动从小到大排序，同时set不允许有重复的元素
//	if (s.empty())
//		cout << "set为空！" << endl;
//	else
//	{
//		cout << "set不为空！" << endl;
//		cout << "set的大小：" << s.size() << endl;
//	}
//	set<int>a;
//	a.insert(40);
//	a.insert(60);
//	a.insert(20);
//	a.insert(30);
//	show(a);
//	cout << "交换前：" << endl;
//	show(s);
//	show(a);
//	cout << "交换后：" << endl;
//	s.swap(a);
//	show(s);
//	show(a);
//}
//int main()
//{
//	test01();
//	return 0;
//}