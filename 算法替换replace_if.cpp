//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void print(int val)
//{
//	cout << val << " ";
//}
//class greater20
//{
//public:
//	bool operator()(int val)
//	{
//		return val <= 20;
//	}
//};
//void test01()
//{
//	vector<int>v;
//	v.push_back(20);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(10);
//	v.push_back(50);
//	cout << "�滻ǰ��" << endl;
//	for_each(v.begin(), v.end(), print);
//	cout << endl;
//	replace_if(v.begin(), v.end(),greater20(), 100);// //replace_ifͨ�������Ҵ��ڻ�С�ڣ�replace�ҵ���
//	cout << "�滻��" << endl;
//	for_each(v.begin(), v.end(), print);
//}
//int main()
//{
//	test01();
//	return 0;
//}