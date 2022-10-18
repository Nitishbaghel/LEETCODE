//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> arr)
	{
	    vector<int> ans;

 for(int i=0;i<n;i++){

     int x = i;

     for(int j=0;j<=x;j++){

         int a = j;

         int b = x-j;

         ans.push_back(arr[a][b]);

     }

 }

 for(int i=1;i<n;i++){

     int x = n-1;

     int y = i;

     int p = n-i;

     while(p--){

         int a = y;

         y++;

         int b = x;

         x--;

         ans.push_back(arr[a][b]);

     }

 }

 return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends