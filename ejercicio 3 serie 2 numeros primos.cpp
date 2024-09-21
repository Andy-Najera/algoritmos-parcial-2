#include<iostream>

using namespace std;

int main(){

	int x;
	
	cout<<"digite un numero ";
	cin>>x;
	
	if(x==0){
		cout<<"\nel numero es cero ";
	}
	else if (x%2==0){
		cout<<x<<" es primo ";
	}
	else {
		cout<<x<<" no es primo ";
	}

return 0;
}
