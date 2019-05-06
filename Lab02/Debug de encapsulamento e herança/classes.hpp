#ifndef CLASSES_H
#define CLASSES_H
#include <iostream>

class ClasseBase{
    public:
        int var_public;
    private:
        int var_private;
    protected:
        int var_protected;
    
    public:
        void set_var_public(int x);
        void set_var_private(int z);
        void set_var_protected(int y);
        void get_var_public();
        void get_var_private();
        void get_var_protected();
};


class A2 : private ClasseBase {
    public:
        int var_public2;
    private:
        int var_private2;
    protected:
        int var_protected2;

    public:
        void set_var_publicA2(int x);
        void set_var_privateA2(int x);
        void set_var_private2(int x);
        void set_var_protectedA2(int x);
        void set_var_protected2(int x);
        void get_var_publicA2();
        void get_var_privateA2();
        void get_var_private2();
        void get_var_protectedA2();
        void get_var_protected2();
};


class A3 : public A2{
    public:
        int var_public3;
    private:
        int var_private3;
    protected:
        int var_protected3;

    public:
        void set_var_public2(int x);
        void set_var_public(int x);
        void set_var_private(int x);
        void set_var_protected(int x);
        void set_var_private2(int x);
        void set_var_protected2(int x);
        void set_var_private3(int x);
        void set_var_protected3(int x);
        void get_var_private2();
        void get_var_publicA3();
        void get_var_privateA3();
        void get_var_protectedA3();
        void get_var_public2();
        void get_var_protected2();
        void get_var_private3();
        void get_var_protected3();
}; 


class ClassePublica : public ClasseBase{
    public:
        int var_public3;
    private:
        int var_private3;
    protected:
        int var_protected3;
        
    public:
        ClassePublica(){
            set_var_public(0); 
            set_var_private(0); 
            set_var_protected(0); 
        }
        void set_var_public(int x);
        void set_var_private(int x);
        void set_var_protected(int x);
        int get_var_public();
        void get_var_private();
        void get_var_protected();
        void get_var_publicHerdada();
        void get_var_privateHerdada();
        void get_var_protectedHerdada();
}; 


class ClassePrivada : private ClasseBase{
    public:
        ClassePrivada(){
            var_public = 0; 
            set_var_private(0); 
            set_var_protected(0); 
        }
        void set_var_publicPri(int y);
        void set_var_privatePri(int y);
        void set_var_protectedPri(int y);
        void get_var_publicHerdada();
        void get_var_privateHerdada();
        void get_var_protectedHerdada();
};

class OverloadPrivada : private ClasseBase{
    public:
        int var_public;
    private:
        int var_private;
    protected:
        int var_protected;  

    public:
        void set_var_privateOver(int x);
        void set_var_publicOver(int x);
        void set_var_protectedOver(int x);
        void get_var_publicHerdada();
        void get_var_privateHerdada();
        void get_var_protectedHerdada();
};

#endif