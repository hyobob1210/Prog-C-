#include <iostream>
using namespace std;

int main()
{
    int n;
    // 합과 가장 큰 값을 출력하시오(sum, max)
    int sum;
    cin >> n;
    for (int i = 1; i < n; i++)
        sum : i;



    cout << "몇개의 데이터? : ";
    cin >> n;

    int* a = new int[n];        // 동적 메모리 할당 
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    delete a;                  // 메모리 해제(반납)
}
