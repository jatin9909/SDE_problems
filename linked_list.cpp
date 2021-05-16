#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
	
};

void create(struct node **head, int n){
	
	struct node *newnode = new node;
	
	cout<<"Enter "<<n+1<<" interger"<<endl;
	cin>>newnode->data;
	newnode->next=0;
	*head=newnode;
		
}

void insert_at_beg(struct node **head, int n){
	while(n){
	struct node *newnode = new node;
	cin>>newnode->data;
	newnode->next=*head;
	*head=newnode;
    n--;
	}
}

node * deleteodd(struct node *head){
	struct node *temp = head;
	struct node *prevnode = new node;
	
	if((temp->data) % 2 !=0){  //if the first data of first node is odd
		temp=temp->next;
		head=temp;
	}
	
	while(temp!=NULL){
		if((temp->data) % 2 !=0){
			prevnode->next=temp->next;
			temp=temp->next;
		}
		else{
			prevnode = temp;
			temp=temp->next;
		}
	}
	return head;
}

void display(struct node *node){
	cout<<"Linked list "<<endl;
	while(node!=NULL){
		cout<<node->data;
		node=node->next;
	}
	cout<<endl;
}

int main(){
	cout<<"Linked list"<<endl;
    int n;
    struct node *head=NULL;
    cout<<"how many random interger you want "<<endl;
    cin>>n;
    create(&head,n-1);
    insert_at_beg(&head,n-1);
	display(head);
	
	head=deleteodd(head);
	display(head);
	
	return 0;
}
