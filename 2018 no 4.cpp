#include <iostream>
using namespace std;

int main(){
	int x, ans = 0, i = 1;
	cout<<"masukkan nilaix, x>1";
	cin>>x;
	
	while (i<=x){
		if (x % i ==0){
			ans = ans + i;
			cout<<i<<" "<<endl;
		}
		i = i + 1;
	}
	cout<<"ans: "<<ans<<endl;
	return 0;
}
