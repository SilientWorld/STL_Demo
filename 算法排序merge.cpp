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
//	vector<int>v1;
//	vector<int>v2;//�������������ݱ���ͬ������
//	for (int i = 0; i < 10; i++)
//		v1.push_back(i);
//	cout << "v1�����ݣ�" << endl;
//	for_each(v1.begin(), v1.end(), print);
//	for (int j = 10; j < 20; j++)
//		v2.push_back(j);
//	cout << endl;
//	cout << "v2�����ݣ�" << endl;
//	for_each(v2.begin(), v2.end(), print);
//	vector<int>v3;//Ŀ������
//	v3.resize(v1.size()+v2.size());//��Ҫ��ǰ����ռ�
//	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());//����ͬ������������ϵ�һ������
//	cout << endl;
//	cout << "�ϲ���" << endl;
//	for_each(v3.begin(), v3.end(), print);//�����Ҳ��ͬ�����������
//}
//int main()
//{
//	test01();
//	return 0;
//}