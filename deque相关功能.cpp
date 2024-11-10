//#include <iostream>
//#include <deque>
//#include <algorithm>
//using namespace std;
//void show(deque<int>& d)
//{//输出操作
//	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_front(i);//前端插入
//	show(d1);
//	deque<int>d2;
//	for (int i = 0; i<10;i++)
//		d2.push_back(i);//后端插入
//	show(d2);
//	deque<int>d3(d1.begin(), d1.end());//区间内的数输出
//	show(d3);
//	deque<int>d4(2, 10);//输出2个10
//	show(d4);
//	deque<int>d5(d4);//拷贝构造
//	show(d5);
//	d1.pop_front();//前端删除
//	show(d1);
//	d1.pop_back();//后端删除
//	show(d1);
//	deque<int>d6;
//	d6 = d1;//“=”赋值操作
//	show(d6);
//	d6.assign(d3.begin(), d3.end());//区间内赋值
//	show(d6);
//	d6.assign(10, 100);
//	show(d6);//输出10个100
//}
//void test02()
//{
//	deque<int>v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	if (v.empty())//查看是否为空
//		cout << "v为空！" << endl;
//	else
//	{
//		cout << "v不为空！" << endl;
//		cout << "v的大小：" << v.size() << endl;//查看大小，deque没有capacity
//	}
//	v.resize(15);//重新设置大小，设置大的用0补足
//	show(v);
//	v.resize(5);//重新设置大小，设置小的将多余的删除
//	show(v);
//}
//void test03()
//{
//	deque<int>v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	show(v1);
//	v1.insert(v1.begin(), 100);//头部插入一个100
//	show(v1);
//	v1.insert(v1.begin(), 2, 300);//头部插入2个300
//	show(v1);
//	v1.insert(v1.end() - 1, 400);//倒数第二个位置插入400
//	show(v1);
//	v1.erase(v1.begin());//删除第一个元素
//	show(v1);
//	v1.erase(v1.begin(), v1.end()-1);//删除从第一个到倒数第二个元素
//	show(v1);
//	v1.clear();//清空
//	show(v1);
//}
//void test04()
//{
//	deque<int>h;
//	for (int i = 0; i < 10; i++)
//		h.push_back(i);
//	show(h);
//	cout << "第二个元素：" << h[1] << endl;
//	cout << "第一个元素：" << h.front() << endl;//存第一个元素
//	cout << "最后一个元素：" << h.back() << endl;//存最后一个元素
//}
//void test05()
//{
//	deque<int>w;
//	w.push_back(10);
//	w.push_back(20);
//	w.push_back(3);
//	w.push_front(24);
//	w.push_front(14);
//	w.push_front(7);
//	cout << "排序前：";
//	show(w);
//	cout << "排序后：";
//	sort(w.begin(), w.end());//默认升序，要包含<algorithm>头文件,vector有sort
//	show(w);
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	test04();
//	test05();
//	return 0;
//}