#include<iostream>
#include<ctime>
#include<cstdlib>
#include<stdio.h>
using namespace std;

int BinarySearch(int *a, const int x, const int left, const int right)
{ // �b�ƧǦn���}�Ca[left], �K, a[right]����
	if (left <= right)
	{	int middle = (left + right)/2 ;
		if (x < a[middle]) return BinarySearch(a, x, left, middle-1) ;
		else if (x > a[middle]) return BinarySearch(a, x, middle+1, right) ;
		else return middle ;
	} // if ����
	return -1 ; //�S���
}
void SelectionSort ( int *a, const int n)
{ //��a[0]��a[n-1]�`�@n�ӼƥH���W�����ǱƦC
	for (int i = 0 ; i < n ; i ++)
	{
		int j = i ;
		//��Xa[i]��a[n-1]���̤p���@�Ӿ��
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
  
	
	
	

	
	
	
	
	
	
	
	
	
	
	

