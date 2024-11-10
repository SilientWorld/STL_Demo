//#include <iostream>
//#include <set>//set和multiset都可以用
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
//	set<int>s1(s);//拷贝构造函数
//	show(s1);
//	set<int>s2 = s1;//赋值“=”操作
//	show(s2);
//}
//void showprint(multiset<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test02()
//{
//	multiset<int>m;//没有push_back，push_front等等插入数据的操作，只有insert
//	m.insert(10);
//	m.insert(40);
//	m.insert(60);
//	m.insert(20);
//	m.insert(30);
//	m.insert(10);
//	showprint(m);//自动从小到大排序，同时multiset允许有重复的元素
//	multiset<int>m1(m);//拷贝构造函数
//	showprint(m1);
//	multiset<int>m2 = m1;//赋值“=”操作
//	showprint(m2);
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}