//#include <iostream>
//#include <deque>
//#include <algorithm>
//using namespace std;
//void show(deque<int>& d)
//{//�������
//	for (deque<int>::iterator it = d.begin(); it != d.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//		d1.push_front(i);//ǰ�˲���
//	show(d1);
//	deque<int>d2;
//	for (int i = 0; i<10;i++)
//		d2.push_back(i);//��˲���
//	show(d2);
//	deque<int>d3(d1.begin(), d1.end());//�����ڵ������
//	show(d3);
//	deque<int>d4(2, 10);//���2��10
//	show(d4);
//	deque<int>d5(d4);//��������
//	show(d5);
//	d1.pop_front();//ǰ��ɾ��
//	show(d1);
//	d1.pop_back();//���ɾ��
//	show(d1);
//	deque<int>d6;
//	d6 = d1;//��=����ֵ����
//	show(d6);
//	d6.assign(d3.begin(), d3.end());//�����ڸ�ֵ
//	show(d6);
//	d6.assign(10, 100);
//	show(d6);//���10��100
//}
//void test02()
//{
//	deque<int>v;
//	for (int i = 0; i < 10; i++)
//		v.push_back(i);
//	if (v.empty())//�鿴�Ƿ�Ϊ��
//		cout << "vΪ�գ�" << endl;
//	else
//	{
//		cout << "v��Ϊ�գ�" << endl;
//		cout << "v�Ĵ�С��" << v.size() << endl;//�鿴��С��dequeû��capacity
//	}
//	v.resize(15);//�������ô�С�����ô����0����
//	show(v);
//	v.resize(5);//�������ô�С������С�Ľ������ɾ��
//	show(v);
//}
//void test03()
//{
//	deque<int>v1;
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	show(v1);
//	v1.insert(v1.begin(), 100);//ͷ������һ��100
//	show(v1);
//	v1.insert(v1.begin(), 2, 300);//ͷ������2��300
//	show(v1);
//	v1.insert(v1.end() - 1, 400);//�����ڶ���λ�ò���400
//	show(v1);
//	v1.erase(v1.begin());//ɾ����һ��Ԫ��
//	show(v1);
//	v1.erase(v1.begin(), v1.end()-1);//ɾ���ӵ�һ���������ڶ���Ԫ��
//	show(v1);
//	v1.clear();//���
//	show(v1);
//}
//void test04()
//{
//	deque<int>h;
//	for (int i = 0; i < 10; i++)
//		h.push_back(i);
//	show(h);
//	cout << "�ڶ���Ԫ�أ�" << h[1] << endl;
//	cout << "��һ��Ԫ�أ�" << h.front() << endl;//���һ��Ԫ��
//	cout << "���һ��Ԫ�أ�" << h.back() << endl;//�����һ��Ԫ��
//}
//void test05()
//{
//	deque<int>w;
//	w.push_back(10);
//	w.push_back(20);
//	w.push_back(3);
//	w.push_front(24);
//	w.push_front(14);
//	w.push_front(7);
//	cout << "����ǰ��";
//	show(w);
//	cout << "�����";
//	sort(w.begin(), w.end());//Ĭ������Ҫ����<algorithm>ͷ�ļ�,vector��sort
//	show(w);
//}
//int main()
//{
//	test01();
//	test02();
//	test03();
//	test04();
//	test05();
//	return 0;
//}