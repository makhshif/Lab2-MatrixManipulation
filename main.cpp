#include<iostream>
#include"mycode.h"
//#include"mycode.cpp"
using namespace std;
int main(){
		
	MATRIX first,second,third;
	cout<<"First Mtarix"<<endl;
	first.display();
	cout<<"Second Matrix"<<endl;
	second.display();
	cout<<"matrix after addition is "<<endl;
	third.add(first,second);
	third.display();
	cout<<endl;
	cout<<"matrix after subtraction is "<<endl;
	
	third.subtract(first,second);
	third.display();
	cout<<endl;
	cout<<"Matrix after multiplication is "<<endl;
	
	third.multiply(first,second);
	third.display();


cout<<"Matrix after multiplication and first to answer is "<<endl;
	
	third.multiply(first,second);
         third.add(first,third);
	third.display();
	return 0;
}
