#include <iostream>
#include <string>
#include <map>


using namespace std;

int main()
{
    cout << "Welcome to Week four practice" << endl;


    // Create a hash map!
    map <string, int> myDictionary01;
    myDictionary01.insert(pair <string, int> ("a", 4) );
    myDictionary01.insert(pair <string, int> ("b", 3) );
    myDictionary01.insert(pair <string, int> ("c", 2) );
    myDictionary01.insert(pair <string, int> ("d", 5) );

    for (auto pair:myDictionary01) {
        cout << pair.first << " - " << pair.second << endl;
    }

    // increment the values of our keys
    myDictionary01["b"]++;
    myDictionary01["c"]++;
    myDictionary01["c"]++;



cout << "\n\n";

    for (auto pair:myDictionary01) {
        cout << pair.first << " - " << pair.second << endl;
    }


    return 0;
}
