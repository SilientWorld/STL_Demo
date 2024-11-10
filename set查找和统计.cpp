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
//	s.insert(40);//没有push_back，push_front等等插入数据的操作，只有insert
//	s.insert(60);
//	s.insert(20);
//	s.insert(30);
//	s.insert(20);
//	show(s);
//	set<int>::iterator pos = s.find(300);
//	if (pos != s.end())
//		cout << "找到了该元素:" << *pos << endl;
//	else
//		cout << "未找到该元素！" << endl;
//	int num = s.count(20);
//	cout << "统计个数：" << num << endl;//set统计个数只有1或0，multiset可以是大于1的
//}                                       //set不允许有重复的元素，multiset可以有重复的元素
//int main()
//{
//	test01();
//	return 0;
//}