#define _CRT_SECURE_NO_WARNINGS 1
#include"list.h"
void InitList(List ** pphead)
{
	*pphead = NULL;
}
List* BuyList(ListNodeType x)
{
	List* cur = (List*)malloc(sizeof(List));
	cur->value = x;
	cur->next = NULL;
}
void Push_front(List** pphead,ListNodeType x)
{
	List* cur = BuyList(x);
	cur->value = x;
	cur->next = *pphead;
	*pphead = cur;
}
