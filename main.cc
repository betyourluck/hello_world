#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    std::vector<string> v = {"Hello","Good morning","Good Afternoon"};
    std::replace_if(v.begin(),v.end(),[](const std::string& s){
        return (s == "Good morning" || s == "Good Afternoon");
    },"Hello");

    std::for_each(v.begin(),v.end(),[](const std::string& s){
        std::cout << s << " World!"<< std::endl;});

    return 0;
}
