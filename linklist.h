#pragma once
#include<iostream>
using namespace std;
#define success 1;
#define error 0;
typedef int Elemtype, Status;
typedef struct Node
{
	Elemtype data;
	struct Node* next;
}Node,*linklist;
Status LinkList()
{
	linklist L;
	L = (linklist)malloc(sizeof(Node));
	if (L == NULL)
	{
		printf("ÉêÇëÄÚ´æ¿Õ¼äÊ§°Ü\n");
	}
	L->next = NULL;
	return success;
}
linklist createl(Elemtype v[],int n)
{
	linklist head;
	head = (linklist)malloc(sizeof(Node));
	head->next = NULL;
	
	for (int i = 0;i < n;i++)
	{
		Node* L;
		L = (Node*)malloc(sizeof(Node));
		L->data = v[i];
		L->next = head->next;
		head->next = L;
	}
	return head;
}
linklist Location(linklist L, const Elemtype& e)
{
	Node* p = L->next;
	while (p != NULL && p->data != e)
	{
		p = p->next;
	}
	return(p != NULL) ? p : NULL;
}
Status Count(linklist L, int n, const Elemtype& e)
{
	Node* p=L->next;
	Elemtype count_ = 0;
	for (int i = 0;i < n;i++)
	{
		if (p->data == e)
			count_++;
		p = p->next;
	}
	return count_;
}