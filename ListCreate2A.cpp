#include <stdio.h>
#include <stdlib.h>

#define	PRACTICE	2

#pragma warning (disable: 4326 4996 6011 6031)

typedef struct node {
	int nData;
	struct node *link;
}	Node, *NodePtr;

void main()
{
	NodePtr Create2(void);
	NodePtr Create5(void);
	NodePtr CreateN(int nCtr);
	void PrintList(NodePtr pList);
	void FreeList(NodePtr pList);

	NodePtr pHead;
#if PRACTICE == 2
	pHead = Create2();
	PrintList(pHead);
	FreeList(pHead);
#elif PRACTICE == 5
	pHead = Create5();
	PrintList(pHead);
	FreeList(pHead);
#else
	while (1) {
		printf("? ");
		int nCtr;
		scanf("%d", &nCtr);
		if (nCtr <= 0)
			break;
		pHead = CreateN(nCtr);
		PrintList(pHead);
		FreeList(pHead);
		putchar('\n');
	}
	printf("Bye, ...\n\n");
#endif
}

NodePtr Create2()
{
	NodePtr ptr1, ptr2;
	// first node
	ptr1 = (NodePtr)malloc(sizeof(Node));
	ptr1->nData = 10;
	// second node
	ptr2 = (NodePtr)malloc(sizeof(Node));
	ptr2->nData = 20;
	ptr1->link = ptr2;
	// end
	ptr2->link = NULL;
	return ptr1;
}

NodePtr Create5()
{
	NodePtr ptr1, ptr2, ptr3, ptr4, ptr5;
	// memory
	ptr1 = (NodePtr)malloc(sizeof(Node));
	ptr2 = (NodePtr)malloc(sizeof(Node));
	ptr3 = (NodePtr)malloc(sizeof(Node));
	ptr4 = (NodePtr)malloc(sizeof(Node));
	ptr5 = (NodePtr)malloc(sizeof(Node));
	// data
	ptr1->nData = 10;
	ptr2->nData = 20;
	ptr3->nData = 30;
	ptr4->nData = 40;
	ptr5->nData = 50;
	// link
	ptr1->link = ptr2;
	ptr2->link = ptr3;
	ptr3->link = ptr4;
	ptr4->link = ptr5;
	ptr5->link = NULL;
	return ptr1;
}

NodePtr CreateN(int nCtr)
{
	NodePtr pFirst, pNew, pLast;
	/****
	// first
	pFirst = (NodePtr)malloc(sizeof(Node));
	pFirst->nData = 10;
	pLast = pFirst;
	// from 2 to nCtr
	for (int i = 2; i <= nCtr; i++) {
		pNew = (NodePtr)malloc(sizeof(Node));
		pNew->nData = i * 10;
		pLast = pLast->link = pNew;
	}
	/****/
	/****/
	pFirst = pLast = NULL;
	for (int i = 1; i <= nCtr; i++) {
		pNew = (NodePtr)malloc(sizeof(Node));
		pNew->nData = i * 10;
		pLast ? pLast->link = pNew : pFirst = pNew;
		pLast = pNew;
	}
	/****/
	pLast->link = NULL;
	return pFirst;
}

void PrintList(NodePtr pList)
{
	NodePtr ptr = pList;
	while (ptr) {
		printf("%d ", ptr->nData);
		ptr = ptr->link;
	}
	putchar('\n');
}

void FreeList(NodePtr pList)
{
	if (pList) {
		FreeList(pList->link);
		delete pList;
	}
}
