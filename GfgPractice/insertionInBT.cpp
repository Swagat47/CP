#include <iostream>
#include <queue>

using namespace std;
struct Node{
	int key;
	struct Node *left, *right;
	Node(int key){
		this->key = key;
		left=right=NULL;
	}
};

// struct Node* newNode(int key){
// 	struct Node *temp = new Node;
// 	temp->key = key;
// 	temp->left = temp->right = NULL;
// 	return temp;
// };

void Inorder(struct Node* temp){
	if (temp==NULL)
		return;
	Inorder(temp->left);
	cout<<temp->key<<" ";
	Inorder(temp->right);
}

void Insert(struct Node* temp, int key){
	queue<Node*> q;
	q.push(temp);

	while(!q.empty()){
		struct Node* temp = q.front();
		q.pop();

		if (!temp->left)
		{
			temp->left = new Node(key);
			break;
		}
		else{
			q.push(temp->left);
		}
		if (!temp->right)
		{
			temp->right = new Node(key);
			break;
		}
		else{
			q.push(temp->left);
		}
	}
}
int main()
{
	struct Node* root = new Node(10); 
    root->left = new Node(11); 
    root->left->left = new Node(7); 
    root->right = new Node(9); 
    root->right->left = new Node(15); 
    root->right->right = new Node(8); 

    cout << "Inorder traversal before insertion:"; 
    Inorder(root); 

    int key = 12; 
    Insert(root, key); 

    cout << endl; 
    cout << "Inorder traversal after insertion:"; 
    Inorder(root); 
	return 0;
}