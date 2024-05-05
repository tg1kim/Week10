#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable: 4326 4996 6011 6031)

typedef struct node {
	int nData;
	struct node *link;
}	Node, *NodePtr;

void main()
{
	NodePtr Add(NodePtr pFirst, int nData);
	NodePtr Insert(NodePtr pFirst, int nData, NodePtr pPrev);
	NodePtr Delete(NodePtr pFirst, int nData);
	NodePtr Find(NodePtr pFirst, int nData);
	void PrintList(NodePtr pFirst);
	NodePtr pFirst = NULL;
	NodePtr pPrev = NULL;
	while (1) {
		printf("[aidfe] ? ");
		char sCmnd[10];
		gets_s(sCmnd);
		if (*sCmnd == 'e')
			return;
		printf("Data ? ");
		char sData[10];
		gets_s(sData);
		int nData = atoi(sData);
		switch (*sCmnd) {
		case 'a':
			pFirst = Add(pFirst, nData);
			break;
		case 'f':
			pPrev = Find(pFirst, nData);
			printf("%s\n", (pPrev) ? "Good" : "Bad");
			break;
		case 'i':
			pFirst = Insert(pFirst, nData, pPrev);
			break;
		case 'd':
			pFirst = Delete(pFirst, nData);
		}
		PrintList(pFirst);
	}
}

NodePtr Add(NodePtr pFirst, int nData)
{
	// pFirst�� ����Ű�� Linked List�� ���� �տ� nData�� ������ ��带 �����Ѵ�.
	// pFirst�� ����Ű�� Linked List�� ��尡 �ϳ��� ���� ���� �ִ�.
	NodePtr pNode = (NodePtr)malloc(sizeof(Node));
	if (pNode) {
		pNode->nData = nData;
		pNode->link = pFirst;
	}
	return pNode;
}

NodePtr Find(NodePtr pNode, int nData)
{
	// ����� ����Ÿ ���� nData ���� ������ ù��° ��带 ã�Ƽ� �� ��带 return�Ѵ�.
	// ���࿡ �׷��� ��尡 ������ NULL�� return�Ѵ�.
	if (pNode == NULL || pNode->nData == nData)
		return pNode;
	return Find(pNode->link, nData);
}

NodePtr Insert(NodePtr pFirst, int nData, NodePtr pPrev)
{
	// pFirst�� ����Ű�� Linked List���� pPrev ��� �ڿ� nData�� ������ ��带 �����Ѵ�.
	// ���� pPrev�� NULL�̸� ���� �տ� ���Եȴ�.
	// Insert ����� Find ����� �����Ͽ� pPrev�� ������ ���� ������ �Ŀ� ����ȴٰ� �����Ѵ�.
	NodePtr pNode = (NodePtr)malloc(sizeof(Node));
	if (pNode) {
		pNode->nData = nData;
		if (pPrev) {
			pNode->link = pPrev->link;
			pPrev->link = pNode;
		}
		else {
			pNode->link = pFirst;
			pFirst = pNode;
		}
	}
	return pFirst;
}

NodePtr Delete(NodePtr pFirst, int nData)
{
	// ����� ����Ÿ ���� nData ���� ������ ù��° ��带 ã�Ƽ� �� ��带 �����Ѵ�.
	// ��带 �����ϱ� ���Ͽ� ���� ��带 �˾ƾ� �ϴµ� Find �Լ��� �˰��򿡼�
	// ������ ���� pTrail�� ����� �ٷ� �ڿ� ���� �����ϰ� 
	// ������ ��尡 ã�� ����̸� pTrail�� ���� ��尡 �ȴ�.
	NodePtr pPrev = NULL;
	NodePtr ptr = pFirst;
	while (ptr && ptr->nData != nData) {
		pPrev = ptr;
		ptr = ptr->link;
	}
	if (ptr) {
		if (pPrev) 
			pPrev->link = ptr->link;
		else
			pFirst = ptr->link;
		free(ptr);
	}
	return pFirst;
}

void PrintList(NodePtr pNode)
{
	while (pNode) {
		printf("%d ", pNode->nData);
		pNode = pNode->link;
	}
	printf("\n\n");
}
