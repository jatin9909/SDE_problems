#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	struct node *next;
	
};

struct node *create(int x){
	node *temp = new node;
	temp->data=x;
	temp->next=NULL;
	
	return temp;
}

void insert(struct node *&head, int n){
	if(head == NULL){
		head = create(n);
		return;
	}
	
	struct node* t = head;
	while(t->next != NULL)
		t = t->next;
	t->next = create(n);	
}

int del(struct node *&head){
	if(head==NULL)
	return 0;
	
	struct node *temp = head;
	int val = head->data;
	head = head->next;
	
	delete temp;
	
	return val;
}

int digit(int n){
	int i=1;
	
	if(n<10){
		return 1;
	}
	
	while(n > (int) pow(10,i)){
		i++;
	}
	return i;
}


void radixsort(vector<int> &arr){
	
	int size = arr.size();
	int max = *max_element(arr.begin(), arr.end());
	int digits = digit(max);
	
	struct node **bins = new node*[10];
	for(int i=0; i<10; i++){
		bins[i]=NULL;
	}
	
	for(int i=0; i<digits; i++){
		for(int j=0; j<size; j++){
			insert(bins[(arr[j] / (int)pow(10,i)) % 10] , arr[j]);
		}
		int x=0, y=0;
		
		while(x<10){
			while(bins[x]!=NULL)
				arr[y++]=del(bins[x]);
			
			x++;	
		}
	}

}

void display(vector <int> arr){
	for(int i=0; i<arr.size(); i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){
	cout<<"Radix sort using buckets "<<endl;
    int n;
    vector<int> arr;
    cout<<"Enter how many numbers you want in "<<endl;
    cin>>n;
    int element ;
    for(int i=0; i<n; i++){
    	cin>>element;
    	arr.push_back(element);
	}
	radixsort(arr);
	display(arr);
	return 0;
}
