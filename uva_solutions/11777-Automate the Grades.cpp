#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T, i, term1, term2, term_final, atndnc, ct[3], sum, temp;
    cin>>T;
    for(i = 1; i <= T; ++i)
    {
        cin>>term1>>term2>>term_final>>atndnc>>ct[0]>>ct[1]>>ct[2];
        sum = term1 + term2 + term_final + atndnc;
        if(ct[0] < ct[1])
        {
            temp = ct[1];
            ct[1] = ct[0];
            ct[0] = temp;
        }
        if(ct[0] < ct[2])
        {
            temp = ct[2];
            ct[2] = ct[0];
            ct[0] = temp;
        }
        if(ct[1] < ct[2])
        {
            temp = ct[2];
            ct[2] = ct[1];
            ct[1] = temp;
        }
        ct[0] = (ct[0] + ct[1]) / 2;
        sum += ct[0];
        if(sum >= 90)
            cout<<"Case "<<i<<": A"<<endl;
        else if(sum >= 80)
            cout<<"Case "<<i<<": B"<<endl;
        else if(sum >= 70)
            cout<<"Case "<<i<<": C"<<endl;
        else if(sum >= 60)
            cout<<"Case "<<i<<": D"<<endl;
        else
            cout<<"Case "<<i<<": F"<<endl;
    }

    return 0;
}
