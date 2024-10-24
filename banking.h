#pragma once // usually reliable, however I am also using ifndef define endif for the sake of consistency.
#ifndef BANKING_H
#define BANKING_H
class banking
{
public:
	banking(); // techinically a constructor, functions more like main
	void printROI(); // prints return on investment in a formatted manner
private: // private variables, main should not be able to read these.
	double init_Dep = 0;
	double mon_Dep = 0;
	double ann_Int = 0;
	int numYears = 0;
};
#endif
