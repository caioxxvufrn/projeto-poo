#include <iostream>
#include <cmath>
#include "point.hpp"
#include "poligono.hpp"
#include "retangulo.hpp"

using namespace std;

int main(void){
    int q;
  float z,w,xr,yr,larg,alt;
  Point p1, p2, p3, p4, P[100], pc;
  Retangulo R;
  R.inserirr(0.0, 0.0, 4.0, 3.0);
  xr = 0;
  yr = 0;
  larg =4;
  alt =3;
  P[0].setX(xr);
  P[0].setY(yr);
  P[1].setX(xr);
  P[1].setY(yr-alt);
  P[2].setX(xr+larg);
  P[2].setY(yr-alt);
  P[3].setX(xr+larg);
  P[3].setY(yr);
  R.imprimer();
  q = 4;
  z = calcA(P[100]);
  cout << "A área é igual a :" << z << endl;
  Politranslada(-3, 4);
  q = 4;
  z << calcA(P[100]);
  cout << "A área é igual a :" << z << endl;
  pc.setX((fabs(P[0].getX()-P[2].getX()))/2);
  pc.setY((fabs(P[1].getY()-P[3].getY()))/2);
  R.rotaciona(pc,30);
  q = 4;
  w = calcA(P[100]);
  cout << "A área é igual a :" << z << endl;
  if(z=w){
    cout<< "As áreas são iguais !" << endl;
  }

}
