#ifndef PID_H
#define PID_H
#include <iostream>
using namespace std;
class PID {
public:
  /*
  * Errors
  */
  double p_error = 0.0;
  double i_error = 0.0;
  double d_error = 0.0;
  double i_sum = 0.0;
  double prev_cte = 0.0;
  double dp [3] = {1,1,1};
  double p [3] = {0,0,0};
  double err = 0.0;
  double old_err = 0.0;
  int cnt1 = 0;
  int cnt2 = 0;
  int cnt3 = 0;
  int i = 0;
  bool flag = false;
  double tol = 0.5;
  double best_err = numeric_limits<double>::max();


  /*
  * Coefficients
  */ 
  double Kp;
  double Ki;
  double Kd;
  int counter;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();
};

#endif /* PID_H */
