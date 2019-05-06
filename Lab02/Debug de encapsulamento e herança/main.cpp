#include <iostream>
#include "Classes.hpp"

using namespace std;

int main(){
    ClasseBase base;
    base.var_public = 1; 
    base.set_var_private(2); 
    base.set_var_protected(3); 
 
    ClassePublica pub;
    pub.var_public = 1; 
    pub.set_var_private(2); 
    pub.set_var_protected(3); 
    
    ClassePrivada pri;
    pri.set_var_publicPri(1); 
    pri.set_var_privatePri(2); 
    pri.set_var_protectedPri(3); 
    
    OverloadPrivada over;
    over.set_var_publicOver(1); 
    over.set_var_privateOver(2); 
    over.set_var_protectedOver(3);
    
    A2 a2;
    a2.set_var_publicA2(1);
    a2.set_var_privateA2(2); 
    a2.set_var_protectedA2(3);
    a2.var_public2 = 1;
    a2.set_var_private2(2);
    a2.set_var_protected2(3);
    
    A3 a3;
    a3.set_var_public(1);
    a3.set_var_private(2); 
    a3.set_var_protected(2);
    a3.set_var_public2(1);
    a3.set_var_private2(2);
    a3.set_var_protected2(3);
    a3.var_public3 = 1;
    a3.set_var_private3(2);
    a3.set_var_protected3(3);
    
    base.get_var_public(); 
    base.get_var_private();
    base.get_var_protected(); 
 
    pub.get_var_publicHerdada();
    pub.get_var_privateHerdada(); 
    pub.get_var_protectedHerdada();

    pri.get_var_publicHerdada(); 
    pri.get_var_privateHerdada(); 
    pri.get_var_protectedHerdada(); 
    
    over.get_var_publicHerdada(); 
    over.get_var_privateHerdada(); 
    over.get_var_protectedHerdada(); 

    a2.get_var_publicA2();
    a2.get_var_privateA2(); 
    a2.get_var_protectedA2(); 
    cout << a2.var_public2 << endl;
    a2.get_var_private2();
    a2.get_var_protected2();

    a3.get_var_publicA3();
    a3.get_var_privateA3(); 
    a3.get_var_protectedA3();
    a3.get_var_public2();
    a3.get_var_private2();
    a3.get_var_protected2();
    cout << a3.var_public3 << endl;
    a3.get_var_private3();
    a3.get_var_protected3();
    
}