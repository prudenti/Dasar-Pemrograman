#include <iostream>
using namespace std;
int main(){
	int i, j, k, l;
	
	cout<<"Masukkan Tabel: ";
	cin>>l;
	
	for(i=0; i<=l*l; i++){
		for(k=1; k<=l; k++){
			for(j=1; j<=l; j++){
				if(i==0||j==1||i%l==0||j==l){
					cout<<"+";
				} else {
					cout<<" ";
				}
			}
		}
		cout<<endl;
	}
}
