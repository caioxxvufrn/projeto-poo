#ifndef POLIGONO_HPP
#define POLIGONO_HPP
#include "point.hpp"


class Poligono{
      private:
      int q;
      Point P;
      public:
      Poligono();
      ~Poligono();
      void inserir(Point _P[100]);
      float recupera(void);
      float calcA(Point _P[100]);
      void Politranslada(float a, float b);
      void rotaciona(Point _P,float teta);
      void imprimep(void);

};

#endif
