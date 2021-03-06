/**
 * Cengiz Mardin
 * 22.11.2012
 **/

#include <stdio.h>

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

double zweierfolge(double epsilon, double start);
double _zweierfolge(double epsilon, double start, int n);
static double _abs(double d);
static double _pow(double d, int exp);

double _zweierfolge(double epsilon, double a, int n){
	double ret;
	
	ret = _pow(2/(double)(2*n-1),2) * (2*n*n-2*n+1) + ((a-1)/((double)n+1));
	
	if(_abs(ret-a)<epsilon)
		return ret;
	
	return _zweierfolge(epsilon, ret, n+1);
}




double zweierfolge(double epsilon, double start){
	return _zweierfolge(epsilon, start, 33);
}

int main(){
	printf(": %f\n", zweierfolge(0.0001, 33));
	
	return 0;
}
