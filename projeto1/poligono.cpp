#include <iostream>
#include <cmath>
#include "point.hpp"

using namespace std;

     Poligono::Poligono(){
         int i;
         for(i=0;i<100;i++){
            P[i].setX(0);
            P[i].setY(0);
            }
     }

     Poligono::~Poligono(){
     }

     void Poligono::inserir(Point _P[100]){
         int i, j;
         float g, h;
         Poligono P[100];
     cout <<" Quantos vértices deseja inserir ? ";
     cin >> j;
     q=j;
     for (i=0;i<j;i++){
        cout <<" Digite a cordenada x do vértice "<< i+1 << " :";
        cin >> g;
        P[i].setX(g);
        count <<" Digite a cordenada y do vértice "<< i+1 << " :";
        cin >> h;
        P[i].setY(h);
     }
     }

     float Poligono::recupera(void){
           cout <<" O poligono inserido possui "<< q <<" vértices";
           return q;
     }


     float Poligono::calcA(Point _P[100]){
           float area;
           int i, m, n, o;
           o = q;
           m =((_P[o].getX())*(_P[0].getY()));
           n =((_P[o].getY())*(_P[0].getX()));
           for (i=0;i<o-1;i++){
            m = (m + (_P[i].getX())*(_P[i+1].getY()));
            n = (n + (_P[i].getY())*(_P[i+1].getX()));
           }
           area = ((fabs(m-n))/2);
           return area;
     }

      void Poligono::Politranslada(float a, float b){
         float k, l;
         for (i=0;i<q;i++){
             k =(P[i].getX()+a);
             P[i].setX(k);
             l =(P[i].getY()+a);
             P[i].setY(l);
             }
     }

     void Poligono::rotaciona(Point _P,float teta){
          int i;
          for (i=0;i<q;i++){
               P[i].setX( _P.getX() + (P[i].getX() - _P.getX())*cos(teta) - (P[i].getY() - _P.getY()) *sin(teta)) ;
               P[i].setY(_P.getY() + (P[i].getX() - _P.getX())*sin(teta) + (P[i].getY() - _P.getY())*cos(teta));
              }

          }



          void Poligono::imprimep(Point _P[100]){
          int i;
          cout << " Os vértices que formam o poligono são: ";
          for (i=0;i<q;i++){
               cout << "   "<< _P[i].getX() <<" "<< _P[i].getY() << "   "endl;
     }
     }





