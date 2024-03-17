class Solution {
public:
    string defangIPaddr(string address) {
        std::string defangedAddress;
         for (char ch : address) {
             if(ch == '.'){
                 defangedAddress+="[.]";
             }else {
                defangedAddress.push_back(ch); 
             }
         }
         return defangedAddress;
    }
};
