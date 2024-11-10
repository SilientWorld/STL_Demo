//#include <iostream>
//#include <queue>//不允许遍历，先进先出
//#include <string>
//using namespace std;
//class person
//{
//public:
//	string name;
//	int age;
//	person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//};
//void test01()
//{
//	queue<person>q;
//	person p1("张三", 10);
//	person p2("李四", 20);
//	person p3("王五", 30);
//	person p4("赵六", 40);
//	q.push(p1);//入队
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//	cout << "队的大小：" << q.size() << endl;
//	while (!q.empty())
//	{
//		cout << "队头元素--姓名：" << q.front().name <<" "<<"年龄："<<q.front().age<< endl;
//		cout << "队尾元素--姓名：" << q.back( ).name <<" "<<"年龄："<<q.back().age<< endl;	
//		q.pop();//出队
//	}
//	cout << "队的大小：" << q.size() << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}