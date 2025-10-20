class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for (string op : operations) { // este es un bucle que recorre el vector
            if (op == "++X" || op == "X++") { // si dice esto
                x += 1; // sumar 1
            }
            else if (op == "--X" || op == "X--") { // si dice esto
                x -= 1; // resta 1
            }
        }

        return x;
    }
};

