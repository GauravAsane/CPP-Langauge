// Accept N numbers from user and Display all such numbers which contains 3 digits in it;

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
		int Count = 0;
		int iDigit = 0;
		int Temp = 0;
		
		cout<<"Numbers which contains 3 digits are :\n";

		for(iCnt = 0; iCnt < iLength; iCnt++)
		{
			Temp = Arr[iCnt];

			while(Temp != 0)
			{
				Count++;
				Temp = Temp / 10;
			}

			if(Count == 3)
			{
				cout<<Arr[iCnt]<<"\t";
			}

			Count = 0;

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



