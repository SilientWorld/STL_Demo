//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void print(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);//push_back：尾插
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	print(v);
//	v.pop_back();//pop_back:尾删
//	print(v);
//	v.insert(v.begin(), 100);//头部插入一个100
//	print(v);
//	v.insert(v.end(), 60);//尾部插入一个60
//	print(v);
//	v.insert(v.begin() + 1, 200);//第二个位置插入200
//	print(v);
//	v.insert(v.end() - 1, 70);//倒数第二个位置插入70
//	print(v);
//	v.erase(v.begin() + 2, v.end() - 2);//第三个位置和倒数第三个位置之间的删除
//	print(v);
//	v.insert(v.begin(), 2, 300);//头部插入2个300
//	print(v);
//	v.clear();//清空
//	print(v);
//}
//int main()
//{
//	test01();
//	return 0;
//}