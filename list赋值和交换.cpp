//#include <iostream>
//#include <list>
//using namespace std;
//void show(const list<int>&l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test01()
//{
//	list<int>l;
//	l.push_back(10);
//	l.push_back(20);
//	l.push_back(30);
//	l.push_back(40);
//	show(l);
//	list<int>L = l;//"="��ֵ
//	show(L);
//	list<int>L1;
//	L1.assign(l.begin(), l.end());//���丳ֵ
//	show(L1);
//	list<int>L2;
//	L2.assign(10, 100);//���10��100
//	show(L2);
//}
//void test02()
//{
//	list<int>l;
//	cout << "����ǰ��"<<endl;
//	l.push_back(30);
//	l.push_back(40);
//	l.push_back(50);
//	l.push_back(60);
//	show(l);
//	list<int>L;
//	L.assign(10, 20);//���10��20
//	show(L);
//	cout << "������"<<endl;
//	l.swap(L);//��������
//	show(l);
//	show(L);
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}