class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int m=s1.size(),n=s2.size(),i=0;
        if(m>n) return false;
        sort(s1.begin(),s1.end());
        while(i<n-m+1){
            string sub=s2.substr(i,m);
            sort(sub.begin(),sub.end());
            if(sub==s1) return true;
            i++;
        }
        return false;
    }
};
