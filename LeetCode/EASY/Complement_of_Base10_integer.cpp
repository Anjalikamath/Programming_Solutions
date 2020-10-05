//method 1
class Solution {
public:
    string getBinary(int n){
        
        string val="";
        while(n!=0){
            int rem=n%2;
            n=n/2;
            val+=(rem+'0');
        }
        reverse(val.begin(),val.end());
        return val;
    }
    int getDecimal(string s){
        
        int n=s.size();
        long long int ans=(s[n-1]-'0');
        int i=n-2;
        long long int power=2;
        while(i>=0){
            ans=ans+((s[i]-'0')*power);
            power=power*2;
            i--;
        }
        return ans;
        
    }
    string complement(string s){
        string str="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')str+='1';
            else str+='0';
        }
        return str;
        
    }
    int bitwiseComplement(int n) {
        if(n==0)return 1;
        if(n==1)return 0;
        string bin=getBinary(n);
        cout<<bin<<endl;
        bin=complement(bin);
        int ans=getDecimal(bin);
        return ans;
        
    }
};

//method 2
int bitwiseComplement(int N){
    int x=1;
    if(N==0)
        return 1;
    x=N;
    int mask=1;
    while(mask<=x){
        x=x^mask;
        mask=mask<<1;
    }
    return x;

}