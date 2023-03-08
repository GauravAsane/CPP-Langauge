// Accept N numbers from user and accept one number from user and check whether this number is present or not;

#include <iostream>
using namespace std;

class ArrayX
{
public:

	int iLength;
	int *Arr;
	int No;

	ArrayX(int iSize, int no)
	{
		iLength = iSize;
		Arr = new int[iLength];
		No = no;

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

	bool CheckNum()
	{
		int iCnt = 0;
		bool bret = false;
		

		for(iCnt = 0; iCnt < iLength; iCnt++)
		{
			if(Arr[iCnt] == No )
			{
				bret = true;
				break;
			}

		}
		return bret;
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
	bool bRet = false;

	printf("Enter Number of elements : \n");
	cin>>iSize;

	printf("Enter the Number that you want to Check :\n");
	cin>>iNo;
	
	ArrayX obj(iSize,iNo);

	obj.Accept();

	bRet = obj.CheckNum();

	if(bRet == true)
	{
		cout<<iNo<<" number is present in Array\n";
	}
	else
	{
		cout<<iNo<<" number is  Not present in Array\n";
	}

	return 0;
}
