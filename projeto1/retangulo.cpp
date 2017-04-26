#include <iostream>
#include <cmath>
#include "poligono.hpp"
#include "retangulo.hpp"


using namespace std;

     Retangulo::Retangulo(){
         xr=0;
         yr=0;
         alt=0;
         larg=0;
     }

     Retangulo::~Retangulo(){
     }

void Retangulo::inserirr(float x, float y, float largura, float altura){
     cout <<" Digite a coordenada x do canto superior esquerdo do retângulo: ";
     cin >> x;
     xr = x;
     cout <<" Digite a coordenada y do canto superior esquerdo do retângulo: ";
     cin >> y;
     yr = y;
     cout <<" Digite a largura do retângulo: ";
     cin >> largura;
     larg = largura;
     cout <<" Digite a altura do retângulo: ";
     cin >> altura;
     alt = altura;
}
void Retangulo::imprimer(void){
     cout << " Os vértices do retangulo são: "<<"  "<< xr <<" "<< yr <<"   " <<;
     cout <<"  "<< xr <<" "<< (yr - alt) <<"   ";
     cout <<"  "<< (xr + larg) <<" "<< (yr - alt) <<"   ";
     cout <<"  "<< (xr + larg) <<" "<< yr <<"   ";
}
