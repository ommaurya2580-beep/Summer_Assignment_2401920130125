//Maximum Subarray (Kadane's Algorithm)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int currSum = nums[0];
        int maxSum = nums[0];

        for(int i = 1; i < nums.size(); i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(maxSum, currSum);
        }

        return maxSum;
    }
};

//Contains Duplicate

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> st;

        for(int num : nums) {
            if(st.find(num) != st.end()) {
                return true;
            }

            st.insert(num);
        }

        return false;
    }
};


//Maximum Average Subarray I

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        long long sum = 0;

        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }

        long long maxSum = sum;

        for(int i = k; i < nums.size(); i++) {
            sum += nums[i];
            sum -= nums[i - k];

            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};
