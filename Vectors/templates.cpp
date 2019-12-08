#include<iostream>
using namespace std;

template <typename T>

int size_in_bits(const T& a){
	return sizeof(a)*8;
}

int main(){
	cout << size_in_bits(9) << endl;
	cout << size_in_bits('f') << endl;
	cout << size_in_bits(9.4f) << endl;
	cout << size_in_bits(9.4) << endl;
	return 0;
}

