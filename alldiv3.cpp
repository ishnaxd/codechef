# include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==0){
                arr[i]=0;
                continue;
            }
            arr[i]= a % 3;
        }
        int c1=0;
        int c2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==1){
                c1++;
            }
            else if(arr[i]==2){
                c2++;
            }
        }
        if(c1==c2){
            cout<<c1<<endl;
        }
        else if( c2>c1 && (c2-c1)%3==0 ){
            cout<<c1+2*((c2-c1)/3)<<endl;

        }
        else if(c1>c2 && (c1-c2)%3==0){
            cout<<c2+2*((c1-c2)/3)<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}