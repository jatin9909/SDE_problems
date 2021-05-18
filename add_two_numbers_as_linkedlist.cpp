#include<iostream>
#include<cstdlib>
using namespace std;

struct node{
	int data;
	struct node *next;
	node(){
		data=0;
	}
	node (int x){
		data = x;
	}
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

node * add(struct node *head1 ,struct node *head2 ){
	struct node *dummy = new node;
	struct node *temp = dummy;
	
	int carry=0;
	
	while(head1!=0 || head2!=0 || carry){
		int sum=0;
		
		if(head1!=NULL){
			sum+=head1->data;
			head1=head1->next;
		}
		
		if(head2!=NULL){
			sum+=head2->data;
			head2=head2->next;
		}
		
		sum+=carry;
		carry=sum/10;
		
		struct node *listnode = new node(sum%10);
		temp->next=listnode;
		temp=temp->next;
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
    struct node *head1=NULL;
    struct node *head2=NULL;
    struct node *ans = new node;
    insert(&head1);
	display(head1);
	
	insert(&head2);
	display(head2);
	
	cout<<"Adding two numbers "<<endl;
	ans = add(head1, head2);
	display(ans);
	
	return 0;
}

