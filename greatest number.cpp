#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<" \n enter the value of a \n ";
	cin>>a;
	cout<<"\n enter the value of b\n";
	cin>>b;
	cout<<"\n enter the vlaue of c \n";
	cin>>c;
	if (a>b && a>c){
	    cout<<" \n a is greater than b and c";
	   }
	else if(b>a && b>c){
	    cout<<" \n b is greater than a and c";
	    
	       
	   }
	else
	cout<<" \n c is greater";
	   
	   
	

	// your code goes here
	return 0;
}