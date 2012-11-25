/**
 * Cengiz Mardin
 * 22.11.2012
 **/

#include <stdio.h>
#include <math.h>

static double piArchimedes(double epsilon);
static double _piArchimedes(double u, int i, double epsilon);
static double _abs(double d);
static double _pow(double d, int exp);

static double piArchimedes(double epsilon){
	return _piArchimedes(3,2,epsilon);
}

double _piArchimedes(double u, int i, double epsilon){
	double ret;
	
	
	ret = (2*u) / (sqrt(2+2*sqrt(1-_pow(u/(6*_pow(2, i-2)),2))));
	
	if(isnan(ret)){
		/* printf("d: %f\n",sqrt(1-_pow(u/(6*_pow(2, i-2)),2))); */
		return 0;
	}
	
	if(_abs(u-ret)<epsilon)
		return ret;
	
	return _piArchimedes(ret, i+1, epsilon);
}

static double _abs(double d){
	if(d<0) return -d;
	return d;
}

static double _pow(double b, int exp){
	double r = 1;
	if(exp==0) return 1;
	while(exp--){
		r *= b;
	}
	return r;	
}

int main(){
	printf(": %f\n", piArchimedes(0.001));
	
	return 0;
}
