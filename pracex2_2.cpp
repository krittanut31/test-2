#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

void sort(float x[], int N){
	for(int i = 1; i < N; i++){
		for(int j = i; j > 0; j--){
			if(x[j] > x[j-1]){
				float temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
			}else{
				break;
			} 
		}
	}
}

int main(){
	ifstream source("score2.txt");
	ofstream scores("result.txt");
	string line;
	float a[20] = {};
	int i = 0;
	while(getline(source,line)){
		a[i] = atof(line.c_str());
		i++;
	}
	
	sort(a,20);
	for(int j= 0;j<20;j++){
		if(a[j]==a[j-1]){
			
			scores << j << " : "<< a[j] << "\n"; 
			
		}
		else {
			scores << j+1 << " : "<< a[j] << "\n"; 
		}
	}
	scores.close();
	return 0;
}

