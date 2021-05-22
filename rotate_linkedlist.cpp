#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
	
};

void insert(struct node **head){
	int choice=1;
	
	while(choice){
	
	struct node *newnode = new node;
	struct node *temp;
	cout<<"Enter data"<<endl;
	cin >> newnode -> data;
	newnode->next=0;
	
	if(*head==0){
		*head=temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;
	}
	cout<<"do you want to countinue"<<endl;
	cin>>choice;
	}	
}

node *rotate_linkedlist(struct node *head, int k){
	
	if(!head || !head->next || k==0)
	return head;
	
	struct node *cur=head;
	int len=1;
	while(cur!=NULL){
		cur=cur->next;
		len++;
	}
	cur->next=head;
	k=k%len;
	k=len-k;
	
	while(k--)
		cur=cur->next;
	
	head=cur->next;
	cur->next=NULL;
	
	return head;
	
}

void display(struct node *node){
	
	while(node!=NULL){
		cout<<node->data;
		node=node->next;
	}
}


int main(){
	cout<<"Linked list"<<endl;
    int choice,n,pos,pos1;
    struct node *head=NULL;
    struct node *newnode = NULL;
	insert(&head);
	display(head);
	
	cout<<"Enter by how many nods you want to rotate linked list "<<endl;
	cin>>n;
	newnode=rotate_linkedlist(head,n);
	display(newnode);
	
	return 0;
}

