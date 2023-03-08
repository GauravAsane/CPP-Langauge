// Accept one number from user and display its factors in decreasing order on screen.

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

	void DisplayFactRev()
	{
		int iCnt = 0;
		int iMult = 1;

		if(iValue <= 0)
		{
			cout<<"Enter valid number\n";
			return;
		}

		cout<<"Reverse Factors of "<<iValue<<" :\n";

		for(iCnt = iValue-1; iCnt > 0; iCnt--)
		{
			if( iValue % iCnt == 0)
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

	obj.DisplayFactRev();


	return 0;
}