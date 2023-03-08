// Accept N numbers from user and return difference between summation of even elements and summation of odd elements.

#include <iostream>
using namespace std;

class ArrayX
{
public:

	int iLength;
	int *ptr;

	ArrayX(int iSize)
	{
		iLength = iSize;
		ptr = new int[iLength];

	}

	void Accept()
	{
		int iCnt = 0;

		if(ptr == NULL)
		{
			cout<<"Unable to Allocate the memory\n";
			return;
		}

		cout<<"Enter the Elements : \n";

		for(iCnt = 0 ; iCnt < iLength ; iCnt++)
		{
			cin>>ptr[iCnt];
		}
	}

	int Difference()
	{
		int iCnt = 0;
		int ESum = 0;
		int OSum = 0;
		int diff = 0;

		for(iCnt = 0; iCnt < iLength; iCnt++)
		{
			if(ptr[iCnt] % 2 == 0)
			{
				ESum = ESum + ptr[iCnt];
			}
			else
			{
				OSum = OSum + ptr[iCnt];
			}
		}


		diff = ESum - OSum;

		return diff;
	}

	~ArrayX()
	{
		delete []ptr;
	}

};	



int main()
{

	int iRet = 0;
	int iSize = 0;;

	cout<<"Enter Number of elements : \n";
	cin>>iSize;

	ArrayX obj(iSize);

	obj.Accept();

	iRet = obj.Difference();
	printf("Difference between summation of even elements and odd elements is : %d\n",iRet);

	

	return 0;
}