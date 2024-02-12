class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    	int a = 0, b = 0;
    	vector<int> ary;
    	while((a < nums1.size()) && (b < nums2.size())){
    		if(nums1[a]>nums2[b]){
    			ary.push_back(nums2[b]);
    			b++;
    		}else{
    			ary.push_back(nums1[a]);
    			a++;
    		}
    	}
    	while(a < nums1.size()){
    			ary.push_back(nums1[a]);
    			a++;
    	}
    	while(b < nums2.size()){
    			ary.push_back(nums2[b]);
    			b++;
    	}
    	
    	double res;
    	if(ary.size()%2 == 1){
    		res = ary[ary.size()/2];
    	}else{
    		res = (ary[ary.size()/2] + ary[ary.size()/2-1])/2.0;
    	}
    	
    	return res;
    }
};
