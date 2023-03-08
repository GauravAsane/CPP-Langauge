// Accept N numbers from user and Display Summation of digits of each number


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


	void DisplaySum()
	{
		int iCnt = 0;
		int iDigit = 0;
		int Temp = 0;
		int iSum = 0;
		

		for(iCnt = 0; iCnt < iLength; iCnt++)
		{
			Temp = Arr[iCnt];

			while(Temp != 0)
			{
				iDigit = Temp % 10;
				iSum = iSum + iDigit;
				Temp = Temp / 10;
			}
			cout<<"Summation of  digits of "<<Arr[iCnt]<<" are	:	"<<iSum<<"\n";

			iSum = 0;

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

	obj.DisplaySum();

	return 0;
}
