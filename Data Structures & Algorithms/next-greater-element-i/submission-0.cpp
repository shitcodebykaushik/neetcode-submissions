class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();

        vector<int> ans(n1);

        for (int i = 0; i < n1; i++) {

            int pos = -1;

            // Find nums1[i] in nums2
            for (int j = 0; j < n2; j++) {
                if (nums2[j] == nums1[i]) {
                    pos = j;
                    break;
                }
            }

            int nextGreater = -1;

            // Find first greater element on the right
            for (int j = pos + 1; j < n2; j++) {
                if (nums2[j] > nums1[i]) {
                    nextGreater = nums2[j];
                    break;
                }
            }

            ans[i] = nextGreater;
        }

        return ans;
    }
};