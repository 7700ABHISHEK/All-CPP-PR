#include<iostream>

using namespace std;

main(){
    int i, j;
    
    for(i=1; i<=5; i++){
        for(j=1; j<=5; j++){
            if((i==1&&j==2)||(i==2&&j==4)||(i==2&&j==5)||(i==5&&j==4)||(i==4&&j==4)||(i==4&&j==1)||(i==4&&j==1)||(i==4&&j==2)||(i==2&&j==2)){
                cout << "  ";
            }else{
                cout<<"* ";
            }
            // cout<<i<<j<<" ";
        }

        cout << endl;
    }
    
    return 0;
}
