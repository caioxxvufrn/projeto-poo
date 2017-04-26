#ifndef POINT_HPP
#define POINT_HPP


class Point{
private:
  float x, y;
public:
  Point();
  ~Point();
  void setX(float _x);
  float getX(void);
  void setY(float _y);
  float getY(void);
  void setXY(float mx, float my);
  Point add(Point p1);
  Point sub(Point p1);
  float norma(Point p1);
  void translada(float a, float b);
  void imprime(void);

};

#endif
