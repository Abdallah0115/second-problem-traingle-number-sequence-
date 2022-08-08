#include<iostream>
using namespace std;
int triangle(int num)
{
	switch (num) {
	case 1:return 1;
		break;
	default:return num + triangle(num - 1);
		break;
	}

}
int main()
{
	cout << endl << triangle(10)<<endl;
	return 0;
	system("pause");
}