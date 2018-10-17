#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node *newNode(int data) {
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->left = temp->right = NULL;

	return temp;
}

int heightOfTree(struct node *root) {
	return root ? 1 + heightOfTree(root->left) + heightOfTree(root->right):0;
}

int main() {
	struct node *root = NULL;
	root = newNode(10);
	root->left = newNode(20);
	root->right = newNode(30);
	root->left->left = newNode(40);
	root->left->right = newNode(50);


	printf("height of tree : %d", heightOfTree(root));

	return 0;

}
	
