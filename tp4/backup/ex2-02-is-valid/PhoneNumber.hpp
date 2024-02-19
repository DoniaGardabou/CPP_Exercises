#include <vector>
class PhoneNumber {
    private :
        std::vector<int> _numbers;
        
    public: // fonction membre : une methode de la classe , constructeur et destructeur 
        PhoneNumber(int a, int b, int c, int d,  int e);
        bool is_valid();
};

/*
class PhoneNumber {
    private :
        int n1;
        int n2;
        int n3;
        int n4;
        int n5;
    public: // fonction membre : une methode de la classe , constructeur et destructeur 
        PhoneNumber(int a, int b, int c, int d,  int e)
            :n1(a)
            ,n2(b)
            ,n3(c)
            ,n4(d)
            ,n5(e) {}
        
        bool is_valid();
};*/