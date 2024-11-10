//#include <iostream>
//#include <list>
//using namespace std;
//void show(list<int>&l)//输出
//{
//	for (list<int>::iterator it = l.begin(); it != l.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test01()
//{
//	list<int>v;
//	v.push_back(10);//尾插
//	v.push_back(20);
//	v.push_back(30);
//	v.push_front(100);//前插
//	v.push_front(200);
//	v.push_front(300);
//	show(v);
//	v.pop_back();//尾删
//	show(v);
//	v.pop_front();//前删
//	show(v);
//	v.insert(v.begin(), 1000);//前加1000
//	show(v);
//	v.erase(v.begin());//删掉1000
//	show(v);
//	v.remove(100);//清除100，不管有几个
//	show(v);
//	v.clear();//清空
//	show(v);
//}
//int main()
//{
//	test01();
//	return 0;
//}