// Accept N numbers from user and Display all such elements which are multiple of 11.

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

	void Display()
	{
		int iCnt = 0;
		int chk = 0;


		cout<<"Number which is multiple of  11 : \n";

		for(iCnt = 0; iCnt < iLength; iCnt++)
		{
			if(Arr[iCnt] % 11 == 0)
			{
				cout<<Arr[iCnt]<<"\t";
				chk++;
			}

		}

		if(chk == 0)
		{
			cout<<"There is no such elements which is multiple of 11";
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

	printf("Enter Number of elements : \n");
	cin>>iSize;
	
	ArrayX obj(iSize);

	obj.Accept();
	obj.Display();



	return 0;
}



