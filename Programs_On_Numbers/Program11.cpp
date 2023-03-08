// Accept one number from user and display its all non factors on screen.

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

	void DisplayNonFact()
	{
		int iCnt = 0;
		int iMult = 1;

		if(iValue <= 0)
		{
			cout<<"Enter valid number\n";
			return;
		}

		cout<<"Non Factors of "<<iValue<<"\n";

		for(iCnt = 1 ; iCnt < iValue ; iCnt++)
		{
			if( iValue % iCnt != 0)
			{
				cout<<iCnt<<"\t";		
			}
		}
		cout<<"\n";
		
	
	}

};

int main()
{
	Numbers obj;

	obj.Accept();

	obj.DisplayNonFact();


	return 0;
}