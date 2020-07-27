#include<iostream>
#include <windows.h>
#include<cstdlib>
#define size 5
using namespace std;
void changeColor(int desiredColor){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), desiredColor);
}
template<class Type> class STACK
{
    //static Type TOP;
    int TOP=-1;
	Type a[size];
	public:
	    STACK(){
	    	for(int i=0;i<size;i++)
	    	a[i]=0;
		}
		void push(){
			if(TOP>=size-1){
				changeColor(5);
				cout<<"------------------STACK IS OVERFLOW !----------------------"<<endl;
			}
			
			else
			{
			  TOP+=1;
			  for(int i=TOP;i<size;)
			  {
			  	int x;
			  	changeColor(3);
			  	cout<<"ENTER YOUR DATA  " <<TOP<<"= ";
			  	cin>>x;
			  	a[i]=x;
			  	break;
			  } 
			}
		}
		void pop(){
			if(TOP==-1){
			changeColor(5);
			cout<<"--------------------STACK UNDERFLOW !----------------"<<endl;
			}
			else{
				for(int i=TOP;i>=0;){
					changeColor(5);
				cout<<"*YOUR DATA REMOVE AT LOCATION ->"<<TOP<<endl;
				a[i]=0;
				TOP-=1;
				break;
				}
			}		
		}
	   void display(){
	   	changeColor(2);
	   	cout<<"**************YOUR STACK DATA ARE: *****************"<<endl;
	   	for(int i=0;i<size;i++)
	   	cout<<a[i]<<endl;
	   }
};
//template <class Type> Type STACK<Type>::TOP;
//template <class int> int STACK<int>::TOP;
main()
{ 
     int op;
    changeColor(2); 
    cout<<"\t\n"<<"------------------****   WELCOME TO MY APPLICATION  ****-------------------"<<"\n\n";
    changeColor(4);
	cout<<"Enter your choice [1|2|3|4|5|0]  : "<<endl;
	cout<<"\t1.-For integer type DATA"<<endl;
	cout<<"\t2.-For char type DATA "<<endl;
	cout<<"\t3.-For float type DATA "<<endl;
	cout<<"\t4.-For Double type DATA "<<endl;
	cout<<"\t5.-For string type DATA "<<endl;
	cout<<"\t0.- EXIT FROM THE APPLICATION"<<endl;
	cin>>op;
	do
	{
		switch(op)
		{
			case 1:
					int op1;
					STACK <int>s;
				    cout<<"Enter your choice [1|2|3]  : "<<endl;
					cout<<"\t1.-For Inserting the DATA"<<endl;
					cout<<"\t2.-For Deleting the DATA "<<endl;
					cout<<"\t3.-For Display the stack DATA "<<endl;
					cout<<"\t0.- EXIT FROM THE APPLICATION"<<endl;
					cin>>op1;
						switch(op1){
							case 1:
								cout<<"Insert your Data"<<endl;
								s.push();
								break;
							case 2:
								cout<<"Delete your Data from topmost position"<<endl;
								s.pop();
								break;
							case 3:
								cout<<"Displaying your Stack Data"<<endl;
								s.display();
								break;
							case 0:
								return 0;
						}
						break;
			
					
		
                 
			
			
		}
	}
	while(true);
}
