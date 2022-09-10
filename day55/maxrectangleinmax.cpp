class Solution{
  private:
  #include<stack>
vector <int> nextsmallest(int arr[],int n){
    stack <int> s;
    s.push(-1);
    vector <int> ans(n);
    for(int i=n-1;i>=0;i--){
        int cur=arr[i];
        while(s.top() != -1 && arr[s.top()]>= cur){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
        
    }
    return ans;
} 
vector <int> presmallest(int arr[],int n){
      stack <int> s;
    s.push(-1);
    vector <int> ans(n);
    for(int i=0;i<n;i++){
        int cur=arr[i];
        while(s.top() != -1 && arr[s.top()]>= cur){
            s.pop();
        }
        ans[i]=s.top();
        s.push(i);
        
    }
    return ans;
} 
int largestRectangle(int heights[],int n) {
   // Write your code here.
     //int n= heights.size();
     
     vector <int> next(n);
     next= nextsmallest(heights,n);
     
     vector <int> pre(n);
     pre=presmallest(heights,n);
     int area=0;
     for(int i=0;i<n;i++){
         int l=heights[i];
         if(next[i]== -1){
             next[i]=n;
         }
        int b=next[i]-pre[i]-1;
         int newarea =l*b;
         if(newarea>area){
             area=newarea;
         }
     }
     return area;
 }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int area=largestRectangle(M[0],m);
        for(int i=1;i<m;i++){
            for(int j=0;j<m;j++){
                if(M[i][j] !=0){
                    M[i][j]==M[i][j]+M[i-1][j];
                }
              
            }
            // int newarea=largestRectangle(M[i],m);
            // if(newarea>area){
            //     area=newarea;
            // }
            area=max(area,largestRectangle(M[i],m));
        }
        return area;
        
    }
};