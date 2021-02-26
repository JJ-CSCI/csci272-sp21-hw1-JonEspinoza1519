#ifndef BINOMIAL_H
#define BINOMIAL_H

class Binomial{
    public:
      Binomial(float coef1 = 1.0f, int pow1 = 1, float coef2 = 1.0f, int pow2 = 1);
      float GetCoefficient(int index) const;
      int GetPower(int index) const;
      int SetPower(int index, int pow);
      void Multiply(float coefMult);
      void Multiply(float coefMult, int powMult);
      int Add(Binomial bino);
};
#endif

    