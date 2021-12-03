# include <iostream>
using namespace std;
#include <unordered_map>

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(n<12){
            cout<<"NO"<<endl;
            // return 0;
        }
        else if(n==12){
            cout<<"yes"<<endl;
        }

    }
    return 0;
}