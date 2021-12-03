# include <iostream>
using namespace std;

int main()
{   int t;
    cin>>t;
    while(t--){
        int n,l,x;
        cin>>n>>l>>x;
        int r=n-l;
        if(l<r){
            cout<<x*l<<endl;
        }
        else{
            cout<<r*x<<endl;
        }


    }
    
    return 0;
}