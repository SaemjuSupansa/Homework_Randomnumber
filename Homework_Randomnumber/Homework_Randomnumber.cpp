#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int num = 1, ran, Lucky;
	srand(time(NULL));
	ran = 1 + rand() % 20;
	cout << ran << endl;
	for(int i=1; i<=ran; i++)
	{
		cout << "Enter luckynumber " << num << " (1-20): ";
		cin >> Lucky;
		num++;
		if (Lucky == ran)
		{
			cout << "Lucky!!!!!!\n" << "You got 1,000,000 bath\n"; 
			break;
		}
		else
			cout << "This is wrong number\n";
	}
	
	return 0;
}


