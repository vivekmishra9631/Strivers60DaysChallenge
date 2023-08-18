class Solution {
public:
    int romanToInt(string s) {
        int n=s.length();
        unordered_map<char, pair<int, int>> mpp;
        mpp['I']=make_pair(1,1);
        mpp['V']=make_pair(2,5);
        mpp['X']=make_pair(3,10);
        mpp['L']=make_pair(4,50);
        mpp['C']=make_pair(5,100);
        mpp['D']=make_pair(6,500);
        mpp['M']=make_pair(7,1000);
        auto x=mpp[s[n-1]];
        int parent=x.first;
        int ans=x.second;
        
        
        for(int i=n-2; i>=0; i--){
            auto it=mpp[s[i]];
            int ind=it.first;
            int value= it.second;
            if(parent >ind){
                ans-= value;
               
            }
            else{
                ans+=value;
                
            }
             parent=ind;
            
        }
        return ans;
        
    }
};