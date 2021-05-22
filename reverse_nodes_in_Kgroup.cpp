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

node * reverse_groups(struct node *head, int k){
	if(head==NULL || k==1){
		return head;
	}
	struct node *dummy = new node;
	dummy->next = head;
	
	struct node *cur = dummy, *pre = dummy , *nex  =dummy;
	int count=0;
	
	while(cur->next!=NULL){
		cur=cur->next;
		count++;
	}
	
	while(count>=k){
		cur = pre->next;
		nex = cur->next;
		
		for(int i=1; i<k ; i++){
			cur->next = nex->next;
			nex->next = pre->next;
			pre->next = nex;
			nex  = cur->next;
		}
		pre = cur;
		count-=k;
		
	}
	return dummy->next;
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
	
	cout<<"Enter how many groups in linked list you want to reverse "<<endl;
	cin>>n;
	
	newnode = reverse_groups(head, n);
	display(newnode);
	
	return 0;
}

