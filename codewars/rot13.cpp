// Better implementation with switch possible

#include <string>
using namespace std;

string rot13(string msg) {
    for (int i = 0; i < msg.size(); i++) {
        if (msg[i] >= 'A' && msg[i] <= 'Z') {
            if (msg[i] < 'N')
                msg[i] += 13;
            else
                msg[i] -= 13;
        } else if (msg[i] >= 'a' && msg[i] <= 'z') {
            if (msg[i] < 'n')
                msg[i] += 13;
            else
                msg[i] -= 13;
        }
    }
    return msg;
}
