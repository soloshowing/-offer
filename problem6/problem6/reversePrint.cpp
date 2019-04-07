#include "ListNode.h"
#include <iostream>
#include <stack>
using namespace std;

void reversePrintStack(ListNode* root)
{
	stack<int> stk;
	//ѹջ
	while (root) {
		stk.push(root->value);
		root = root->next;
	}
	//��ջ��ӡ
	while (!stk.empty())
	{
		cout << stk.top() << ' ';
		stk.pop();
	}
	return;
}


void reversePrintRecursive(ListNode* root)
{
	if (root == NULL)
		return;
	reversePrintRecursive(root->next);
	cout << root->value << ' ';
}

//�����ӡ
void print(ListNode* root)
{
	while (root)
	{
		cout << root->value << " ";
		root = root->next;
	}
	return;
}