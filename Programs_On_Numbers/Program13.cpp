// Accept one number from user and display difference between summation of all  its factors and non factors on screen.

#include <iostream>

using namespace std;

class Numbers
{
	public:
		int iValue;
		int Diff;

	Numbers()
	{
		iValue = 0;
		Diff = 0;
	}

	void Accept()
	{
		cout<<"Enter the Number : \n";
		cin>>iValue;
	}


	void FactDiff()
	{
		int iCnt = 0;
		int iSum1 = 0;
		int iSum2 = 0;

		if(iValue <= 0)
		{
			cout<<"Enter valid Number\n";
			return;
		}

		for(iCnt = 1 ; iCnt < iValue ; iCnt++)
		{
			if( iValue % iCnt != 0)
			{
				iSum1 = iSum1 + iCnt;		
			}
			else
			{
				iSum2 = iSum2 + iCnt;
			}
		}

		Diff = iSum2 - iSum1;
		
	}

	void Display()
	{
		if(iValue <= 0)
		{
			return;
		}
		else
		{
			cout<<"Difference of factors and non factors of "<<iValue<<" is : "<<Diff<<"\n";
		}
	}
};

int main()
{
	Numbers obj;

	obj.Accept();

	obj.FactDiff();

	obj.Display();



	return 0;
}