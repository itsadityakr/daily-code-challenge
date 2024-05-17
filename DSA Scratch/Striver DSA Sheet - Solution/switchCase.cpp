class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        switch(choice) {
            case 1: {
                double R = arr[0];
                return M_PI * R * R; // area of circle
            }
            case 2: {
                double L = arr[0];
                double B = arr[1];
                return L * B; // area of rectangle
            }
            default:
                return 0; // handle invalid choice
        }
    }
};