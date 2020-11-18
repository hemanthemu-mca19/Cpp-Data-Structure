void sort012(int a[], int n)
{
    // coode here 
    int low =0; 
    int mid =0; 
    int high= n-1;
    int i=0;
    while(mid<=high){
        if(a[i]==0){
            swap(a[low], a[i]);
            low++;
            mid++;
        }
        else if(a[i]==1){
            mid++;
        }
        else if(a[i]==2){
            swap(a[mid], a[high]);
            high--;
            i--;
        }
    }
}
