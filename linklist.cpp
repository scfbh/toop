#include "linklist.h"
#include<iostream>
using namespace std;
int main()
{
	linklist list;
	int n;
	int v[100];
	printf("�����뵥�����ȣ�");
	cin >> n;
	printf("�����뵥����Ԫ�أ�");
	for (int i = 0;i < n;i++)cin >> v[i];
	list = linklist();
	list = createl(v, n);
	int e;
	printf("������ҪѰ�ҵĶ�ֵ��");
	cin >> e;
	cout<<"�ý���ַΪ��"<<Location(list, e)<<endl;
	cout << "���붨ֵe��";
	cin >> e;
	cout << "��Ԫ�ظ���Ϊ��"<<Count(list, n, e)<<endl;
	return 0;
}