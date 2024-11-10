//#include <iostream>
//#include <map>
//using namespace std;
//class compare
//{
//public:
//	bool operator()(int v1, int v2)const
//	{
//		return v1 > v2;
//	}
//
//};
//void show(map<int, int, compare>& m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//		cout << "序号：" << it->first << " " << "值：" << it->second << endl;
//	cout << endl;
//}
//void test01()
//{
//	map<int, int, compare>m;//根据序号来从大到小来排序，不是值
//	m.insert(pair<int, int>(1, 20));
//	m.insert(pair<int, int>(3, 40));
//	m.insert(pair<int, int>(4, 10));
//	m.insert(pair<int, int>(2, 30));
//	show(m);
//}
//int main()
//{
//	test01();
//	return 0;
//}