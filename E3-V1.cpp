#include<iostream>
int main(){
    int profesores[100];
    int P, n; /*P: Cantidad de profesores, n: Número de alumnos votantes*/
    std::cin>>P>>n;

    for(int i=0; i<P; i++){
        profesores[i]=0;
    }

    for(int i=0; i<n; i++){
        int voto;
        std::cin>>voto;
        profesores[voto-1]++;
    }

    for(int i=0; i<P; i++){
        std::cout<<i+1<<"-"<<profesores[i]<<"\n";
    }

    return 0;  
}