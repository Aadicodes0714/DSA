class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
/*
        int n=heights.size();
        vector <int> left(n,-1); //left smaller nearest
        vector<int> right (n,n);  // right smaller nearest
        stack<int>s;
        //right smaller
        for (int i =n-1; i>=0;i--){
            while(!s.empty()>0&& heights[s.top()]>=heights[i])
            {
                s.pop();

            }
            right[i]=s.empty()?n:s.top();
            s.push(i);

        }
        while(!s.empty())
             s.pop();

        //left smaller

        for (int i =0; i<n;i++){
            while(!s.empty()>0 && heights[s.top()]>=heights[i])
            {
                s.pop();
            }
            left[i]=s.empty() ? -1 : s.top();
            s.push(i);

        }
    int ans=0;
        for(int i=0;i<n;i++){
    int width=right[i]-left[i]-1;
    int currArea=heights[i]*width;
    ans=max(ans,currArea);
}
        return ans;

*/


stack<int>st;
st.push(-1);
int max_area=0;
for(int i=0; i<heights.size();i++){
    while(st.top()!=-1&& heights[st.top()]>=heights[i]) // process higher building
    {
        int curr_bar_height=heights[st.top()]; //on stack
        st.pop();
        int curr_width=i-st.top()-1;

        max_area=max(max_area,curr_bar_height*curr_width);


    }


    st.push(i);  // push the curr shorter building into stack


}

//when height array is traversed,now process the remaining element in stack

while(st.top()!=-1){
    int curr_bar_height=heights[st.top()];
    st.pop();
    int curr_width=heights.size()-st.top()-1;
    max_area=max(max_area,curr_bar_height*curr_width);

}
return max_area;

    }
};