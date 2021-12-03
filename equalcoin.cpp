# include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        int y;cin>>x>>y;
        if(x%2==0){
            if(x==0 && y%2==0){
                cout<<"yes"<<endl;
            }
            else if(x==0 && y%2!=0){
                cout<<"no"<<endl;
            }
            else{
                cout<<"yes"<<endl;
            }
        }
        else{
            cout<<"no"<<endl;
        }
    }
    
    return 0;
}