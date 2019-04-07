#include "ListNode.h"

int main()
{
	auto root = new ListNode;	
	auto p = root;
	for (int i = 1; i < 10; i++)
	{
		auto node = new ListNode(i);
		p = p->next = node;
	}
	//�����ӡ
	print(root);
	cout << endl;
	//�����ӡ
	reversePrintStack(root);
	cout << endl;
	reversePrintRecursive(root);
	cout << endl;
	//�ͷ��ڴ�
	p = root;
	while (p)
	{
		auto temp = p;
		p = p->next;
		delete temp;
	}

	return 0;
}

