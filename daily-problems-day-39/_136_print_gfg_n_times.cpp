// https://www.geeksforgeeks.org/problems/print-gfg-n-times/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-gfg-n-times

class Solution
{
public:
    int printGfg(int n)
    {
        if(n==0)
            return 0;
        std::cout << "GFG" << " ";
        printGfg(n - 1);
    }
};