#include <bits/stdc++.h>
using namespace std ;


// heap funtions in STL library  
int main()
{
	vector <int> heap ; 
	for(int i = 3; i <= 9; i++){
		heap.push_back((i*i) + 2);	
	}
	
	// printing the heap 
	for(int i = 0; i < heap.size(); i++){
		cout << heap[i] << ' ';
	}
	cout << endl;

	// stl function to build a heap 
	make_heap(heap.begin() , heap.end());

	// printing the heap
	for(int i = 0; i < heap.size(); i++){
		cout << heap[i] << ' ';
	}
	cout << endl ;

	// printing the first and last elements of the heap 
	cout <<heap.front() << ' ' << heap.back() << endl;

	// push_heap() function is used to insert elements into the heap maintaining the heap property	
	int d ;
	cout << " element to insert :" << endl ;
	cin >> d ;
	cout << endl; 

	heap.push_back(d) ;
	push_heap(heap.begin() , heap.end() ) ;

	// printing the heap
	for(int i = 0; i < heap.size(); i++){
		cout << heap[i] << ' ';
	}
	cout << endl ;

	// pop_heap() is used to delete max element in the heap
	cout << "element thats deleted : " << heap.front() << endl ;
	pop_heap( heap.begin() , heap.end()) ;
	heap.pop_back();

	// printing the heap
	for(int i = 0; i < heap.size(); i++){
		cout << heap[i] << ' ';
	}
	cout << endl ;

	// sort_heap() is used to sort the array using heap function 
	//sort_heap(heap.begin() ,heap.end()) ;

	// printing the heap
	/*for(int i = 0; i < heap.size(); i++){
		cout << heap[i] << ' ';
	}
	cout << endl ;*/

	// is_heap() is used to check if the array is heap or not
	if(is_heap( heap.begin() , heap.end() ) ){
		cout << "list is a heap " << endl ;
	}
	else{ 
		cout << "list is not heap " << endl ;
	} 

	int it = *is_heap_until( heap.begin() , heap.end()) ;
	cout << "return value of function is_heap_until : " << it << endl ;




	return 0;
}