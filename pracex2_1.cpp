#include<iostream>
using namespace std;

template <typename T>
int countIf(T data[],int size,T key){
	//Write your code here
	int count = 0;
	for(int i = 0; i<size ; i++){
		if(data[i]== key){
			count++;
		}
	}
	return count;
}


int main(){
	int a[] = {1,0,2,3,4,0,1,0,0,5,1,9};
	cout << countIf(a,12,0) << "\n";
	cout << countIf(a,12,8) << "\n";
	
	char b[] = "CPECMU";
	cout << countIf(b,6,'C') << "\n";
	cout << countIf(b,6,'E') << "\n";
	
	return 0;
}
