class Solution{             //It is a wrong ans.
	public:
	int MinCoin(vector<int>nums, int amount)
	{
	    vector<int>res;
	    int n=nums.size();
	    int coins=0;
	    for(int i=n-1;i>=0;i--){
	       // amount=amount-coins;
	        while(nums[i]<=amount){
	           //  amount=amount-coins;
	           // coins+=nums[i];
	           amount-=nums[i];
	           res.push_back(nums[i]);
	        }
	    }
	    //if(coins==0) return -1;
	   // int c=res.size();
	   // return c;
	   for(int i=0;i<res.size();i++}
	     cout<<ans[i]<<" ";
	}
};