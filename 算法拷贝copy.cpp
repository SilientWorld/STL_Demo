//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void print(int val)
//{
//	cout << val << " ";
//}
//void test01()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//	vector<int>v2;
//	v2 = v;//"="赋值进行拷贝，用这个多
//	for_each(v2.begin(), v2.end(), print);
//	cout << endl;
//	vector<int>v3;
//	v3.resize(v2.size());
//	copy(v2.begin(), v2.end(), v3.begin());//copy进行拷贝，用的少，且较麻烦
//	for_each(v3.begin(), v3.end(), print);
//}
//int main()
//{
//	test01();
//	return 0;
//}