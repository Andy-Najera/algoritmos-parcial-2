#include <iostream>
using namespace std;

int potencias(int b, int e){
    int resultado=1;
    for (int i=0; i < e; i++){
        resultado *= b;
    }
    return resultado;
}
int main(){
    int b, e;

    cout<<"Introduce una base ";
    cin>>b;
    cout<<"Introduce un exponente ";
    cin>>e;

    int resultado = potencias (b, e);
    cout<<"\n\tel resultado es "<<resultado<<endl;

    return 0;
}
