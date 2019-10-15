#include<stdio.h>
#include<stdlib.h>
typedef int ListNodeType;
typedef struct List{
	ListNodeType value;
	struct List* next;
}List;