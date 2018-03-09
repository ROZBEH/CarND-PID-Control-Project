#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double in1, double in2, double in3) {
	Kp = in1;
	Ki = in2;
	Kd = in3;
	counter = 0;
	p[0] = Kp;
	p[1] = Ki;
	p[2] = Kd;
}

void PID::UpdateError(double cte) {
	

	i_sum += cte;
	p_error = -p[0] * cte;
	i_error = -p[1]*(i_sum);
	d_error = -p[2]*(cte - prev_cte);
	prev_cte = cte;

}

double PID::TotalError() {
	return prev_cte*prev_cte ;

}

