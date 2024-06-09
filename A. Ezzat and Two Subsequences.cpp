#include <bits/stdc++.h>
using namespace std;

int main(){
  int ntimes;
  cin >> ntimes;
  for (int i = 0; i < ntimes; i++)
  {
    long long size;
    cin >> size;
    long long arr[size];
    long long sum = 0;
    for (int j = 0; j < size; j++)
    {
      cin >> arr[j];
      sum += arr[j];
    }
    sort(arr,arr+size);
    float res = arr[size-1];
    res += (float)(sum-res)/(float)(size-1);
    cout << fixed << setprecision(6) << res << endl;
  }
}