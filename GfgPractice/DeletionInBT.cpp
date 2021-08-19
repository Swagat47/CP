#include <iostream>
#include <queue>

using namespace std;

struct Node{
	int key;
	struct Node *left, *right;
	Node(int key){
		this->key = key;
		left=right = NULL
	}
};

void inorder(struct Node* root){
	if(!root)
		return;
	inorder(root->left);
	cout<<root->key<<" ";
	inorder(root->right);
}

void deletDeepest(struct Node *root, struct Node* temp){
	
}

void deletion(struct Node* root, int key){
	queue<Node*> q;
	q.push(q.front());

	struct Node *temp;
	struct Node *key_node = NULL;

	while(!q.front()){
		temp = q.front();
		q.pop();

		if (temp->key == key)
			key_node = temp;
		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp-right);
	}

	int x = temp->key;
	deletDeepest(root, temp);
	key_node->key = x;
}
int main()
{
	/* code */
	return 0;
}