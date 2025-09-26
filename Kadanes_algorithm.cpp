# include <bits/stdc++.h>

int main()
{
    int n;
    std::cout << "Enter the length of Array: ";
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i=0; i<n;i++)
    {
        std::cout << "Enter the element- ";
        std::cin >> arr[i]; 
    }

 int max_sum=arr[0];
 int best_sum=arr[0];
 for(int i=1;i<n;i++)
 {
    best_sum=std::max(arr[i],arr[i]+best_sum);
    max_sum=std::max(max_sum,best_sum);
 }
 std::cout<< max_sum;
    return 0;
}