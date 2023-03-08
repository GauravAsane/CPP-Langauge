// Accept N numbers from user and accept one number from user and return index of first occurance of that number

#include <iostream>
using namespace std;

class ArrayX
{
public:

	int iLength;
	int *Arr;
	int No;

	ArrayX(int iSize, int no )
	{
		iLength = iSize;
		No = no;
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


	int FirstOccur()
	{
		int iCnt = 0;
		int Count = 0;

		for(iCnt = 0; iCnt < iLength; iCnt++)
		{
			if(Arr[iCnt] == No )
			{
				break;
			}

		}

		return iCnt;
	}



	~ArrayX()
	{
		delete []Arr;
	}

};


int main()
{

	int iSize = 0;
	int iNo = 0;
	int iRet  = 0;

	cout<<"Enter Number of elements : \n";
	cin>>iSize;

	cout<<"Enter the Number that you want to Check :\n";
	cin>>iNo;

	ArrayX obj(iSize,iNo);

	obj.Accept();

	iRet = obj.FirstOccur();

	if(iRet >= iSize)
	{
		cout<<"Number "<<iNo<<" is not there in Array\n";
	}
	else
	{
		cout<<"First Occurance of "<<iNo<<" number is at index : "<<iRet<<"\n";
	}

	return 0;
}



