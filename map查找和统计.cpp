//#include <iostream>
//#include <map>
//using namespace std;
//void test01()
//{
//	map<int, int>m;
//	m.insert(pair<int, int>(1, 89));
//	m.insert(pair<int, int>(3, 84));
//	m.insert(pair<int, int>(2, 67));
//	m.insert(pair<int, int>(4, 45));
//	map<int, int>::iterator pos = m.find(3);//查找，和set一样，find返回的是迭代器
//	if (pos != m.end())
//		cout << "找到该元素！序号：" << pos->first << " " << "值：" << pos->second << endl;
//	else
//		cout << "未找到该元素！" << endl;
//	int num = m.count(2);//统计
//	cout << "num=" << num<<endl;//num的值只有0或1，map不允许有重复序号，multimap允许有重复序号
//}
//int main()
//{
//	test01();
//	return 0;
//}