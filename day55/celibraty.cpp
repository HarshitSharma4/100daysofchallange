class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        stack <int> ptc;
        int i=0;
        while(i<n){
            ptc.push(i);
            n++;
        }
        while(ptc.size()>1){
            int j= ptc.top();
            ptc.pop();
            int k =ptc.top();
            ptc.pop();
            if(M[j][k]==1){
                ptc.push(k);
            }
            else{
                ptc.push(j);
            }
        }
        //single element in stack is potential condidate
        int candidate=ptc.top(),zerocount=0;
        bool rcheck=false;
        for(int i=0;i<n;i++){
            if(M[candidate][i]==0){
                zerocount++;
            }
        }
        //allzeros
        if(zerocount==0){
            rcheck=1;
        }
        int onecount
        bool ccheck=0;
        for(int i=0;i<n;i++){
            if(M[candidate][i]==0){
                onecount++;
            }
        }
        if(onecount==(n-1)){
            ccheck=1;
        }
        if(rcheck && ccheck){
            return candidate;
        }
        else{
            return -1;
        }
    }
};