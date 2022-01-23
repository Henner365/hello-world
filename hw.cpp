#include <iostream>

// runnable.

template <typename T, int max> int minArray(T arr[], int n)  {

	int smt = max;
	for (int i = 0; i < n; i++) 
	{
		if (arr[i] < smt) 
         	smt = arr[i]; 
	}
	
	return smt;

}




int main()
{ 
	int iArr[] ={10,21,15,17};
	std::cout<<" min value : "<<minArray  <int,100>(iArr,4);
	std::cout<<"Jeg er på toppen af verden .\n";
	


  	return 0;
}
//fin code.
