//accept number from user and display its digit in reverse

#include <stdio.h>

class Digits
{
public:
	
	int iValue;

	Digits(int No)
	{
		iValue = No;
	}


	void DisplayDigitRev()
	{
		int iDigit = 0;
		int Temp = iValue;

		if(Temp < 0)
		{
			Temp = -Temp;
		}

		while(Temp != 0)
		{
			iDigit = Temp % 10;

			printf("%d\t",iDigit);

			Temp = Temp / 10;
		}
	}

};



int main()
{
	int iNo = 0;

	printf("Enter the Number : \n");
	scanf("%d",&iNo);

	Digits dobj(iNo);

	dobj.DisplayDigitRev();

	return 0;
}