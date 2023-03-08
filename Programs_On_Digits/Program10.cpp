//accept number from user and return diff between summation of even digits and summation of odd digits

#include <stdio.h>

class Digits
{
public:

	int iValue;

	Digits(int No)
	{
		iValue = No;
	}

	int CountDiff()
	{
		int iDigit = 0;
		int Count = 0;
		int ESum = 0;
		int OSum = 0;
		int Temp = iValue;

		if(Temp < 0)
		{
			Temp = -Temp;
		}

		while(Temp != 0)
		{
			iDigit = Temp % 10;

			if(iDigit % 2 == 0)
			{
				ESum = ESum + iDigit;
			}
			else
			{
				OSum = OSum + iDigit;
			}
			

			Temp = Temp / 10;
		}

		return (ESum - OSum);
	}
};



int main()
{
	int iNo = 0;
	int iRet = 0;

	cout<<"Enter the Number : \n";
	cin>>iNo;

	Digits dobj(iNo);

	iRet = dobj.CountDiff();

	cout<<"Difference between summation Even and odd Digits in number "<<iNo<<" is : "<<iRet<<"\n";


	
	return 0;
}