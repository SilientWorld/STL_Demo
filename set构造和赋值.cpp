//#include <iostream>
//#include <set>//set��multiset��������
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
//	s.insert(10);//û��push_back��push_front�ȵȲ������ݵĲ�����ֻ��insert
//	s.insert(40);
//	s.insert(60);
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	show(s);//�Զ���С��������ͬʱset���������ظ���Ԫ��
//	set<int>s1(s);//�������캯��
//	show(s1);
//	set<int>s2 = s1;//��ֵ��=������
//	show(s2);
//}
//void showprint(multiset<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test02()
//{
//	multiset<int>m;//û��push_back��push_front�ȵȲ������ݵĲ�����ֻ��insert
//	m.insert(10);
//	m.insert(40);
//	m.insert(60);
//	m.insert(20);
//	m.insert(30);
//	m.insert(10);
//	showprint(m);//�Զ���С��������ͬʱmultiset�������ظ���Ԫ��
//	multiset<int>m1(m);//�������캯��
//	showprint(m1);
//	multiset<int>m2 = m1;//��ֵ��=������
//	showprint(m2);
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}