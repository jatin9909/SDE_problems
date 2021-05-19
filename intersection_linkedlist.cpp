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

node * inter(struct node *head1, struct node *head2){
	if(head1==NULL || head2==NULL){
	return NULL;
	}
	
	struct node *a = head1;
	struct node *b = head2;
	cout<<"fgsd";
	while(a!=b){
		a=a==NULL? headB:a->next;
        b=b==NULL? headA:b->next;
	}
	return a;
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
    struct node *head1=NULL;
    struct node *head2=NULL;
    struct node *head3=NULL;
	insert(&head1);
	display(head1);
	
	insert(&head2);
	display(head2);
	
	head3=inter(head1, head2);
	display(head3);
	
	return 0;
}

