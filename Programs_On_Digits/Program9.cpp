//accept number from user and return the multiplication of all digits

#include <stdio.h>

class Digits
{
public:

	int iValue;

	Digits(int No)
	{
		iValue = No;
	}

	int MultDigits()
	{
		int iDigit = 0;
		int Count = 0;
		int iMult = 1;
		int Temp = iValue;

		if(Temp < 0)
		{
			Temp = -Temp;
		}

		while(Temp != 0)
		{
			iDigit = Temp % 10;

			if(iDigit != 0)
			{
				iMult = iMult * iDigit;
			}
			

			Temp = Temp / 10;
		}

		return iMult;
	}
};



int main()
{
	int iNo = 0;
	int iRet = 0;

	cout<<"Enter the Number : \n";
	scanf("%d",&iNo);

	Digits dobj(iNo);

	iRet = dobj.MultDigits();

	cout<<"Multiplication of Digits in number "<<iNo<<" is : "<<iRet<<"\n";


	
	return 0;
}