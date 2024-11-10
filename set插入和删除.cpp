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
//	show(s);
//	s.erase(s.begin());//删除第一个元素
//	show(s);
//	s.erase(40);//可以规定删除特定元素，和list的remove类似
//	show(s);
//	cout << "清空后：";
//	s.clear();//和s.erase(s.begin(),s.end())功能相似
//	show(s);
//}
//int main()
//{
//	test01();
//	return 0;
//}