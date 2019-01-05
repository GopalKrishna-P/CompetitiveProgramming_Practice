#include <bits/stdc++.h>
using namespace std ; 

// for function there are 2 ways to define a member function 
// 1. inside the class , 2. outside the class 

// there are 2 constructor functions, a default and another parametrized 


class iitg_profile 
{
	// access_specifier: can be ( public , private , protected )
	public :

	// data members or feilds 
	int roll_no ;
	
	// default constructor 
	iitg_profile()
	{
		int roll_no = 0000 ;
	}

	// parametrized constructor 
	iitg_profile( int x)
	{
		roll_no = x;
		cout << "a iitg_profile is constructed with roll_no = " << x << endl ; 
	}

	// member functions{} : methods to acess data members 
	void printid() 
	{
		cout << "id number is : " << roll_no << endl ;
	}

	void push_id( int roll ) 
	{
		roll_no = roll ;
	} 

	void prompt_push();

}; // class always ends with ';' 


// Definition of printname using scope resolution operator ::
void iitg_profile::prompt_push()
{
		cout << "Enter id number to push : " ;
		int r;
		cin >> r ;
		//cout << endl ;
		roll_no = r ;
}


// driver function 
int main() {

	iitg_profile gopal;
	cout << "# value of id when created (default value)" << endl ;
	gopal.printid();
	
	iitg_profile go(6032) ;
	cout << "# roll no when crated with 6032 " << endl ;
	go.printid();

	int r = 3052 ;
	
	gopal.push_id( r );
	cout << "# with push_id value 3052 created : " << endl ;
	gopal.printid() ;

	gopal.prompt_push() ;
	cout << "# after change " << endl ;
	gopal.printid() ;

	return 0;
}