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
//	s.insert(10);//û��push_back��push_front�ȵȲ������ݵĲ�����ֻ��insert
//	s.insert(40);
//	s.insert(60);
//	s.insert(20);
//	s.insert(30);
//	s.insert(10);
//	show(s);//�Զ���С��������ͬʱset���������ظ���Ԫ��
//	if (s.empty())
//		cout << "setΪ�գ�" << endl;
//	else
//	{
//		cout << "set��Ϊ�գ�" << endl;
//		cout << "set�Ĵ�С��" << s.size() << endl;
//	}
//	set<int>a;
//	a.insert(40);
//	a.insert(60);
//	a.insert(20);
//	a.insert(30);
//	show(a);
//	cout << "����ǰ��" << endl;
//	show(s);
//	show(a);
//	cout << "������" << endl;
//	s.swap(a);
//	show(s);
//	show(a);
//}
//int main()
//{
//	test01();
//	return 0;
//}