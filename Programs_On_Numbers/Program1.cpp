
// Accept two numbers from user and Divide that two numbers. 

#include <stdio.h>

class Numbers 
{
	public:

	float iNo1;
	float iNo2;
	float iAns;


	Numbers()
	{
		iNo1 = 0.0f;
		iNo2 = 0.0f;
		iAns = 0.0f;
	}
		
	void Accept()
	{
		printf("Enter the First Number :\n");
		scanf("%f",&iNo1);

		printf("Enter the second number : \n");
		scanf("%f",&iNo2);
	}

	void Division()
	{

		iAns = iNo1 / iNo2;
	
	}

	void Display()
	{

		if(iNo2 == 0.0)
		{
			printf("Error : Denominator number should not be 0 \n");
			return;			
		}
		else
		{
			printf("Division is : %f\n",iAns);
		}
	}
};



int main()
{

	Numbers obj;

	obj.Accept();
	obj.Division();
	obj.Display();

	return 0;
}