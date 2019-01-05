# include <bits/stdc++.h>
using namespace std ;

struct List_node
{
	int data ;
	List_node* next ;
};
List_node* head ;

List_node* newnode( int data )
{
	List_node* list = NULL ;
	*list = new List_node ;
	list->data = data ;
	return list ;  
};

// adds a new node at the end of list or if list=NULL the a new node is created and address stored in 
void addnode( List_node* head , int data )
{
	List_node* temp ;
	temp = head ;
	if( temp != NULL){
		while(temp->next != NULL ){
			temp = temp->next ;
		}
		temp->next = newnode( data );
	}
	else{
		head = newnode ( data );
	}	
};

// prints the list when given the head of the linked list
void printlist( List_node* head ){
	List_node* temp = head ;

	cout << "#linked list = " ;
	
	while(temp != NULL){
		cout << temp->data ;
		temp = temp->next ;
	}
	cout << endl ;	
}

// driver function
int main()
{
	head = newnode( 10 ) ;
	addnode( head , 11);
	addnode( head , 12);

	cout << head->data << endl ;
	List_node* temp = head;
	
	temp = temp->next ;
	cout << temp->data << endl ;
	
	//printlist( head ) ;
	return 0;
}
