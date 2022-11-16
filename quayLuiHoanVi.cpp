/*ý tưởng :
cho 1 hàm check để ktra, setup nó = true
nếu check[j] = true, thì ta cho bit tiếp theo =j;
rồi đặt check[j]=false;
nếu = n thì in ra kqua , còn không thì lặp lại 
với bit tiếp theo
, và sau khi lặp lại thì xét lại check[j]=true;
*/
#include <bits/stdc++.h>
void init(int &n, bool check[])
{
    std::cin >> n;
    for (int i = 1; i <= 100; ++i)
    {
        check[i] = true;
    }
}
void display(int n, int arr[])
{
    for (int i = 1; i <= n; ++i)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}
void back_Tracking(int j, bool check[], int arr[], int n)
{
    for (int i = 1; i <= n; ++i)
    {
        if (check[i])
        {
            arr[j] = i;
            check[i] = false;
            if(j==n) {
                display(n,arr);
            }
            else{
                back_Tracking(j+1,check,arr,n);
            }
            check[i]=true;
        }
    }
}
int main()
{
    int n;
    int arr[100];
    bool check[100];
    init(n,check);
    back_Tracking(1,check,arr,n);
}