/*Given an array of integers, sort the array into a wave like array, namely 
a1 >= a2 <= a3 >= a4 <= a5..... */
#include <vector>
#include <iostream>
using namespace std;
void wavesort()
{
	vector<int> numbers;
	numbers.push_back(8);
	numbers.push_back(9);
	numbers.push_back(6);
	numbers.push_back(7);

	for(int i = 0; i<numbers.size() - 1; i++)
	{
		if(i%2 == 0) //even
		{
			//a[i] >= a[i+1]
			if(numbers[i] <= numbers[i+1])
			{
				//swap
				int temp = numbers[i];
				numbers[i] = numbers[i+1];
				numbers[i+1] = temp;
			}
		}
		else //odd
		{
			//a[i] <= a[i+1]
			if(numbers[i] >= numbers[i+1])
			{
				//swap								
				int temp = numbers[i];
				numbers[i] = numbers[i+1];
				numbers[i+1] = temp;
			}
		}
	}
	for(int index = 0; index < numbers.size(); index++)
	{
		cout<<"Elements after wave sort are "<<numbers.at(index)<<endl;
	}
}