/**
 * Cengiz Mardin
 * 22.11.2012
 **/

#include <stdio.h>

static double piWallis(double epsilon);
static double _piWallis(double a, int i, double epsilon);
static double _abs(double d);


static double _piWallis(double a, int i, double epsilon){
	double i2 = (double)i;
	double ret = a * (1 + (1 / (4*i2*i2-1)));
	
	if(_abs(a-ret)>epsilon)
		return _piWallis(ret,i+1,epsilon);
	else
		return 2*ret;
}

static double _abs(double d){
	if(d<0) return -d;
	return d;
}

static double piWallis(double epsilon){
	return _piWallis(1, 1, epsilon);
}

int main(){
	printf("%f\n", piWallis(0.0001));
	
	return 0;
}
