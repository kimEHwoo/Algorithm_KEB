//#include <iostream>
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 0; j < i; j++) 
//		{
//			cout << "*";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}

#include <iostream>
using namespace std;

int main() {
	string star = "";
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		star += "*";
		cout << star << endl;
	}
	return 0;
}