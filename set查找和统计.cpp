//#include <iostream>
//#include <set>
//using namespace std;
//void show(set<int>&s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test01()
//{
//	set<int>s;
//	s.insert(40);//û��push_back��push_front�ȵȲ������ݵĲ�����ֻ��insert
//	s.insert(60);
//	s.insert(20);
//	s.insert(30);
//	s.insert(20);
//	show(s);
//	set<int>::iterator pos = s.find(300);
//	if (pos != s.end())
//		cout << "�ҵ��˸�Ԫ��:" << *pos << endl;
//	else
//		cout << "δ�ҵ���Ԫ�أ�" << endl;
//	int num = s.count(20);
//	cout << "ͳ�Ƹ�����" << num << endl;//setͳ�Ƹ���ֻ��1��0��multiset�����Ǵ���1��
//}                                       //set���������ظ���Ԫ�أ�multiset�������ظ���Ԫ��
//int main()
//{
//	test01();
//	return 0;
//}