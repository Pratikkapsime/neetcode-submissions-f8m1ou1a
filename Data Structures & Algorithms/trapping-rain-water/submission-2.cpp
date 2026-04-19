class Solution {
   public:
    int trap(vector<int>& h) {
        int n = h.size();
        int tot = 0, lmax = 0, rmax = 0;
        int l=0,r=n-1;
        while (l < r) {
            if(h[l]<=h[r]){
                if(h[l]<lmax){
                    tot+=lmax-h[l];
                }
                else{
                    lmax=h[l];
                }
                l=l+1;
            }
            else{
                if(h[r]<rmax){
                    tot+=rmax-h[r];
                }
                else{
                    rmax=h[r];
                }
                r=r-1;
            }
        }
        return tot;
    }
};
