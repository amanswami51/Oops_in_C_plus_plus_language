#include<iostream>
#include<list>
#include<vector>

using namespace std; 

//function for displaying vector
template <class T>
void display_vec(vector<T> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

//function for displaying list
template <class T>
void display_li(list<T> &li){
    list<int> :: iterator iter;

    // //first method
    // iter = li.begin();
    // for(int i=0; i<li.size(); i++){
    //     cout<<*iter<<" ";
    //     iter++;
    // }

    //second method
    for(iter=li.begin(); iter!=li.end(); iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;
}

int main(){
    //***********list1***********
    list<int> list1;    //List of zero length
    list1.push_back(7);
    list1.push_back(3);
    list1.push_back(11);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(5);
    cout<<"Display elements of list1 : ";
    display_li(list1);

    //remove the element from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(7);

    //sorting the elements of list
    // list1.sort();
    // display_li(list1);

    //reverse the list
    // list1.reverse();
    // display_li(list1);


    //***********list2***********
    list<int> list2(4); //Empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    cout<<"Enter the element of list2 : ";
    for(int i=0; i<list2.size(); i++){
        cin>>*iter;
        iter++;
    }
    cout<<"Display elements of list2 : ";
    display_li(list2);

    //first sort then merge list1 and list2
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    // cout<<"List1 after merging : ";
    // display_li(list1);



















    // //***********vec1***********
    // vector<int> vec1;    //vector of zero length
    // vec1.push_back(3);
    // vec1.push_back(5);
    // vec1.push_back(9);
    // cout<<"Display elements of vector : ";
    // display_vec(vec1);

    return 0;
}