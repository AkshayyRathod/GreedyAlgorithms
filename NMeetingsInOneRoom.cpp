class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({end[i],start[i]});
        }
        sort(v.begin(),v.end());
        int j=v[0].first;
        int count=1;
        for(int i=1;i<n;i++){
            if(v[i].second > j){
                count++;
                j=v[i].first;
            }
        }
        return count;
    }
}; 