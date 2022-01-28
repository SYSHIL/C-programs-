
#include <stdio.h>
enum Bool {False,True};
//if we dont assign values to enum names compiler will do it for us starting from zero - automatic initialization
// Note that enum can be declared in local scope as well
// Only integral values are allowed 
// All enum constants must be unique in their scope 
int main()
{
    enum Bool var;
    var = True;
    printf("%d",var);
    return 0;
}
