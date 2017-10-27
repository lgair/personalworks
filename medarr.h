//Array Median header file
#pragma once

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

class median
{
private:
	int n;//size of median arr
	
public:
	//default and copy constructor
	median();
	median(const median & obj);
	//overloaded asignment operator
	median & operator=(const median & obj);
	//Destructor
	~median();

	//-------------Accessors & Mutators--------------------------
	
	//PRE: Arrays must exist & must be sorted
	//PARAM: arr1 and arr2 =  arrays to be sorted
	//POST: Returns value of median as a double
	double findMedian(vector<int>& arr1, vector<int>& arr2) const;
	
	//PRE: Median object exists or is in scope
	//PARAM: N/A
	//POST: Returns size of the median object
	int size() const;

	//PRE: Median object exists or is in scope
	//PARAM: arr2 = arr to fiind first value of
	//POST: Returns value at the beginning of array
	int peekfirst(vector<int>& arr2) const;

	//PRE: Median object exists or is in scope
	//PARAM: arr1 = arr to find last value of
	//POST:
	int peeklast(vector<int>& arr1) const;



};

