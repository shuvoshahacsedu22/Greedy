#include<bits/stdc++.h>
using namespace std;
int process(string s)
{
if(s.size()==5)
{
return ((s[0]-'0')*10+(s[1]-'0'))*60+((s[3]-'0')*10+(s[4]-'0'));
}
else
{
return (s[0]-'0')*60 + ((s[2]-'0')*10+(s[3]-'0'));
}
}
int main()
{
int n=6;
string arr[]  = {"9:00",  "9:40", "9:50",  "11:00", "15:00", "18:00"};
string dep[]  = {"9:10", "12:00", "11:20", "11:30", "19:00", "20:00"};
int dp[6],ar[6];
int time[5000];
memset(time,0,sizeof time);
int result=0;
for(int i=0;i<n;i++)
{
ar[i]=process(arr[i]);
dp[i]=process(dep[i]);
cout<<ar[i]<<" "<<dp[i]<<endl;
for(int j=ar[i];j<=dp[i];j++) time[j]++;
}
for(int i=0;i<=1440;i++) result=max(time[i],result);
cout<<result<<endl;
}

