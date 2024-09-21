#include<iostream>

using namespace std;

int main(){
    int num;
    
    cout<<"digite una estacion del ano "<<endl;
    cout<<"\t1. primavera\n ";
    cout<<"\t2. verano\n ";
    cout<<"\t3. otono\n ";
    cout<<"\t4. invierno\n ";
    cin>>num;
    
    switch(num){
    	case 1: cout<<"\nusted escogio primavera ";
    	break;
    	case 2: cout<<"\nusted escogio verano ";
    	break;
    	case 3: cout<<"\nusted escogio otono ";
    	break;
    	case 4: cout<<"\nusted escogio invierno ";
    	break;
    	default: cout<<"\nno escogio ninguna estacion del ano ";
	}

    return 0;
}

