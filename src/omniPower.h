#ifndef NIIROBOKEN_OMNI_POWER_H
#define NIIROBOKEN_OMNI_POWER_H

class OmniPower {
 public:
  OmniPower(unsigned int n, double lengh, double diff);
  double getPower(double vx, double vy, double w);

 private:
  /** ホイール数 */
  unsigned int n;
  /** 中心角 */
  double angle;
  /** 中心からの距離 */
  double lengh;
  /** 位相差 */
  double diff;
};

#endif
