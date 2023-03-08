// Accept one number from user and display even factors of that number on screen.

#include <iostream>

using namespace std;

class Numbers
{
	public:
		int iValue;

	Numbers()
	{
		iValue = 0;
	}

	void Accept()
	{
		cout<<"Enter the Number : \n";
		cin>>iValue;
	}

	void DisplayEvenFact()
	{
		int iCnt = 0;

		if(iValue < 0)
		{
			cout<<"Enter valid number\n";
			return;
		}

		for(iCnt = 2; iCnt <= iValue/2; iCnt+=2)
		{
			if( iValue % iCnt == 0)
			{
				if(iCnt % 2 == 0)
				{
					cout<<iCnt<<"\t";
				}
				
			}
		}
	
	}


};



int main()
{

	Numbers obj;

	obj.Accept();

	obj.DisplayEvenFact();

	return 0;
}