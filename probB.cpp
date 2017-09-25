#include<bits/stdc++.h>
using namespace std;
vector< pair< int, pair<int,char> > >pii;
int main()
{
int n;
cin>>n;
char id;
int deadline,profit;
for(int i=0;i<n;i++)
{
cin>>id>>deadline>>profit;
pii.push_back(make_pair(profit,make_pair(deadline,id)));
}
sort(pii.begin(),pii.end());
int time=0;
{
vector<char> ch;
for(int i=pii.size()-1;i>=0;i--)
{
if(time<pii[i].second.first)
{
ch.push_back(pii[i].second.second);
time++;
}
}
for(int i=0;i<ch.size();i++)
{
cout<<ch[i]<<endl;
}
}
}

