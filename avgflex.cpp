# include <iostream>
using namespace std;

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
        sort(arr,arr+n);
        int count=0;
        for(int i=0; i<n; i++){
            if(i>n-i-1 || arr[i]==arr[n-i-1]){
                count++;

            }
        }
        cout<<count;


    }
    return 0;
}