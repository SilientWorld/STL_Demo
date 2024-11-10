//#include <iostream>
//#include <map>//map不允许有重复序号，multimap允许有重复序号
//using namespace std;
//void show(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//		cout << "序号：" << it->first << " 值：" << it->second << endl;
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 10));//根据序号来自动排序
//	m.insert(pair<int, int>(2, 30));//和set一样只有insert插入
//	m.insert(pair<int, int>(4, 20));
//	m.insert(pair<int, int>(3, 40));
//	show(m);
//	map<int, int>m1(m); 
//	show(m1);
//	map<int, int>m2;
//	m2 = m1;
//	show(m2);
//}
//int main()
//{
//	test01();
//	return 0;
//}