//#include <iostream>
//#include <list>
//using namespace std;
//void show(list<int>& l)
//{
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
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
//	if (l.empty())//判断是否为空
//		cout << "list为空！" << endl;
//	else
//	{
//		cout << "list不为空！" << endl;
//		cout << "l的大小：" << l.size() << endl;
//	}
//	l.resize(10);//重新设置大小，多余为0，少的删除
//	show(l);
//	l.resize(2);
//	show(l);
//}
//int main()
//{
//	test01();
//	return 0;
//}