// Hotel Application
#include <iostream>
#include <map>

using namespace std;

int main(){
	map<int,string> hotel;
	int temp=1;
	string str;
	pair<int,string> p;
	
	cout<<"Inserting...\n";
	while(temp>0){
		cout<<"Enter room number: ";
		getline(cin,str);
		temp=stoi(str);
		if(temp>0 && temp<2016){
			p.first=temp;
			cout<<"Enter name: ";
			getline(cin,str);
			p.second=str;
			hotel.insert(p);
		}
	}
	
	cout<<"{   ";
	for(auto it = hotel.begin(); it!=hotel.end();it++)
		cout << it->first << "->" << it->second << "   ";
	cout<<"}\n";
	
	cout<<"Enter an existing room number: ";
	getline(cin,str);
	temp=stoi(str);
	p.first=temp;
	cout<<"Enter a name: ";
	getline(cin,str);
	p.second=str;
	hotel.insert(p);
	
	cout<<"Enter an existing room number to delete: ";
	getline(cin,str);
	temp=stoi(str);
	hotel.erase(temp);
	
	cout<<"{   ";
	for(auto it = hotel.begin(); it!=hotel.end();it++)
		cout << it->first << "->" << it->second << "   ";
	cout<<"}\n";
	
	
	return 0;
}








