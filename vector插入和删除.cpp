//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//void print(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//		cout << *it << " ";
//	cout << endl;
//}
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);//push_back��β��
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//	v.push_back(50);
//	print(v);
//	v.pop_back();//pop_back:βɾ
//	print(v);
//	v.insert(v.begin(), 100);//ͷ������һ��100
//	print(v);
//	v.insert(v.end(), 60);//β������һ��60
//	print(v);
//	v.insert(v.begin() + 1, 200);//�ڶ���λ�ò���200
//	print(v);
//	v.insert(v.end() - 1, 70);//�����ڶ���λ�ò���70
//	print(v);
//	v.erase(v.begin() + 2, v.end() - 2);//������λ�ú͵���������λ��֮���ɾ��
//	print(v);
//	v.insert(v.begin(), 2, 300);//ͷ������2��300
//	print(v);
//	v.clear();//���
//	print(v);
//}
//int main()
//{
//	test01();
//	return 0;
//}