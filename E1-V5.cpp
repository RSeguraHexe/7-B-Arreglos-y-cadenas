#include<iostream>
#include<cstdlib>
int main(){
    int n=0, arreglo[200];

    while(n<=0){
        system("cls");
        std::cout<<"========================================================================\n";
        std::cout<<"Ingrese la cantidad de enteros (mayor a 0 y menor o igual a 200): ";
        std::cin>>n;
    }

    std::cout<<"========================================================================\n";

    for(int i=0; i<n; i++){
        std::cout<<"Ingrese el entero "<<i+1<<": ";
        std::cin>>arreglo[i];
    }

    std::cout<<"========================================================================\n";

    for(int i=n-1; i>=0; i--){
        std::cout<<"El entero "<<i+1<<" es: ";
        std::cout<<arreglo[i]<<"\n";
    }

    std::cout<<"========================================================================\n";
}