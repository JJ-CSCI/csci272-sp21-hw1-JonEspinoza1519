# include "binomial.h"


float coefficient1, coefficient2;
int power1, power2;


Binomial::Binomial(float coef1, int pow1, float coef2, int pow2){
  coefficient1 = coef1;
  coefficient2 = coef2;

  if(pow1 > 0)
    power1 = pow1;
  else
    power1 = 1;
  
  if(pow2 > 0)
    power2 = pow2;
  else
    power2 = 1;
    
}

float Binomial::GetCoefficient(int index) const{
  if (index < 1 || index > 2)
    return -1;
  
  if (index == 1)
    return coefficient1;
  else if (index ==2)
    return coefficient2;
  else
    return -1;
}

int Binomial::GetPower(int index) const{
  if (index < 1 || index > 2)
    return -1;
  
  if (index == 1)
    return power1;
  else if (index == 2)
    return power2;
  else
    return -1;
}

int Binomial::SetPower(int index, int pow){
  if (index < 1 || index > 2)
    return -1;

  if (pow < 1)
    pow = 1;

  if (index == 1)
    power1 = pow;
  else if (index ==2)
    power2 = pow;

  return 0;
}

int Binomial::Add(const Binomial Bino){
  if(power1 == Bino.Binomial::GetPower(1)){
    coefficient1 += Bino.Binomial::GetCoefficient(1);
    if(power2 == Bino.Binomial::GetPower(2)){
      coefficient2 += Bino.Binomial::GetCoefficient(2);
    }
    return 0;
  }
  else if (power2 > 1 && power2 == Bino.Binomial::GetPower(2)){
    coefficient2 += Bino.Binomial::GetCoefficient(2);
    return 0;
  }
  else{
    return -1;
  }
}

void Binomial::Multiply(float coefMult){
  coefficient1 *= coefMult;
  coefficient2 *= coefMult;
}

void Binomial::Multiply(float coefMult, int powMult){
  coefficient1 *= coefMult;
  coefficient2 *= coefMult;

  power1 += powMult;
  power2 += powMult;
}