#include<iostream>
#include<ctime>
#include<cstdlib>
#include<stdio.h>
using namespace std;

int BinarySearch(int *a, const int x, const int left, const int right)
{ // 在排序好的陣列a[left], …, a[right]中找
	if (left <= right)
	{	int middle = (left + right)/2 ;
		if (x < a[middle]) return BinarySearch(a, x, left, middle-1) ;
		else if (x > a[middle]) return BinarySearch(a, x, middle+1, right) ;
		else return middle ;
	} // if 結束
	return -1 ; //沒找到
}
void SelectionSort ( int *a, const int n)
{ //把a[0]至a[n-1]總共n個數以遞增的順序排列
	for (int i = 0 ; i < n ; i ++)
	{
		int j = i ;
		//找出a[i]到a[n-1]中最小的一個整數
		for (int k = i + 1 ; k < n ; k++)
			if (a[k] < a[j]) j = k;
		swap(a[i], a[j]) ;
	}
}
	int Rsum(int *a , const int n)
{
    if (n <= 0) return 0 ;
    else return (Rsum (a, n-1) + a[n-1]) ;
}

  main() {				
		int a[] = {8,7,5,6,3,4,9,2,1};			
		int n = 9;			
	  SelectionSort(a, n);	
	  for(int i=0;i<n;i++){
	  	cout<<a[i]<<" ";
	  }		
      //print out the array;			
	 cout<<"\n" <<BinarySearch(a, 3, 0,n)<<endl;
	 
	 cout<< Rsum(a, n);			
	  //Print out the result;			
	}				
  
	
	
	

	
	
	
	
	
	
	
	
	
	
	

