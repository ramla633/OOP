#include<iostream>
#include<string>
using namespace std;

class Account{
	string name;
	int bal=10000;
	public:
	Account(string a){
		
		name=a;
	}
	
	getname(){
		cout<<" Your account Name is "<<name<<"\n";
	}
	getbalance(){
		cout<<" Your account Balance is "<<bal<<"\n";
	}
};


main(){
	
	Account obj1("Laiba");
	Account obj2("Rabia");
	Account obj3("Sidra");
	Account obj4("Aqsa");
	
	obj1.getname();
	obj1.getbalance();
	obj2.getname();
	obj2.getbalance();
	obj3.getname();
	obj3.getbalance();
	obj4.getname();
	obj4.getbalance();
}


