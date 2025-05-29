#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	
	vector<int>arr{ 12,24,78 };

	sort(arr.begin(),arr.end());


	for (int num : arr)
	{

		cout << num<< endl;

	}

	return 0;

}