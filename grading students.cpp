#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int grade[n];
    for(int i=0;i<n;i++){
        cin>>grade[i];
    
    }
    for(int i=0;i<n;i++){
        if(grade[i]<38){
            cout<<grade[i]<<endl;
            }
            else if (grade[i]>=38) {
            int remainder=grade[i]%5;
            int diff= 5-remainder;
            if (diff<3) {
            cout<<grade[i]+diff<<endl;
            }else {
            cout<<grade[i]<<endl;
            }
            }
        
    }return 0;
}
