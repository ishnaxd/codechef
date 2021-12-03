# include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b,k;
        cin>>x;
        cin>>y>>a>>b>>k;
        x+=k*a;
        y+=k*b;
        if(x<y){
            cout<<"PETROL\n";
        }
        else if(x>y){
            cout<<"DIESEL\n";
        }
        else{
            cout<<"𝚂𝙰𝙼𝙴 𝙿𝚁𝙸𝙲𝙴\n";
        }

        
    }
    return 0;
}