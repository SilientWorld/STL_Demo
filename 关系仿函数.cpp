//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <functional>
///*等于：equal_to<>()
//* 大于：greater<>()
//* 大于等于：greater_equal<>()
//* 小于：less<>()
//* 小于等于：less_equal<>()
//* 不等于：no_equal<>()
//*/
//using namespace std;
//void show(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//		cout << *it << " " ;
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//	cout << "排序前：" << endl;
//	show(v);
//	cout << "排序后：" << endl;
//	sort(v.begin(), v.end(), greater<int>());//大于
//	show(v);
//}
//int main()
//{
//	test01();
//	return 0;
//}