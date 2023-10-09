#include<iostream>
using namespace std;

int main(){
	int jumlah_data;
	cin>>jumlah_data;
	
	//input
	int data[jumlah_data];
	for (int a = 0; a<jumlah_data; a++){
		cin>>data[a];
	}

	
	//menentukan nilai tertinggi 
	int output = 0;
	int tertinggi = data[0];
	for (int b = 0; b<jumlah_data; b++){
		if (tertinggi <= data[b]){
			tertinggi = data[b];
		}
	}
	//menentukan jumlah dari nilai tertinggi
	for (int c = 0; c<jumlah_data; c++){
		if (data[c]==tertinggi){
			output++;
		}
	}
	
	//cout<<tertinggi<<endl;
	cout<<output;
}
