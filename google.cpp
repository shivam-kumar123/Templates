#include<bits/stdc++.h>
#define mod 1e9+7
#define modulo 998244353
using namespace std;

typedef unsigned long long int  ull;
typedef long long int ll;

template<typename T> T max(T a, T b, T c)
{
    return max(a, max(b, c));
}

template<typename T> T min(T a, T b, T c)
{
    return min(a, min(b, c));
}

void read_input_from_file()
{
    #ifndef ONLINE_JUDGE
    freopen("input_file.txt","r",stdin);
    freopen("output_file.txt","w",stdout);
    #endif
}

void shivam()
{
    
}

int main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // read_input_from_file();
    ll t = 1;
    cin>>t;
    for(ll i=1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        shivam();
    }
    auto end = std::chrono::high_resolution_clock::now();
    //cout <<"\nExecution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds "<<"\n";
    return 0;
}