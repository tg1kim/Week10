#include <stdio.h>
#include <stdlib.h>

//#define	PRACTICE

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
//	NodePtr ptr1, ptr2;
	// first node
	// second node
	// end
	return NULL;
}

NodePtr Create5()
{
	// NodePtr pFirst, pNew, pLast;
	// NodePtr ptr1, ptr2, ptr3, ptr4, ptr5;
	// memory
	// data
	// link
	return NULL;
}

NodePtr CreateN(int nCtr)
{
//	NodePtr pFirst, pNew, pLast;
	// first
	return NULL;
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
{	// recursion in the model answer
	NodePtr pDel;
	while (pDel = pList) {			// Caution: no pDel == pList
		pList = pList->link;
		free(pDel);
	}
}
