#include "omniPower.h"

#include <math.h>

OmniPower::OmniPower(unsigned int n, double lengh, double diff) {
  this->n = n;
  this->angle = 360. / n;
  this->lengh = lengh;
  this->diff = diff;
}

/**
Vx = x軸入力量
Vy = y軸入力量
W = 角速度
*/
double OmniPower::getPower(double vx, double vy, double w) {
  return -1 * sin((this->n - 1) * this->angle + this->diff) +
         cos((this->n - 1) * this->angle + this->diff) + this->lengh * w;
}
