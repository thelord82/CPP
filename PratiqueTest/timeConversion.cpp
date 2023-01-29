
#include <string>
#include <iostream>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */
 
string split(string og, char delim)
{
    string result;
    int i = 0;
    while (og[i] != delim)
    {
        result += og[i];
        i++;
    }
    
    return (result);
}

string timeConversion(string s) {
    string  result;
    string  splitted = split(s, ':');
    int hours = stoi(splitted);
    
    if (s.find("AM") != string::npos) // Si on est en avant-midi
    {
        if (hours == 12)
            result = "00";
        if (hours < 10)
            result = "0" + to_string(hours);
        result.append(s, 2, 6);
    }
    else if (s.find("PM") != string::npos) // Si on est en apres-midi
    {
        if (hours != 12)
            hours += 12;
        result = to_string(hours);
        result.append(s, 2, 6);
    }
    return (result);
}

int main()
{
    //ofstream fout(getenv("OUTPUT_PATH"));
//
    //string s;
    //getline(cin, s);
//
    //string result = timeConversion(s);
//
    //fout << result << "\n";
//
    //fout.close();
//
    //return 0;

    string time = "06:00:47PM";
    string result = timeConversion(time);
    cout << result << endl;

}
