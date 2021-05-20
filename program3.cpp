# include<iostream>
#include<vector>
//#include<bits\std++.h>
using namespace std;
 
 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        if(nums2.size()>=nums1.size()){
        for(int i=0;i<nums1.size();i++){
        	
        	for(int j=0;j<=nums2.size();j++){
              if (nums2[j]>=nums1[i])
			   { 
			    if (nums2[j]==nums1[i])
				     {
					 nums2[j]=-1;
					 }   
				else{
				
			     v.push_back(nums2[j]);
			     nums2[j]=-1;
				 break;			
				} 
				              
			}
			  if (j==nums2.size()) 
			{
				v.push_back(-1);
			}
				 
        }         
            }
        }  
        return v;
    }
    
int main(){
	vector<int> nums1;
	vector<int>nums2;
	nums1.push_back(4);
	nums1.push_back(1);
	nums1.push_back(2);
	nums2.push_back(1);
	nums2.push_back(3);
	nums2.push_back(4);
	nums2.push_back(2);
//	cout<<nums1.size();
	vector<int> v3= nextGreaterElement(nums1,nums2);
	for(int k=0;k<nums1.size();k++)
	cout<<v3[k];
  return 0;
  }
  
