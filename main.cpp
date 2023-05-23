#include <iostream>

using namespace std;

bool ganjil(int x) {
    if( x % 2 != 0){
        return true;
    }else{
    return false;
    }
}

void genap_terkecil(int arr[], int n){
    int index = 0;
    int nilai = INT_MAX;

    for(int i = 0; i < n; i++){
        if(!ganjil(arr[i])){
            if(arr[i] < nilai ){
                nilai = arr[i];
                index = i;
            }
        }
    }
    cout << "Nilai = "<< nilai<<endl;
    cout << "Index = "<< index;
}


void print_arr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubble_sort_decending(int arr[], int n)
{
    for (int step = 0; step < (n - 1); step++)
    {
        for (int i = 0; i < (n - step - 1); i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

void insertion_sort(int arr[], int n){
    for (int step = 1; step < n; step++){
        int key = arr[step];
        int j = step - 1;
        while (key > arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main()
{

    int arr[] = {6,7,4,3,2};
    genap_terkecil(arr,5);
    cout<<endl;


        cout << "\nbubble sort";
        cout << "\nunsorted : ";
        /*
            output : 6 7 4 3 2
        */
        print_arr(arr, 5);

        cout << "sorted : ";
        bubble_sort_decending(arr, 5);
        /*
            output : 2 3 4 6 7
        */
        print_arr(arr, 5);

        int arr2[] = {2,4,5,3,6};
        cout << "\ninsertion sort";
        cout << "\nunsorted : ";
        /*
            output : 2 4 5 3 6
        */
        print_arr(arr2, 5);

        cout << "sorted : ";
        insertion_sort(arr2, 5);
        /*
           output : 2 3 4 5 6
           */
        print_arr(arr2, 5);

    return 0;
}
