#include "Arduino.h"

#ifndef AHRS_h
#define AHRS_h

class AHRS
{
private:
	float q0, q1, q2, q3;		// quaternion elements representing the estimated orientation
	float exInt, eyInt, ezInt;	// scaled integral error
	
public:
	AHRS();
	void AHRSupdate(float gx, float gy, float gz, float ax, float ay, float az, float mx, float my, float mz, float *yaw, float *pitch, float *roll);
};

#endif
//=====================================================================================================
// End of file
//=====================================================================================================