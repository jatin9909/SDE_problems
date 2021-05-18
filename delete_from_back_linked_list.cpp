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

node * delete_at_pos(struct node *head, int pos){
	struct node *start = new node;
	start->next=head;
	struct node *fast = start;
	struct node *slow = start;
	
	for(int i=1; i<=pos; i++){
		fast=fast->next;
	}
	while(fast->next!=NULL){
		fast=fast->next;
		slow=slow->next;
	}
	
	slow->next = slow->next->next;
	
	return start->next;
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
    insert(&head);
	display(head);
	
	cout<<"Enter at which position you want to delete from back"<<endl;
	cin>>pos1;
	head = delete_at_pos(head, pos1);
	display(head);
	
	return 0;
}

