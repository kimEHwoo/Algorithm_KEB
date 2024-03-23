//#include <iostream>
//using namespace std;
//
//int main()
//{
//    int N, M;
//    cin >> N >> M;
//    long long result = 1;
//
//    for (int i = 0; i < M; i++)
//    {
//        result = result * (M - i);
//    }
//
//    for (int i = 1; i <= N; i++)
//    {
//        result = result / i;
//    }
//
//    cout << result;
//
//    return 0;
//}

#include <iostream>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	long long result = 1;

	for (int i = 1; i <= N; ++i) {
		result *= M - N + i;
		result /= i;
	}
	cout << result;
}