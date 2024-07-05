#include<iostream>
#include<vector>
using namespace std; 

template <class T>
void display(vector<T> &v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";    //cout<<v.at(i)<<" ";  
    }
    cout<<endl;
}

int main(){

    //##############Ways to create a vector##############

    //**************First way**************
    vector<int> vec1; //zero length integer vector
    int element, n;

    cout<<"Enter the size of your vector : ";
    cin>>n;
    
    for(int i=0; i<n; i++){
        cout<<"Enter an element to add to this vector : ";
        cin>>element;
        vec1.push_back(element);
    }
    // vec1.pop_back(); //remove element by LIFO concept

    display(vec1);  //For displaying vec1 vector 



    //Insert value
    /*
        To insert element on desire position by 
        *********vector_object.insert(iter+position,how many copy insert, value of element which insert)*********
        iter = first position
        iter+1 = second position and so on...
    */
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,1,566);
    display(vec1);


    //**************Second way**************
    vector<char> vec2(4);   //4-element character vector
    vec2.push_back('6');
    display(vec2);


    //**************Third way**************
    vector<char> vec3(vec2);    //4-element character vector from vec2
    display(vec3);


    //**************Fourth way**************
    vector<int> vec4(6,13);     //6 number of element, element:13
    display(vec4);

    
    return 0;
}