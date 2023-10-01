#include<iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr){ }
};

int LinkList() {
	ListNode* n0 = new ListNode(1);
	ListNode* n1 = new ListNode(2);
	ListNode* n2 = new ListNode(3);
	ListNode* n3 = new ListNode(4);
	ListNode* n4 = new ListNode(5);
	n0->next = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	cout << "ListNodeÖµ£º" << n0->next->val << endl;
	return 0;
}