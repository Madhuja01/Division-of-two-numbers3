#include<iostream>
using namespace std;
int main() {
	int a,b,c;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	if(b==0) {
		cout<<"Division not possible";
	}
	else {
		c = a/b;
		cout<<"Quotient = "<<c;
	}
	return 0;
}
