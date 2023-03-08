//accept number from user and Count Frequency of 2 in it

#include <stdio.h>

class Digits
{
public:

	int iValue;

	Digits(int No)
	{
		iValue = No;
	}

	int CountTwo()
	{
		int iDigit = 0;
		int Count = 0;
		int Temp = iValue;

		if(Temp < 0)
		{
			Temp = -Temp;
		}

		while(Temp != 0)
		{
			iDigit = Temp % 10;

			if(iDigit == 2)
			{
				Count++;
			}

			Temp = Temp / 10;
		}

		return Count;
	}
};


int main()
{
	int iNo = 0;
	int iRet = 0;

	printf("Enter the Number : \n");
	scanf("%d",&iNo);

	Digits dobj(iNo);

	iRet = dobj.CountTwo();

	printf("Frequency of Two in number %d is : %d \n",iNo,iRet);


	
	return 0;
}