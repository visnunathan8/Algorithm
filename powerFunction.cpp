#define mod 1000000007;
long help(int x,int y){
        long ans=1;
        if(x==0) return 0;
        if(y==0) return 1;
        ans = help(x,y/2);
        ans = ans%mod;
        if(y%2==0)
            return ans*ans;
        else
            return x*ans*ans;
}
