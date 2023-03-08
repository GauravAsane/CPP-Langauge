// Accept N numbers from user and accept one number from user and return product of all odd elements.

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


	int Product()
	{
		int iCnt = 0;
		int iMult = 1;

		for(iCnt = (iLength-1); iCnt >= 0; iCnt--)
		{
			if(Arr[iCnt] % 2 != 0)
			{
				iMult = iMult * Arr[iCnt];
			}

		}

		return iMult;
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

	iRet = obj.Product();

	if(iRet == 1)
	{
		cout<<"There is No Odd element in this Array";
	}
	else
	{
		cout<<"Product of odd elements from Array is : "<<iRet<<"\n";
	}

	return 0;
}





