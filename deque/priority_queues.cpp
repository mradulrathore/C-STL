#include<iostream>
#include<queue>

using namespace std;

int main(){
	priority_queue<int> numbers;
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

