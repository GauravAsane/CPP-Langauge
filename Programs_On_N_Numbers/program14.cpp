// Accept N numbers from user and accept Range, Display all elements from that range

#include <iostream>
using namespace std;

class ArrayX
{
public:

	int iLength;
	int *Arr;
	int iStart;
	int iEnd;

	ArrayX(int iSize, int First , int Last )
	{
		iLength = iSize;
		iStart = First;
		iEnd = Last;
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


	void Range()
	{
		int iCnt = 0;
		int Count = 0;

		cout<<"Numbers having range of "<<iStart<<" to "<<iEnd<<" is\n";

		for(iCnt = 0; iCnt < iLength ; iCnt++)
		{
			if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
			{
				cout<<Arr[iCnt]<<"\t";
				Count++;
			}
		}

		if(Count == 0)
		{
			cout<<"There is No elements in range of "<<iStart<<" to "<<iEnd<<"\n";
		}

	}



	~ArrayX()
	{
		delete []Arr;
	}

};


int main()
{

	int iSize = 0;
	int iRet  = 0;
	int First = 0;
	int Last = 0;

	cout<<"Enter Number of elements : \n";
	cin>>iSize;


	cout<<"Enter the starting point : \n";
	cin>>First;

	cout<<"Enter the Ending point : \n";
	cin>>Last;

	ArrayX obj(iSize,First , Last);

	obj.Accept();

	obj.Range();


	return 0;
}

