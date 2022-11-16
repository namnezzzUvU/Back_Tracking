/*
ta xét với phần tử đầu làm mẫu,
ta cho nó tăng dần và xét các trường hợp
có thẻ có với bit đầu đó.
ta dùng biến current sum để tính.
mỗi trường hợp thỏa mãn ta sẽ +j vào
curSum. Nếu curSum==n thì in ra , còn nhỏ hơn thì ta
tiếp tục với cá trường hợp khác.
các bit đầu ta xét từ 1->n
các trường hợp có thể xảy ra là 
các bit sau với giá trị từ 1->max
với max là giá trị của bit đầu.
*/
#include <bits/stdc++.h>
using namespace std;
int arr[100], n;
void display(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void genNext(int i, int k, int curSum)
{
    for (int j = 1; j <= k; ++j)
    {
        if (curSum <= n)
        {
            arr[i] = j;
            curSum += j;
            if (curSum == n)
            {
                display(i);
            }
            else
            {
                genNext(i + 1, j, curSum);
            }
            curSum -= j;
        }
    }
}
int main() {
    cin>>n;
    genNext(1,n,0);
}