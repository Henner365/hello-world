#include <iostream>
#include <vector>


template <typename T, int i> void mArray()  {

	int x=0,v = (int) 'a';
	T mArr[i];
	for (x=0;x<i;x++)
	mArr[x]=v++; 
	std::cout<<mArr[3];
}




int main()
{ 

	mArray  <char,5>();
	std::cout<<"Jeg er på git delen af verden .\n";
	//<char,5>mArray();


  	return 0;
}
//fin code.
