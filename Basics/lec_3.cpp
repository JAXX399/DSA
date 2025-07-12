#include<iostream>
#include<vector>
#include<utility>
#include<bits/stdc++.h>
using namespace std;

void explainpair()

{
    pair<int, int> p1= {1,{3,4}}; // Default initialization
    cout << "p1.first: " << p1.first << ", p1.second: " << p1.second << endl;
    pair<int,int>arr[]={{1,2},{3,4},{5,6}}; // Array of pairs
    cout << "arr[0].first: " << arr[0].first;
}


void explainvector()
{
    vector<int> v;
    v.push_back(1); // Adding elements to the vector
    v.emplace_back(2); // Adding elements using emplace_back

    vector<pair<int, int>> vec;
    vec.push_back({1, 2}); // Adding pairs to the vector
    vec.emplace_back(3, 4); // Adding pairs using emplace_back

    vector<int> v1(5,100); // Initializing vector with 5 elements, each of value 100
    vector<int> v3(5); // Initializing vector with 5 elements, default value is 0

    vector<int> v2(v1); // Copying vector v1 to v2 

    cout<<v2[2]<<endl; // Accessing the third element of v2


    vector<int>::iterator it = v2.begin(); // Creating an iterator for vector v2
    it++;
    cout<<*(it)<<" "<<endl; // Dereferencing the iterator to get the second element

    vector<int>::iterator it1 =v2.end(); // Creating an iterator to the end of vector v2 after the last element
    it1--;
    cout<<*(it1)<<" "<<endl; // Dereferencing the iterator to get the last element
    vector<int> v4;

    vector<int>::iterator it4 = v4.begin(); // Creating an iterator for vector v2 pointing to the beginning
    vector<int>::iterator it2 = v4.rend(); // Creating a reverse iterator for vector v2
    vector<int>::iterator it3 = v4.rbegin(); // Creating a reverse iterator for vector v2
    

    for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " "; // Iterating through vector v2 and printing each element
    }

    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " "; // Using auto to iterate through vector v2 and printing each element
    }


    v.erase(v.begin() + 1); // Erasing the second element from vector v
    v.erase(v.begin() + 1, v.begin() + 3); // Erasing elements from index 1 to index 2 (exclusive) in vector v

    //insert fuction

    v.insert(v.begin() + 1, 10); // Inserting 10 at index 1 in vector v
    v.insert(v.begin() + 1, 2, 20); // Inserting 2 elements with value 20 at index 1 in vector v
    
    vector<int>copy(2, 100); // Creating a vector with 2 elements, each of value 100
    v.insert(v.begin()+1, copy.begin(),copy.end()); // Inserting elements from copy vector at index 1 in vector v)

    


}

void explainlist()
{
    list<int> l; // Creating a list of integers
    l.push_back(1); // Adding elements to the end of the list
    l.emplace_back(2); // Adding elements using emplace_back

    list<int> l1(5, 100); // Initializing list with 5 elements, each of value 100
    list<int> l2(l1); // Copying list l1 to l2

    cout << l2.front() << endl; // Accessing the first element of l2
    cout << l2.back() << endl; // Accessing the last element of l2

    for (auto it = l2.begin(); it != l2.end(); it++)
    {
        cout << *it << " "; // Iterating through list l2 and printing each element
    }

    for (auto it = l2.rbegin(); it != l2.rend(); it++)
    {
        cout << *it << " "; // Using reverse iterator to iterate through list l2 and printing each element
    }

    //list has better time complexity for insertion and deletion compared to vector
}

void explaindeque()
{
    deque<int> d; // Creating a deque of integers
    d.push_back(1); // Adding elements to the end of the deque
    d.emplace_back(2); // Adding elements using emplace_back

    deque<int> d1(5, 100); // Initializing deque with 5 elements, each of value 100
    deque<int> d2(d1); // Copying deque d1 to d2

    cout << d2.front() << endl; // Accessing the first element of d2
    cout << d2.back() << endl; // Accessing the last element of d2

    for (auto it = d2.begin(); it != d2.end(); it++)
    {
        cout << *it << " "; // Iterating through deque d2 and printing each element
    }

    for (auto it = d2.rbegin(); it != d2.rend(); it++)
    {
        cout << *it << " "; // Using reverse iterator to iterate through deque d2 and printing each element
    }
}



void explainstack()
{
    stack<int> s; // Creating a stack of integers
    s.push(1); // Adding elements to the stack
    s.emplace(2); // Adding elements using emplace

    cout << s.top() << endl; // Accessing the top element of the stack
    s.pop(); // Removing the top element from the stack

    cout << s.size() << endl; // Getting the size of the stack
    cout << s.empty() << endl; // Checking if the stack is empty
}

void explainqueue()
{
    queue<int> q; // Creating a queue of integers
    q.push(1); // Adding elements to the queue
    q.emplace(2); // Adding elements using emplace

    cout << q.front() << endl; // Accessing the front element of the queue
    cout << q.back() << endl; // Accessing the back element of the queue

    q.pop(); // Removing the front element from the queue

    cout << q.size() << endl; // Getting the size of the queue
    cout << q.empty() << endl; // Checking if the queue is empty
}

void explainpriorityqueue()
{
    priority_queue<int> pq; // Creating a max-heap priority queue of integers
    pq.push(1); // Adding elements to the priority queue
    pq.emplace(2); // Adding elements using emplace

    cout << pq.top() << endl; // Accessing the top element of the priority queue

    pq.pop(); // Removing the top element from the priority queue

    cout << pq.size() << endl; // Getting the size of the priority queue
    cout << pq.empty() << endl; // Checking if the priority queue is empty

    //proirity queue is a max heap by default, it can be made min heap by using greater<int>() as the second template argument
    //works on tree data structure, so it has O(log n) time complexity for insertion and deletion



}

void explainset()
{
    set<int> s; // Creating a set of integers
    s.insert(1); // Adding elements to the set
    s.emplace(2); // Adding elements using emplace

    cout << *s.begin() << endl; // Accessing the first element of the set
    cout << *s.rbegin() << endl; // Accessing the last element of the set
    cout << s.count(1) << endl; // Counting occurrences of 1 in the set (will be either 0 or 1 since set does not allow duplicates)

    auto it = s.find(2); // Finding the element 2 in the set
    //if element is found, it will return an iterator to that element, otherwise it will return s.end()
    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " "; // Iterating through set s and printing each element
    }

    cout << s.size() << endl; // Getting the size of the set
    cout << s.empty() << endl; // Checking if the set is empty

    //set is implemented using red black tree, so insertion and deletion takes O(log n) time complexity
    //set does not allow duplicate elements, if we try to insert duplicate element it will not be inserted
    //set is always sorted in ascending order, if we want to sort it in descending order 
}


void explainmultiset()
{
    multiset<int> ms; // Creating a multiset of integers
    ms.insert(1); // Adding elements to the multiset
    ms.emplace(2); // Adding elements using emplace
    ms.insert(1); // Inserting duplicate element
    ms.insert(3); // Inserting another element
    ms.insert(1); // Inserting another duplicate element
    ms.erase(1); //erasing all occurrences of 1 from the multiset

    cout << *ms.begin() << endl; // Accessing the first element of the multiset
    cout << *ms.rbegin() << endl; // Accessing the last element of the multiset
    cout << ms.count(1) << endl; // Counting occurrences of 1 in the multiset (can be more than 1)
    ms.erase(ms.find(1) , ms.find(1)+2); // Erasing the first two occurrences of 1 from the multiset
    auto it = ms.find(2); // Finding the element 2 in the multiset
    //if element is found, it will return an iterator to that element, otherwise it will return ms.end()
    for (auto it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " "; // Iterating through multiset ms and printing each element
    }

    cout << ms.size() << endl; // Getting the size of the multiset
    cout << ms.empty() << endl; // Checking if the multiset is empty


    //it is sorted but allows duplicate elements

    //multiset is implemented using red black tree, so insertion and deletion takes O(log n) time complexity
}



void explainunorderedset()
{
    unordered_set<int> us; // Creating an unordered set of integers
    us.insert(1); // Adding elements to the unordered set
    us.emplace(2); // Adding elements using emplace
    us.insert(1); // Inserting duplicate element, will not be inserted

    cout << *us.begin() << endl; // Accessing an arbitrary element of the unordered set
    cout << us.count(1) << endl; // Counting occurrences of 1 in the unordered set (will be either 0 or 1 since unordered set does not allow duplicates)

    auto it = us.find(2); // Finding the element 2 in the unordered set
    //if element is found, it will return an iterator to that element, otherwise it will return us.end()
    for (auto it = us.begin(); it != us.end(); it++)
    {
        cout << *it << " "; // Iterating through unordered set us and printing each element
    }

    cout << us.size() << endl; // Getting the size of the unordered set
    cout << us.empty() << endl; // Checking if the unordered set is empty
    //unordered set does not allow duplicate elements, if we try to insert duplicate element it will not be inserted
    //unordered set is not sorted, it is implemented using hash table, so elements are stored
    //unordered set is implemented using hash table, so insertion and deletion takes O(1) time complexity on average
}




void explainmap()
{
    map<int, int> m; // Creating a map of integers
    m[1] = 2; // Adding key-value pairs to the map
    m[2] = 3; // Adding another key-value pair
    m[1] = 4; // Updating the value for key 1

    cout << m[1] << endl; // Accessing the value for key 1
    cout << m.at(2) << endl; // Accessing the value for key 2 using at()

    auto it = m.find(1); // Finding the element with key 1 in the map
    if (it != m.end()) {
        cout << it->first << " " << it->second << endl; // Printing the key and value if found
    }

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << " "; // Iterating through map m and printing each key-value pair
    }

    cout << m.size() << endl; // Getting the size of the map
    cout << m.empty() << endl; // Checking if the map is empty


    //map store unique key in sorted order
    //map is implemented using red black tree, so insertion and deletion takes O(log n) time complexity
}


void explainmultimap()
{
    multimap<int, int> mm; // Creating a multimap of integers
    mm.insert({1, 2}); // Adding key-value pairs to the multimap
    mm.emplace(2, 3); // Adding another key-value pair
    mm.insert({1, 4}); // Inserting another value for key 1

    cout << mm.count(1) << endl; // Counting occurrences of key 1 in the multimap (can be more than 1)
    
    auto it = mm.find(1); // Finding the first occurrence of key 1 in the multimap
    if (it != mm.end()) {
        cout << it->first << " " << it->second << endl; // Printing the first occurrence of key 1 and its value
    }

    for (auto it = mm.begin(); it != mm.end(); it++)
    {
        cout << it->first << " " << it->second << " "; // Iterating through multimap mm and printing each key-value pair
    }

    cout << mm.size() << endl; // Getting the size of the multimap
    cout << mm.empty() << endl; // Checking if the multimap is empty

    //multimap allows duplicate keys, but stores them in sorted order based on keys
    //multimap is implemented using red black tree, so insertion and deletion takes O(log n) time complexity
}

void unordredmap()
{
    unordered_map<int, int> um; // Creating an unordered map of integers
    um[1] = 2; // Adding key-value pairs to the unordered map
    um[2] = 3; // Adding another key-value pair
    um[1] = 4; // Updating the value for key 1

    cout << um[1] << endl; // Accessing the value for key 1
    cout << um.at(2) << endl; // Accessing the value for key 2 using at()

    auto it = um.find(1); // Finding the element with key 1 in the unordered map
    if (it != um.end()) {
        cout << it->first << " " << it->second << endl; // Printing the key and value if found
    }

    for (auto it = um.begin(); it != um.end(); it++)
    {
        cout << it->first << " " << it->second << " "; // Iterating through unordered map um and printing each key-value pair
    }

    cout << um.size() << endl; // Getting the size of the unordered map
    cout << um.empty() << endl; // Checking if the unordered map is empty

    //unordered map does not allow duplicate keys, if we try to insert duplicate key it will update the value
    //unordered map is not sorted, it is implemented using hash table, so elements are stored
    //unordered map is implemented using hash table, so insertion and deletion takes O(1) time complexity on average
}

bool comp(pair<int,int>a,pair<int,int>b)
{
    if(a.second>b.second) return true;
    if(a.second<b.second) return false;

    if(a.first>b.first) return true;
    else return false;
    //if both second elements are equal, then compare first elements
}

void extra()
{
    // Sorting an array of pairs based on the second element in descending order
    pair<int,int>a[]={{1,2},{3,4},{5,6}}; // Array of pairs
    sort(a,a+3,comp);



}



int main()
{
    //explainpair();
    //explainvector();
    //explainlist();
    //explaindeque();
    //explainstack();
    //explainqueue();
    //explainpriorityqueue();
    //explainset();
    //explainmultiset();
    //explainunorderedset();
    //explainmap();
    //explainmultimap();
    // unordredmap();
    // extra();

    return 0;
}