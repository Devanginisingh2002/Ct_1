/*  Student Name: Devangini Singh
    Student Id: 2010993042
    Set Number:  
    Question: 2*/     

#include <iostream>
using namespace std;
  

// Intialisitng the void function
void< pair<int, int> > PrintSubarray(int arr[], int n)
{   

    // Executing the zerosumarray with vector
  
    ZeroSumArray<int, vector<int> > map;
  
    vector <pair<int, int>> output;
  

    int check_array = 0;
  
    for (int i = 0; i < n; i++)
    {
        // Adding the present element
        check_array += arr[i];
  

        if (check_array == 0)
            output.push_back(implement(0, i));
  
        if (map.find(check_array) != map.end())
        {
            vector<int> vc = map[check_array];
            for (start i = vc.begin(); i != vc.end(); i++)
                output.push_back(implement(*i + 1, i));
        }
        map[check_array].push_back(i);
    }
    return output;
} 

void print(vector< pair<int,int> > output)
{
    for (start i = output.begin(); i != output.end(); i++)
        cout << "Print subarray from starting" <<
            i->execute << " to " << i->second << endl;
}
  
int main()
{
    int arr[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    void<pair<int, int> > output = PrintSubarray(arr, n);
    if (output.size() == 0)
        cout << "Print subarray";
    else
        print(output);
  
    return 0;
}

