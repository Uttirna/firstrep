#include<iostream>
#include<ctime>
using namespace std;
void Merge(int *a,int *x,int *y,int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;

    while(i<=mid && j<=e)
    {
        if(x[i]<y[j])
        {
            a[k]=x[i];
            i++;
            k++;
        }
        else
        {
            a[k]=y[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
        a[k]=x[i];
        i++;
        k++;
    }

    while(j<=e)
    {
        a[k]=y[j];
        j++;
        k++;
    }

}

void mergeSort(int *a,int s,int e)
{
   if(s>=e)
        return ;

   int x[100],y[100];
   int mid=(s+e)/2;
   for(int i=s;i<=mid;i++)
   {
       x[i]=a[i];
   }
   for(int i=mid+1;i<=e;i++)
   {
       y[i]=a[i];
   }

   mergeSort(x,s,mid);
   mergeSort(y,mid+1,e);

   Merge(a,x,y,s,e);
}

int partition(int* a, int l, int r)
{
	int pivot = a[l];
	int count = 0;
	for (int i = l + 1; i <= r; i++)
	{
		if (a[i] <= pivot)
		{
			count++;
		}
	}
	swap(a[l], a[l + count]);
	int i = l, j = r;
	while (i <= j)
	{
		if (a[i] > pivot && a[j] <= pivot)
		{
			swap(a[i], a[j]);
			i++;
			j--;
		}
		else if (a[i] <= pivot)
		{
			i++;
		}
		else if (a[j] > pivot)
		{
			j--;
		}
	}
	return l + count;
}
void quicksort(int* a, int l, int r)
{
	if (l >= r)
	{
		return;
	}
	int p = partition(a, l, r);
	quicksort(a, l, p - 1);
	quicksort(a, p + 1, r);
	return;
}
int main()
{
	int n = 10000;
	//cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++)
	{
		//cin >> a[i];
		a[i] = i;
	}
	clock_t time_req;
	time_req = clock();
	quicksort(a, 0, n - 1);
	time_req = clock() - time_req;
	cout << "Time taken for Quick Sort: " << (float)time_req / CLOCKS_PER_SEC << " seconds" << endl;
	for (int i = 0; i < n; i++)
	{
		//cin >> a[i];
		a[i] = i;
	}
	time_req = clock();
   mergeSort(a,0,n-1);
   time_req = clock() - time_req;
	cout << "Time taken for  Sort: " << (float)time_req / CLOCKS_PER_SEC << " seconds" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}
