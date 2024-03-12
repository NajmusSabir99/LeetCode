class Solution {
public:
    string interpret(string command) {
        string result;
        for(int i=0;i<command.size();i++){
            if(command.substr(i, 2) == "()"){
                result += 'o';
                ++i; 
            }else if(command.substr(i, 4) == "(al)") {
                result += "al";
                i += 3; 
            } else {
                result += command[i];
            }
        }
        return result;
    }
};