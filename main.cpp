#include <iostream>

using namespace std;

int main()
{
    int k,n,w,k1;
    cin>>k>>n>>w;
    k1=0;
    for(int i=1;i<=w;i++){
        k1+=k*i;
    }
    if(k1>n)
    cout<<k1-n<<endl;
    else
        cout<<"0"<<endl;
    return 0;
}
