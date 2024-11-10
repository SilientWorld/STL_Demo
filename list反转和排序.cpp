//#include <iostream>
//#include <list>
//using namespace std;
//void show(list<int>& l)
//{
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//bool compare(int v1, int v2)
//{
//	return v1 > v2;
//}
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(30);
//	L1.push_back(40);
//	L1.push_back(20);
//	L1.push_back(50);
//	cout << "反转前：" << endl;
//	show(L1);
//	cout << "反转后：" << endl;
//	L1.reverse();//前后翻转
//	show(L1);
//	cout << "从小到大排序：" << endl;
//	L1.sort();//默认排序，从小到大
//	show(L1);
//	cout << "从大到小排序：" << endl;
//	L1.sort(compare);//需要写一个函数来变成从大到小
//	show(L1);
//}
//int main()
//{
//	test01();
//	return 0;
//}