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
//	vector<int>v1;//��������������ͬ�������
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	cout << "v��Ԫ�أ�" << endl;
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//	for (int j = 5; j < 15; j++)
//		v1.push_back(j);
//	cout << "v1��Ԫ�أ�" << endl;
//	for_each(v1.begin(), v1.end(), print);
//	cout << endl;
//	vector<int>v2;//Ŀ�꽻��������
//	v2.resize(min(v.size(), v1.size()));//����ȡv��v1����С��
//	vector<int>::iterator it = set_intersection(v.begin(), v.end(), v1.begin(), v1.end(), v2.begin());
//	cout << "������" << endl;
//	for_each(v2.begin(), v2.end(), print);//����д�������0
//	cout << endl;
//	for_each(v2.begin(), it, print);//����д��ʾ���ľ��ǽ���
//}
//int main()
//{
//	test01();
//	return 0;
//}