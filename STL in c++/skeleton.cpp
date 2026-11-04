// #include<bits/stdc++.h>// it has all the libraries in in stdc++
// #include<math.h>//to include all the algorithms in math it is used
// #include<string.h>//to include all the algorithms in string
// using namespace std;
// int main()
// {
//     return 0;
// }
// C++ STL
// Alogritms
// containers
// functions
// Iterators
// pairs
#include <bits/stdc++.h>
#include <utility> // pair lies in this library
using namespace std;

void expalinPair()
{
    pair<int, int> p = {1, 3};          // it means 1 and 3 are stored in variable p
    cout << p.first << " " << p.second; // p.first prints 1 and p.second prints 3
    pair<int, pair<int, int>> p = {1, {3, 4}};
    // cout << p.first << " " << p.second.first << " " << p.second.second << " ";
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second;
}
// vectors (containers which are dynamic in nature)
void explainVector()
{
    vector<int> v;     // declaration of a vector(creates empty container)
    v.push_back(1);    //(push 1 into empty container)
    v.emplace_back(2); // dynamically increases size and pushes 2 into it
    vector<pair<int, int>> vec;
    vec.push_back({1, 2});  // use curly braces while declaring
    vec.emplace_back(1, 2); // Automatically assumes it in curly braces while declaring
    vector<int> v(5, 100);  // declares a vector of size 5 and put 100 in each block
    vector<int> v1(5, 20);
    vector<int> v2(v1); // copies the contents of v1 into v2
    // vectors can be accessed in a similar fashion as array
    cout << v[0];
    cout << v.at(3); // both are ways of accesing elements in te vector
    // ITERATOR
    vector<int>::iterator it = v.begin(); // accesing vector using an iterator
    it++;
    cout << *(it);
    it = it + 2;
    cout << *(it) << " ";
    vector<int>::iterator it = v.end(); // end points to a memory location that is right after the last element
    // vector<int>::iterator it=v.rend();// revesrse end
    // vector<int>::iterator it=v.rbegin();//reverse begin
    cout << v.back() << " ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    for (auto it = v.begin(); it != v.end(); it++)
    { // auto automatically chooses the datatype and goes in for loop
        cout << *(it) << " ";
    }
    for (auto it : v)
    {
        cout << it << " ";
    }
    //{10,20,30,40}
    v.erase(v.begin() + 1);                // point at 20 and clears it
    v.erase(v.begin() + 1, v.begin() + 3); // deletes 20 and 40 from the vector
    // in the above method starting value is included but ending value is not included)
    //[20,40)
    // INSERT FUNCTION
    vector<int> v(2, 100);                         //{100,100}
    v.insert(v.begin(), 300);                      //{300,100,100}
    v.insert(v.begin() + 1, 2, 10);                //{300,10,10,100,100}
    vector<int> copy(2, 50);                       //{50,50}
    v.insert(v.begin(), copy.begin(), copy.end()); //{50,50,300,10,10,100,100}
    cout << v.size();                              // prints the size of the vector
    //{10,20}
    v.pop_back(); //{10}
    // v1{10,20}
    // v2{30,40}
    v1.swap(v2); // v1={30,40},v2={10,20}
    v.clear();   // erases the entire vector
}
void explainList()
{
    list<int> ls;
    ls.push_back(2);    //{2}
    ls.emplace_back(4); //{2,4}
    ls.push_front(5);   //{5,2,4}
    ls.emplace_front();
}
void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     //{1}
    dq.emplace_back(2);  //{1,2}
    dq.push_front(3);    //{3,1,2}
    dq.emplace_front(4); //{4,3,1,2}
    dq.pop_back();       //{4,3,1}
    dq.pop_front();      //{3,1}
    dq.back();
    dq.front();
}
void explainStack()
{
    stack<int> st;    // Follows LIFO Mechanism
    st.push(1);       //{1}
    st.push(2);       //{2,1}
    st.push(3);       //{3,2,1}
    st.push(3);       //{3,3,2,1}
    st.emplace(5);    //{5,3,3,2,1}
    cout << st.top(); // prints 5
    st.pop();
    cout << st.top();   // 3
    cout << st.size();  // 4
    cout << st.empty(); // False
    stack<int> st1, st2;
    st1.swap(st2); // swaps st2 values with st1
}
void explainQueue()
{
    queue<int> q;      // Follows FIFO Mechanism
    q.push(1);         //{1}
    q.push(2);         //{2,1}
    q.emplace(4);      //{4,2,1}
    q.back() += 5;     //{4,2,1}it will add 5 to 4=9, {9,2,1}
    cout << q.back();  // prints 9
    cout << q.front(); // prints 1
}
void explainPriorityqueue()
{
    priority_queue<int> pq;
    pq.push(5);     //{5}
    pq.push(2);     //{5,2}
    pq.push(8);     //{8,5,2}
    pq.emplace(10); //{10,8,5,2}
    cout << pq.top();
    pq.pop(); // pops out the last element
    cout << pq.top();
    // size swap empty function same as others
    // Maximum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);     //{5}
    pq.push(2);     //{5,2}
    pq.push(8);     //{2,5,8}
    pq.emplace(10); //{10,8,5,2}
}
// set (stores everything in the sorted order and unique)
void explainSet()
{
    set<int> st;
    st.insert(1);  //{1}
    st.emplace(2); //{1,2}
    st.insert(2);  //{1,2} does not store 2 again bcoz unique
    st.insert(4);  //{1,2,4}
    st.insert(3);  //{1,2,3,4}/stores in sorted order
    //{1,2,3,4,5}
    auto it = st.find(3); // returns an iterator which points to the 3
    //{1,2,3,4,5}
    auto it = st.find(6); // iterator point at position after 5
    st.erase(5);          // erases 5 from the set takes logarithmic time
    int cnt = st.count(1);
    auto it = st.find(3);
    auto it1 = st.find(4);
    auto it2 = st.find(5);
    st.erase(it1, it2); // it1 includd but it2 not included logarithmic time complexity
}
void explainmultiSet() // same as set but only obeys sorted but not unique
{
    multiset<int> ms;
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    ms.erase(1);  // all 1's erased
    int cnt = ms.count(1);
    ms.erase(ms.find(1)); // erases only one of 1 in {1,1,1}
    // ms.erase(ms.find(1)+2);
}
void explainunorderedSet() // same as set and stores not in sorted but in unique
{
    unordered_set<int> st;
    // all the functions are same as the set
    // only lower bound and upper bound functions dont work
}
void explainMap()
{
    map<int, int> mpp;
    map<int, pair<int, int>> mpp; // stores in the format of {key,value}
    // both key and value can be of any data type
    map<pair<int, int>, int> mpp;
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    mpp[2, 3] = 10;
    for (auto it : mpp)
    {
        cout << it.first << " " << it.second; // stored in sorted order of the key
    }
    cout << mpp[1];
    cout << mpp[3];
    auto it = mpp.find(3);
    // cout<< *(it).second;
    auto it = mpp.find(5); // if the fifth element is not found then it points to.end()
    auto it = mpp.upper_bound(3);
    auto it = mpp.lower_bound(5);
}
void explainMultiStep()
{
    // can store duplicate keys but everything is stored in the sorted order
}
// ALGORITHMS
void explainExtra()
{
    bool comp();
    int a, n;
    vector<int> v;
    //{1,2,3,4,5}
    sort(a, a + n); // it will sort all the numbers between 1 to 5 in the above case
    sort(v.begin(), v.end());
    //{1,3,5,2}
    sort(a + 2, a + 4);
    // sort(a,a+n ,greater <int>);
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    sort(a, a + n, comp); // comparator self written comparator boolean function
    int maxi = max_element(a, a + n);
}
int main()
{
}