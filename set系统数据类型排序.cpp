//#include <iostream>
//#include <set>
//using namespace std;
//class mycompare//仿函数
//{
//public:
//	bool operator()(int v1,int v2)const
//	{
//		return v1 > v2;
//	}
//};
//void test01()
//{
//	set<int>s;//默认从小到大排序
//	s.insert(10);
//	s.insert(30);
//	s.insert(50); 
//	s.insert(20);
//	s.insert(40);
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//	set<int,mycompare>s1;//要在插入前进行仿函数，从大到小排序
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(50);
//	s1.insert(20);
//	s1.insert(40);
//	for (set<int,mycompare>::iterator i = s1.begin(); i != s1.end(); i++)
//		cout << *i << " ";
//	cout << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}