//#include <iostream>
//#include <vector>
//using namespace std;
//void test01(vector<int>&v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//		cout << " " << *it ;
//	cout << endl;
//}
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	test01(v);
//	if (v.empty())
//		cout << "vΪ�գ�" << endl;
//	else
//	{
//		cout << "v��Ϊ�գ�" << endl;
//		cout << "v������Ϊ��" << v.capacity() << endl;
//		cout << "v�Ĵ�С�ǣ�" << v.size() << endl;
//	}
//	v.resize(15);//��չ�����������Ĳ���Ϊ0
//	test01(v);
//	v.resize(5);//��С��������ɾ�����Ԫ��
//	test01(v);
//}
//int main()
//{
//	test02();
//	return 0;
//}