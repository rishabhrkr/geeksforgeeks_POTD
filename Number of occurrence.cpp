class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int first = lower_bound(arr, arr + n, x) - arr;
	    int last = upper_bound(arr, arr + n, x) - arr;
	    
	    if(first == n or arr[first] != x)
	        return 0;
	    
	    return last - first;
	}
};
