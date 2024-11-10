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
//	m.insert(pair<int, int>(1, 89));//插入操作
//	m.insert(pair<int, int>(3, 84));
//	m.insert(pair<int, int>(2, 67));
//	m.insert(pair<int, int>(4, 45));
//	show(m);
//	cout << m[4] << endl;//可以用[]来进行访问元素，[]里面写序号
//	m.erase(++m.begin());//删除第二个元素
//	show(m);
//	m.erase(3);//删除特定元素，括号内填序号
//	show(m);
//	m.clear();//清空
//	show(m);
//}
//int main()
//{
//	test01();
//	return 0;
//}