//#include <iostream>
//#include <list>
//using namespace std;
//void show(const list<int>&l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test01()
//{
//	list<int>l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	l.push_back(40);
//	show(l);
//	list<int>L = l;//"="赋值
//	show(L);
//	list<int>L1;
//	L1.assign(l.begin(), l.end());//区间赋值
//	show(L1);
//	list<int>L2;
//	L2.assign(10, 100);//输出10个100
//	show(L2);
//}
//void test02()
//{
//	list<int>l;
//	cout << "交换前："<<endl;
//	l.push_back(30);
//	l.push_back(40);
//	l.push_back(50);
//	l.push_back(60);
//	show(l);
//	list<int>L;
//	L.assign(10, 20);//输出10个20
//	show(L);
//	cout << "交换后："<<endl;
//	l.swap(L);//交换函数
//	show(l);
//	show(L);
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}