//#include <iostream>
//#include <map>
//using namespace std;
//void show(map<int, int>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//		cout << "序号：" << it->first << " " << "值：" << it->second << endl;
//	cout << endl;
//}
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 89));
//	m.insert(pair<int, int>(3, 84));
//	m.insert(pair<int, int>(2, 67));
//	m.insert(pair<int, int>(4, 45));
//	if (m.empty())
//		cout << "map为空！" << endl;
//	else
//	{
//		cout << "map不为空！" << endl;
//		cout << "大小：" << m.size() << endl;
//	}
//	map<int, int>m1;
//	m1.insert(pair<int, int>(1, 79));
//	m1.insert(pair<int, int>(3, 34));
//	m1.insert(pair<int, int>(2, 57));
//	m1.insert(pair<int, int>(4, 85));
//	cout << "交换前：" << endl;
//	show(m);
//	show(m1);
//	cout << "交换后：" << endl;
//	m.swap(m1);
//	show(m);
//	show(m1);
//}
//int main()
//{
//	test01();
//	return 0;
//}