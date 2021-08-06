#include<iostream>
int main()
{
    string s = "rushi";

    //creating pair container
    pair <int, string> p(19,"rushi");

    cout << p.first << endl; //to get first value
    cout << p.second << endl;//to get second value

    pair <int, string> p1=p;

    cout << "After copy" << endl;
    cout << p1.first << endl;
    cout << p1.second << endl;

    int b[] = { 20,30,40 };
    int a[] = { 1,2,3 };
    

    pair <int, string> pa[3];  //creating array of pair

    int i;
    for (i = 0; i < 3; i++)
    {
        pa[i] = make_pair(a[i],b[i]);
    }

    for (i = 0; i < 3; i++)
    {
        cout << pa[i].first << endl;
        cout << pa[i].second << endl;
    }


    return 0;
}
