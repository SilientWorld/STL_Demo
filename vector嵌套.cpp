//#include <iostream>
//#include <vector>
//using namespace std;
//void test01()
//{
//	vector<vector<int>>v;//双层嵌套，大容器
//	vector<int>v1;//小容器
//	vector<int>v2;
//	vector<int>v3;
//	vector<int>v4;
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);//小容器存储数据
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//	v.push_back(v1);//将小容器插入大容器
//	v.push_back(v2);
//	v.push_back(v2);
//	v.push_back(v4);
//	for (vector<vector<int>>::iterator j = v.begin(); j != v.end(); j++)
//	{//双重循环
//		for (vector<int>::iterator h = (*j).begin(); h != (*j).end(); h++)
//			cout<<*h<<" ";
//		cout << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}