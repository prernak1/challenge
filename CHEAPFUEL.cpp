#include <iostream>
using namespace std;

int main() {
 int t;
 cin>>t;
    while(t--)
    {
        int x,y,a,b,k;
        cin>>x>>y>>a>>b>>k;
         
         x=x+(k*a);
         y=y+(k*b);
          if(x<y)
          {
              cout<<"petrol"<<endl;
          }
          else if(x>y){
          cout<<"diesel"<<endl;
          }
          else
          cout<<"same price"<<endl;
    }
	return 0;
}
