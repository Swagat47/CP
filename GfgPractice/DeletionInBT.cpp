#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Node{
	int key;
	struct Node* left, *right;
	Node(int key){
		this->key = key;
		left=right = NULL;
	}
};

void Inorder(Node* temp){
	if(temp == NULL)
		return;
	Inorder(temp->left);
	cout<<temp->key<<" ";
	Inorder(temp->right);
}

void deleteDeepest(struct Node *root, struct Node* nodetobedeleted){
	queue <Node*> q;
	q.push(root);
	Node* temp;
	while(!q.empty()){
		temp = q.front();
		q.pop();
		if (temp->right)
		{
			if(temp->right == nodetobedeleted){
				temp->right=NULL;
				delete(nodetobedeleted);
				return;
			}
			else
				q.push(temp->right);
		}
		if (temp->left)
		{
			if (temp->left == nodetobedeleted)
			{
				temp->left = NULL;
				delete(nodetobedeleted);
				return;
			}
			else
				q.push(temp->left);
		}
	}
}

void deletion(struct Node* root, int key){
	//throw"in deletion function";
	queue<Node*> q;
	q.push(root);

	struct Node *temp;
	struct Node *key_node = NULL;

	while(!q.empty()){
		temp = q.front();
		q.pop();

		if (temp->key == key)
			key_node = temp;
		if(temp->left)
			q.push(temp->left);
		if(temp->right)
			q.push(temp->right);
	}

	int x = temp->key;
	deleteDeepest(root, temp);
	key_node->key = x;
}
int main()
{
	struct Node* root = new Node(10);
	root->left = new Node(11);
	root->right = new Node(9);
	root->right->right = new Node(8);
	root->right->left = new Node(15);
	root->left->left = new Node(7);
	root->left->right = new Node(12);

	cout<<"tree before deletion"<<endl;
	Inorder(root);
	cout<<endl;
	int key = 11;
	//try{
		deletion(root, key);
		cout<<endl;
	// }
	// catch(const char* msg){
	// 	cout<<msg<<endl;
	// }
	
	cout<<"Tree after deletion"<<endl;
	Inorder(root);
	return 0;
}