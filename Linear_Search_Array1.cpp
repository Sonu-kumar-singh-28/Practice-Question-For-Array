// search insert element are in this array

// #include<iostream>
// using namespace std;


// int find( int arr[], int size,int key)
// {
//     for( int i=0; i<size; i++)
//     {
//         if( arr[i]== key)
//         return true;
//     }
//     return false;
// }


// int main()
// {
//     int arr[100];
//     int size, key;

//     cout<<" Enter The Size Of The Array :";
//     cin>>size;

//     for( int i=0; i<size; i++)
//     {
//         cout<<" Enter THe Insert You Want To Insert :";
//         cin>>arr[i];
//     }
//     cout<<" Enter The Element You Find :";
//     cin>>key;

//     if( find(arr, size, key))
//     {
//         cout<<" Found:";
//     }
//     else {
//         cout<<" Not Found:";
//     }

// }



// increment of the array

// #include<iostream>
// using namespace std;

// int printarr( int arr[], int size)
// {
//     for( int i=0; i<size; i++)
//     {
//         cout<<" The Insert Element Is:" << arr[i] << endl;
//     }
//     cout<<endl;
// }

// int printinc( int arr[] , int size)
// {
//     for( int i=0; i<size; i++)
//     {
//     arr[i]= arr[i]+10;

//     cout<<" The Increment Of The Array Is:" << arr[i] << endl;
//     }
//     cout<<endl;
// }

// int main()
// {
//     int arr[100];
//     int size;

//     cout<<" Enter The Size Of The ArraY: ";
//     cin>> size;

//     for( int i=0; i<size; i++)
//     {
//         cout<<" Enter The Element You insert :";
//         cin>>arr[i];
//     }

//     printarr( arr,size);

//     printinc( arr, size);
// }



// Extreme array 

// #include<iostream>
// using namespace std;

// int main()
// {

//     int arr[100];
//     int size;
   

//     cout<<" nter THe Size Of The Array :";
//     cin>> size;

//     for( int i=0; i<size; i++)
//     {
//         cout<<"Enter THe Number You Insert :";
//         cin>>arr[i];
//     }

//      int start=0;
//     int end = size-1;

//     while( start<=end)
//     {
//         if ( start > end)
//         break;

//     if( start == end)
//     {
//         cout<<arr[start] << " ";
//     }
//     else
//     {
//         cout<<arr[start] << " ";
//         cout<<arr[end] << " ";
//     }
//     start++;
//     end--;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;


int printdouble( int arr[], int size)
{
    for( int i=0; i<size; i++)
    {
        cout<<" The Double Of The Element :" << 2* arr[i] << endl;
    }
    cout<< endl;
}

int printadd( int arr[], int size)
{
    for( int i=0; i<size; i++)
    {
    int add;
    cout<<" Enter The Number You Add:";
    cin>>add;

    cout<<" The Addition of The Number is:" <<  add+arr[4] << endl;
    }
}

int main()
{
    int arr[100];
    int size;

    cout<<" Enter The Size Of The Array :";
    cin>>size;

    for( int i=0; i<size; i++)
    {
        cout<<"  Enter The Element Of The Array:";
        cin>>arr[i];
    }

    printdouble( arr ,size);

    printadd( arr, size);

}