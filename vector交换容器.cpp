//#include <iostream>
//#include <vector>
//using namespace std;
//void show(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v;
//	cout << "����ǰ��" << endl;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	show(v);
//	vector<int>v1;
//	for (int i = 10; i > 0; i--)
//		v1.push_back(i);
//	show(v1);
//	v.swap(v1);//v��v1����
//	cout << "������" << endl;
//	show(v);
//	show(v1);
//}
//void test02()
//{
//	vector<int>v2;
//	for (int i = 0; i < 10000; i++)
//	{
//		v2.push_back(i);
//	}
//	cout << "v2��������" << v2.capacity() << endl;
//	cout << "v2�Ĵ�С��" << v2.size() << endl;
//	v2.resize(4);
//	cout << "v2��������" << v2.capacity() << endl;
//	cout << "v2�Ĵ�С��" << v2.size() << endl;
//	vector<int>(v2).swap(v2);//ѹ���ڴ�
//	cout << "v2��������" << v2.capacity() << endl;
//	cout << "v2�Ĵ�С��" << v2.size() << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}