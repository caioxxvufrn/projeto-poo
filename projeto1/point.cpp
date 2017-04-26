#include <iostream>
#include <cmath>
#include "point.hpp"

using namespace std;

  Point::Point(){
      x = 0;
      y = 0;
  }

  Point::~Point(){
  }

  void Point::setX(float _x){
	x = _x;
  }

  void Point::setY(float _y){
	y = _y;
  }

  void Point::setXY(float mx, float my){
  x=mx;
  y=my;
  }

  float Point::getX(void){
	return x;
  }

  float Point::getY(void){
	return y;
  }

  Point Point::add(Point p1){
      Point p2;
      float a, b;
      a = (x + p1.getX());
      b = (y + p1.getY());
      p2.setX(a);
      p2.setY(b);
      return p2;
  }

  Point Point::sub(Point p1){
      Point p3;
      float c, d;
      c = (x - p1.getX());
      d = (y - p1.getY());
      p3.setX(c);
      p3.setY(d);
      return p3;
  }

   float Point::norma(Point p1){
      float n;
      n = sqrt((( p1.getX())^2)+((p1.getY())^2));
      return n;
  }

  void Point::translada(float a, float b){
      Point p4;
      float e, f;
      e = (x + a);
      f = (y + b);
      p4.setX(e);
      p4.setY(f);
  }

  void Point::imprime(Point p1){
      cout << " As coordenadas x e y do ponto são respectivamente : " << endl;
      cout <<"   "<< p1.getX() <<" "<< p1.getY() << "   "endl;
  }















