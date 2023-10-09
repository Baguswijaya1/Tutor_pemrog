#include<iostream>
using namespace std;

int main(){
	int jumlah_data;
	cin>>jumlah_data;
	
	int data[jumlah_data];
	for (int a = 0; a<jumlah_data; a++){
		cin>>data[a];
	}
	int output = 0;
	int tertinggi = data[0];
	for (int b = 0; b<jumlah_data; b++){
		if (tertinggi <= data[b]){
			tertinggi = data[b];
			if (tertinggi == data[b]){
				output ++;
			}
				
			
		}
	}
	
	//cout<<tertinggi<<endl;
	cout<<output;
}
