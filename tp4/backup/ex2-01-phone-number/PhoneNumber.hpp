
class PhoneNumber {
    private :
        unsigned int n1;
        unsigned int n2;
        unsigned int n3;
        unsigned int n4;
        unsigned int n5;
    public: // fonction membre : une methode de la classe , constructeur et destructeur 
        PhoneNumber(unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int e)
            :n1(a)
            ,n2(b)
            ,n3(c)
            ,n4(d)
            ,n5(e) {}
};