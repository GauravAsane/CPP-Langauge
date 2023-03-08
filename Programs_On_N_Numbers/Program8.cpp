// Accept N numbers from user and return the difference between largest and smallest number.

#include <iostream>
using namespace std;

class ArrayX
{
public:

	int iLength;
	int *Arr;

	ArrayX(int iSize)
	{
		iLength = iSize;
		Arr = new int[iLength];

	}

	void Accept()
	{
		int iCnt = 0;

		if(Arr == NULL)
		{
			cout<<"Unable to Allocate the memory\n";
			return;
		}

		cout<<"Enter the Elements : \n";

		for(iCnt = 0 ; iCnt < iLength ; iCnt++)
		{
			cin>>Arr[iCnt];
		}
	}


	int Difference()
	{
		int iCnt = 0;
		int iMin = Arr[0];
		int iMax = Arr[0];
		int diff = 0;
		

		for(iCnt = 0; iCnt < iLength; iCnt++)
		{
			if(Arr[iCnt] < iMin)
			{
				iMin = Arr[iCnt];
			}
			else if(Arr[iCnt] > iMax)
			{
				iMax = Arr[iCnt];
			}

		}
		diff = iMax - iMin;

		return diff;

	}


	~ArrayX()
	{
		delete []Arr;
	}

};


int main()
{

	int iSize = 0;
	int iRet = 0;

	printf("Enter Number of elements : \n");
	cin>>iSize;
	
	ArrayX obj(iSize);

	obj.Accept();

	iRet = obj.Difference();
	cout<<"Difference between Largest and Smallest element from Array is : "<<iRet<<"\n";

	return 0;
}


