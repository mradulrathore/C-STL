#include<iostream>
#include<deque>

using namespace std;

int main(){
	deque<int> numbers;
	int temp=0;
	
	cout<<"Pushing Back...\n";
	while(temp>=0){
		cout<<"Enter Number: ";
		cin>>temp;
		if(temp>=0)
				   numbers.push_back(temp);
	}
	cout<<endl;
	deque<int>::iterator it;
	cout<<"{ ";
	for(it=numbers.begin();it!=numbers.end();it++)
  	               cout<<*it<<" ";
    cout<<"}"<<endl;

	temp=0;
    cout<<"Pushing Front..."<<endl;
   	while(temp>=0){
		cout<<"Enter Number: ";
		cin>>temp;
		if(temp>=0)
				   numbers.push_front(temp);
	}
	cout<<endl;
	cout<<"{ ";
	for(it=numbers.begin();it!=numbers.end();it++)
  	               cout<<*it<<" ";
    cout<<"}"<<endl;
    
 	return 0;   
}
