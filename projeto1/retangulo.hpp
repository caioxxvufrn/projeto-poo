#ifndef RETANGULO_HPP
#define RETANGULO_HPP
#include "point.hpp"
#include "poligono.hpp"

class Retangulo : public Poligono{
      float xr, yr, larg, alt;
      public:
      Retangulo();
      ~Retangulo();
      void inserirr(float x, float y, float largura, float altura);
      void imprimer(void);

};

#endif
