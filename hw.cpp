#include <iostream>
// runnable.

template <typename T, int max> int minArray(T arr[], int n)  {

<<<<<<< HEAD
	int x=0,v = (int) 'b';// from 'a' to 'b' 29-7-24

	T mArr[i];
	for (x=0;x<i;x++)
	mArr[x]=v++; 
	std::cout<<mArr[3];
=======
	int smt = max;
	for (int i = 0; i < n; i++) 
	{
		if (arr[i] < smt) 
         	smt = arr[i]; 
	}
	
	return smt;

>>>>>>> fa485c1ff362cd3e9563e5bf9a4f994d74902f49
}




int main()
{ 
<<<<<<< HEAD

	mArray  <char,5>();
	std::cout<<"Jeg er på git delen af verden .\n";
	//<char,5>mArray();
=======
	int iArr[] ={10,21,15,17};
	std::cout<<" min value : "<<minArray  <int,100>(iArr,4);
	std::cout<<"Jeg er pÃ¥ toppen af verden .\n";
	
>>>>>>> fa485c1ff362cd3e9563e5bf9a4f994d74902f49


  	return 0;
}
//fin code.

