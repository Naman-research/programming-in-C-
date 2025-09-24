#include<bits/stdc++.h>

void subsetGenerator(std::vector<int>& nums){
    int size=nums.size();
    
    for(int i=0;i<(1<<size);i++){
        std::cout<<"{ ";
        for (int j=0; j<size;j++){
            if (i & 1<<j){
                std::cout<<nums[j]<<" ";
            }
        }
        std::cout<< "}\n";
    } 
    

}

int main() {
    int n;
    std::cout<<"Enter the Length of set: ";
    std::cin>>n;

    std::vector<int> nums(n);
    for (int i=0;i<n;i++){
        std::cout<<"Enter the element ";
        std::cin>>nums[i];
    }
    subsetGenerator(nums);
    return 0;
}