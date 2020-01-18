#include "stats.h"

statistician::statistician(){};

void statistician::next(double r){
	/*count++;*/
	total+=r;
	if (r < tinyest){
		tinyest = r;
	};
	if (r > largest){
		largest = r;
	};
};

void statistician::reset(){
	 /*count = 0;*/
	 total = 0;
	};


int statistician::length( ) const{
	return 0;
	/*return count;*/
};


double statistician::sum() const{
	return total;
};


double statistician::mean( ) const{
	return 0;
	/*return total/count;*/
};


double statistician::minimum( ) const{
	return tinyest;
};


double statistician::maximum( ) const{
	return largest;
};





