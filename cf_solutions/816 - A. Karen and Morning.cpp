#include<bits/stdc++.h>
using namespace std;

int main()
{
    int hh, mm, ans, arr[30] = {0, 70, 140, 210, 280, 350, 601, 601, 601, 601, 601, 671, 741, 811, 881, 951, 1202, 1202, 1202, 1202, 1202, 1272, 1342, 1412, 1440};
    char c;
    scanf("%d %c %d", &hh, &c, &mm);
    int temp1 = hh / 10;
    int temp2 = hh % 10;
    int temp3 = 10 * temp2 + temp1;

    if(mm == temp3 && hh != 6)
        cout << 0 << endl;

    else if(temp3 < mm)
    {
        ans = hh * 60 + mm;
        cout << arr[hh+1] - ans << endl;
    }

    else if(temp3 > mm)
    {
        ans = hh * 60 + mm;
        cout << arr[hh] - ans << endl;
    }

    return 0;
}
