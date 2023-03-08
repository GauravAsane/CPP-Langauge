// Accept one number from user and display its multiplication of factors on screen.

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

	int MultFact()
	{
		int iCnt = 0;
		int iMult = 1;

		if(iValue <= 0)
		{
			return -1;
		}

		for(iCnt = 1; iCnt <= iValue/2; iCnt++)
		{
			if( iValue % iCnt == 0)
			{
				iMult = iMult * iCnt;		
			}
		}
		return iMult;	
	}


};

int main()
{

	int iRet = 0;

	Numbers obj;

	obj.Accept();

	iRet = obj.MultFact();

	if(iRet == -1)
	{
		cout<<"Enter valid number"<<"\n";
	}
	else
	{
		cout<<"Multiplication of factors of "<<obj.iValue<<" is : "<<iRet<<"\n";
	}

	return 0;
}