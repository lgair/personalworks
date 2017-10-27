#include <iostream>
#include "medarr.h"
using namespace std;

//Array Median implementation file
//Note implementation should run in O(log(m+n)) where m & n are size of the 
//2 arrays respectively

median::median()
{
	n = 0;
}
median::median(const median & obj)
{
}


double median::findMedian(vector<int>& arr1, vector<int>& arr2) const
{
	double medianVal = 0;
	medianVal = (peeklast(arr1) + peekfirst(arr2))/2;
	return medianVal;

}

int median::peeklast(vector<int>& arr1)
{
	int n = median.size()-1;
	return arr1[n];
}

int median::peekfirst(vector<int>& arr2)
{
	return arr2[0];
}
//returns size of median object
int median::size() const
{
	return n;
}
