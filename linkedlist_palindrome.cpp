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

node *reverse_linkedlist(node *head){
	struct node *pre=NULL;
	struct node *next=NULL;
	while(head!=NULL){
		next=head->next;
		head->next=pre;
		pre=head;
		head=next;
	}
	return pre;
}

bool check_palindrome(struct node *head){
	if(head==NULL && head->next==NULL)
	return true;
	
	struct node *slow=head;
	struct node *fast=head;
	
	while(fast->next!=NULL && fast->next->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
	}
	
	slow->next=reverse_linkedlist(slow->next);
	slow=slow->next;
	
	while(slow!=NULL){
		if(head->data!=slow->data)
		return false;
		
		head=head->next;
		slow=slow->next;
	}
	return true;
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
	
	if(check_palindrome(head)){
		cout<<"The linked list is palindrome "<<endl;
	}
	else{
		cout<<"The linked list is not palindrome "<<endl;
	}
	
	return 0;
}

