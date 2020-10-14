#include "linklist.h"
#include<iostream>
using namespace std;
int main()
{
	linklist list;
	int n;
	int v[100];
	printf("请输入单链表长度：");
	cin >> n;
	printf("请输入单链表元素：");
	for (int i = 0;i < n;i++)cin >> v[i];
	list = linklist();
	list = createl(v, n);
	int e;
	printf("请输入要寻找的定值：");
	cin >> e;
	cout<<"该结点地址为："<<Location(list, e)<<endl;
	cout << "输入定值e：";
	cin >> e;
	cout << "该元素个数为："<<Count(list, n, e)<<endl;
	return 0;
}