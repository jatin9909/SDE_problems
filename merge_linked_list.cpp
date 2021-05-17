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


int findlength(struct node *head){
	struct node *temp=head;
	
	int i=0;
	while(temp!=0){
		i++;
		temp=temp->next;
	}
	return i;
}

node *merge(struct node *head1, struct node *head2, int size){
	
	if(head1==nullptr){
		return head2;
	}
	else if(head2==nullptr){
		return head1;
	}
	
	struct node *head3=NULL;
	
	if(head1->data <= head2->data){
		head3=head1;
		head1=head1->next;
	}
	else{
		head3=head2;
		head2=head2->next;
	}
	
	struct node *mergedtail = head3;
	
	while(head1!=nullptr && head2!= nullptr){
		struct node *temp = NULL;
		if(head1->data <= head2->data){
			temp=head1;
			head1=head1->next;
		}
		else{
			temp=head2;
			head2=head2->next;
		}
	
	
	mergedtail->next=temp;
	mergedtail = temp;
    }
    
    if(head1!=nullptr){
    	mergedtail->next=head1;
	}
	else if(head2!=nullptr){
		mergedtail->next=head2;
	}
	
	return head3;
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
    insert(&head1);
	display(head1);
	
	insert(&head2);
	display(head2);
	
	int size1=findlength(head1);
	int size2=findlength(head2);
	int size3 = size1+size2;
	
	struct node *head3=NULL;
	head3=merge(head1, head2, size3);
	display(head3);
	
	return 0;
}

