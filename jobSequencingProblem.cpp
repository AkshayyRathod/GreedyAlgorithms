class Solution 
{
    public:
    
    static bool comparison(Job a,Job b){
        return (a.profit>b.profit);
    }
    
    
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        vector<int>res;
        sort(arr,arr+n,comparison);
        int maxi=arr[0].dead;
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i].dead);
        }
        
        int slots[maxi+1];
        for(int i=0;i<=maxi;i++){
            slots[i]=-1;
        }
        int countJobs=0;
        int maxProfit=0;
        
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(slots[j]==-1){
                    slots[j]=i;
                    countJobs++;
                    maxProfit+=arr[i].profit;
                    break;
                }
            }
        }
        res.push_back(countJobs);
        res.push_back(maxProfit);
        return res;
    } 
};