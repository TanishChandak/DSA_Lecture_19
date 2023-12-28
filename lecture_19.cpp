#include <iostream>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    // Basic Array which we create everywhere in the function:
    int basic_array[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
    {
        cout << "The Basic array is: " << basic_array[i] << endl;
    }
    // Advanced Array or STL array which is create by the library:
    array<int, 3> Advanced_array = {1, 2, 3};
    for (int i = 0; i < Advanced_array.size(); i++)
    {
        cout << "The Advanced array is: " << Advanced_array[i] << endl;
    }
    cout << "The 2nd index of advanced array is: " << Advanced_array.at(2) << endl;          // it will give you the value which is placed to the 2nd index
    cout << "The Advanced array is empty or not: " << Advanced_array.empty() << endl;        // it will give you the boolean value if empty then 1 or if not then 0
    cout << "The first element of an advanced array is: " << Advanced_array.front() << endl; // it will give you the first index value of an array
    cout << "The last element of an advanced array is: " << Advanced_array.back() << endl;   // it will give you the last index value of an array

    
    vector<int> v;
    cout << "Size of vector: " << v.capacity() << endl;                 // it will check the capacity of element which is present or not in (kitni memory assign hui hai)
    cout << "Adding the elements in the array: " << endl;               // adding the elements in the vector v
    v.push_back(1);                                                     // element 1
    v.push_back(2);                                                     // element 2
    v.push_back(3);                                                     // element 3
    cout << "Capacity of vector: " << v.capacity() << endl;             // capacity of an vector
    cout << "Size of vector : " << v.size() << endl;                    // size of an vector
    cout << "Element at index 2nd is: " << v.at(2) << endl;             // it will give you the value which is present on the 2nd index
    cout << "The first element from the vector: " << v.front() << endl; // it will give you the first index value of an vector
    cout << "The last element from the vector: " << v.back() << endl;   // it will give you the last index value of an vector
    v.pop_back();                                                       // it will remove the last element of an vector
    cout << "Size of an vector before clear: " << v.size() << endl;
    v.clear();                                                     // remove all elements from vector
    cout << "Size of an vector after clear: " << v.size() << endl; // check if it's empty

    // Creating an vector
    vector<int> a(5, 1); // Creating an array which can be given the size and the element
    cout << "Vector 'a': " << endl;
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " " << endl;
    }
    vector<int> last(a); // in this vector all the elements of vector (a) is copy in the vector (last)

    
    deque<int> d;    // Creating deque using the deque library.
    d.push_front(7); // it will add the element in the first index.
    d.push_back(3);  // it will add the element
    for (int i = 0; i < d.size(); i++)
    {
        cout << "Value of index " << i << " is: " << d[i] << endl;
    }
    // d.pop_back(); // it will remove the element form back side
    // d.pop_front(); // it will remove the element from front side
    cout << "Print the first index element: " << d.at(1) << endl; // it will print the first index value
    cout << "Print the front element: " << d.front() << endl;     // it will print the first value present in the deque
    cout << "Print the last element: " << d.back() << endl;       // it will print the last value present in the deque
    cout << "Empty or not: " << d.empty() << endl;                // it will check the if the deque is empty or not
    cout << "Before erase the deque: " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // it will erase the from where we give the location/index value;
    cout << "After erase the deque: " << d.size() << endl;

    
    list<int> l;
    list<int> n(l); // copying the (l) list into the new list (n)
    // list<int> n(5, 100); // in this list it will initial the value of (5) and it will print (100) times.
    l.push_back(4);  // adding the element to the last side
    l.push_front(5); // adding the element to the first side
    for (int i : l)
    {
        cout << i << " " << endl;
    }
    l.erase(l.begin()); // it will erase the index elements
    cout << "After erase the list: " << endl;
    for (int i : l)
    {
        cout << i << " " << endl;
    }
    cout << "Size of list: " << l.size() << endl;

    
    stack<string> s;
    s.push("Tanish"); // it will add the element one-by-one
    s.push("Kumar");
    s.push("Chandak");

    cout << "Top element in stack: " << s.top() << endl;
    s.pop(); // it will remove the last index value from the stack
    cout << "Now the Top element in stack: " << s.top() << endl;
    cout << "Size of stack: " << s.size() << endl; // it will give the size of an stack
    cout << "Empty or not: " << s.empty() << endl; // it will check if the stack is empty or not

    
    queue<string> q;
    q.push("Tanish");
    q.push("Kumar");
    q.push("Chandak");

    cout << "Size Before pop: " << q.size() << endl; // it will check the size of queue
    cout << "Front Element: " << q.front() << endl;  // It gives the front element of Queue
    q.pop();
    cout << "NoW, front element is: " << q.front() << endl; // it gives the front element of Queue
    cout << "Size After pop: " << q.size() << endl;

    
    priority_queue<int> maxi;                            // Creating the Max heap
    priority_queue<int, vector<int>, greater<int>> mini; // Creating the Min heap

    maxi.push(1); // Adding the element to the priority_Queue one-by-one
    maxi.push(2);
    maxi.push(3);
    maxi.push(0);

    // it will give you the maximum value from the queue one-by-one:
    cout << "This is for the Maximum: " << endl;
    int size1 = maxi.size();
    for (int i = 0; i < size1; i++)
    {
        cout << "The Maximum is: " << maxi.top() << " " << endl;
        maxi.pop();
    }
    cout << "Empty or not: " << maxi.empty() << endl;

    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(0);

    // it will give you the minimum value from the queue one-by-one:
    cout << "This is for the Minimum: " << endl;
    int size2 = mini.size();
    for (int j = 0; j < size2; j++)
    {
        cout << "The Minimum is: " << mini.top() << " " << endl;
        mini.pop();
    }
    cout << "Empty or not: " << mini.empty() << endl;

    
    set<int> s;  // it will create an set
    s.insert(5); // adding an element one-by-one
    s.insert(6);
    s.insert(4);
    s.insert(5);
    // it will print the elements one-by-one in a sorted order:
    for (auto i : s)
    {
        cout << "Print one-by-one: " << i << endl;
    }

    set<int>::iterator it = s.begin();
    it++;
    cout << "Print before erase: " << endl;
    s.erase(it); // it will erase the given index value:
    for (auto i : s)
    {
        cout << "Print one-by-one: " << i << endl;
    }
    cout << "Count the element: " << s.count(4) << endl; // it will give the present or absent value
    set<int>::iterator itr = s.find(4);
    // cout << "Value present at itr: " << *it << endl; //it will give you the iterator

    for (auto it = itr; it != s.end(); it++)
    {
        cout << "The iterator is: " << *it << " " << endl;
    }

    map<int, string> m; // Creating an map
    m[1] = "Tanish";    // Adding an element to the map one-by-one
    m[2] = "Kumar";
    m[4] = "Chandak";

    m.insert({3, "Gungun"}); // it will insert the key & value in the map

    // It will print the element one-by-one in sorted order:
    for (auto i : m)
    {
        cout << "The map element is: " << i.first << " " << i.second << endl;
    }
    cout << "3 is present of not: " << m.count(3) << endl; // it will check the if the element is present or not:
    cout << "Erase 3: " << m.erase(3) << endl;             // it will erase 3 from the map
    auto it = m.find(2);                                   // it will find the 2 in the map
    for (auto i = it; i != m.end(); i++)
    {
        cout << "find it: " << (*i).first << endl;
    }

    
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    // here we are search any element using the binary search:
    cout << "Using the binary search: " << binary_search(v.begin(), v.end(), 3) << endl;
    // it will give you the lower bound using the lower_bound:
    cout << "Finding the lower bond: " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    // it will give you the upper bound using the upper_bound:
    cout << "Finding the upper bond: " << upper_bound(v.begin(), v.end(), 7) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "Max -> " << max(a, b) << endl; // it will give you the max value form a and b
    cout << "Min -> " << min(a, b) << endl; // it will give you the min value form a and b

    cout << "Before Swapping:\nA -> " << a << "\nB -> " << b << endl;
    swap(a, b); // it is used to swap the values
    cout << "After Swapping:\nA -> " << a << "\nB -> " << b << endl;

    // Reverse Function:
    string abcd = "abcd";
    reverse(abcd.begin(), abcd.end()); // reverse is used to reversed the string
    cout << "string ->" << abcd << endl;

    // Rotate Function:
    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotate: " << endl;
    for (int i : v)
    {
        cout << "New: " << i << endl;
    }

    // Sort function:
    cout << "Before Sort: " << endl;
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << "New: " << i << endl;
    }
}