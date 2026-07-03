class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here 6 7  2 10 9
        int n = arr.size();
        int maxElement = arr[0];
        int slargest = -1;
        for(int i = 1; i < n; i++) {
            if(arr[i] > maxElement) {
                slargest=maxElement;
                maxElement=arr[i];
            }
            else if(arr[i] > slargest && arr[i] < maxElement) slargest=arr[i];
        }
        return slargest;
    }
};