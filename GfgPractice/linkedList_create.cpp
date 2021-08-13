#include <iostream>

using namespace std;

struct Node{
	int data;
	struct Node* next;
};

int main()
{
	/* code */
	struct Node *head = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;

	head = new Node;
	second = new Node;
	third = new Node;

	head->data = 0;
	head->next = second;
	second->data = 1;
	second->next = third;
	third->data = 2;
	third->next = NULL;
	return 0;
}