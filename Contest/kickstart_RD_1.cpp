#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){
    int tc;
    int n=1;
    cin >>tc;
    while(tc--){
        float arr[3][3];
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(i==1 && j==1)
                    continue;
                cin >> arr[i][j];
            }
        }
        float r1 = (arr[1][0]+arr[1][2])/2;
        float c1 = (arr[0][1]+arr[2][1])/2;
        float d1 = (arr[0][0]+arr[2][2])/2;
        float d2 = (arr[0][2]+arr[2][0])/2;
        int count=0;
        if((arr[0][0]+arr[0][2])/2 == arr[0][1])
            ++count;
        if((arr[2][0]+arr[2][2])/2 == arr[2][1])
            ++count;
        if((arr[0][0]+arr[2][0])/2 == arr[1][0])
            ++count;
        if((arr[0][2]+arr[2][2])/2 == arr[1][2])
            ++count;
        //cout<<count<<" ";
        unordered_map<float, int> mp;
        if(r1-(int)r1==0)
            mp[r1]++;
        if(c1-(int)c1==0)
            mp[c1]++;
        if(d1-(int)d1==0)
            mp[d1]++;
        if(d2-(int)d2==0)
            mp[d2]++;
        int max = 0;
        for (auto x:mp)
        {
            if(x.second>max){
                max = x.second;
            }
        }
        //cout<<max<<endl;
        cout<<"Case #"<<n++<<": ";
        count +=max;
        cout<<count<<endl;
    }
}