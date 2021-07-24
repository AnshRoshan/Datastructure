#include <bits/stdc++.h>
#include <iostream>
#include <array>
#include <vector>

using namespace std;

#define out(st) cout << st << endl ;
#define in(num) cin >> num;

vector <vector<int>> ans;

void permuate(vector<int> &a,long unsigned int index)
{
    if(index==a.size())
    {
        ans.push_back(a);
        return;
    }
    for (long unsigned int i = index; i < a.size(); ++i)
    {
        swap(a[i],a[index]);
        permuate(a,index+1);
        swap(a[i],a[index]);
    }
    return;
}

void permuateSTL(vector<int> &a)
{
    sort(a.begin(),a.end());

}

int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    in(n)
    std::vector<int> a(n);
    for(auto &i :a)
        in(i);

    permuate(a,0);
    for(auto v: ans){
        for(auto i: v)
            cout <<i;
        out("")
    }
    return 0;
}