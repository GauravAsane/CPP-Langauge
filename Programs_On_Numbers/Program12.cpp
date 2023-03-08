// Accept one number from user and display its summation of all non factors on screen.


#include <iostream>

using namespace std;

class Numbers
{
	public:
		int iValue;
		int iSum = 0;

	Numbers()
	{
		iValue = 0;
	}

	void Accept()
	{
		cout<<"Enter the Number : \n";
		cin>>iValue;
	}

	void NonFactSum()
	{
		int iCnt = 0;

		if(iValue <= 0)
		{
			cout<<"Enter Valid Number\n";
			return;
		}

		for(iCnt = 1 ; iCnt < iValue ; iCnt++)
		{
			if( iValue % iCnt != 0)
			{
				iSum = iSum + iCnt;		
			}
		}	
			
	}

	void Display()
	{
		if(iValue <= 0)
		{
			return ;
		}
		else
		{
			cout<<"Addition of non factors of "<<iValue<< " is : "<<iSum<<"\n";
		}
		
	}

};

int main()
{
	Numbers obj;

	obj.Accept();
	obj.NonFactSum();
	obj.Display();


	return 0;
}