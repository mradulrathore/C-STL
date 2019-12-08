#include<iostream>
#include<stack>

using namespace std;

int main(){
	stack<int> numbers;
	int temp=0;
	
	cout<<"Pushing..."<<endl;
	while(temp>=0){
		cout<<"Enter Number: ";
		cin>>temp;
		if(temp>=0)
				   numbers.push(temp);
	}
	
	cout<<"{ ";
	while(numbers.size()>0){
		cout<<numbers.top();
		numbers.pop();
		cout<<" ";
	}
	cout<<"}";
	cout<<endl;
	return 0;
}

