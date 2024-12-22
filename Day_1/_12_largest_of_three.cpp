#include <iostream>
#include <vector>
using namespace std;

int largest(int a,int b, int c) {
    int max;
    if(a>=b&&a>=c) max = a;
    else if(b>=c&&b>=a) max = b;
    else if(c>=a&&c>=b) max = c;
    return max;
}

int main() {
    int a,b,c;
    cin>> a>>b>>c;

    cout<<largest(a,b,c);
    return 0;
}