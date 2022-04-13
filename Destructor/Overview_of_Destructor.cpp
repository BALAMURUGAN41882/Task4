#include <cstdio>

struct Tamilnadu      
{ 
    virtual ~Tamilnadu() 
{
    printf("Tamilnadu\n"); 
    
} };
struct Chennai : Tamilnadu 
{ 
    virtual ~Chennai() 
    { 
        printf("Chennai\n"); 
        
    } 
    
};
struct Coimbatore : Chennai 
{
    virtual ~Coimbatore() 
    {
        printf("Coimbatore\n");
        } 
    
};

struct Kerala      
{
    ~Kerala() 
    {
        printf("Kerala\n");
        }
        };
struct Cochin : Kerala 
{
    ~Cochin() 
    {
        printf("Cochin\n"); 
        
    }
    };
struct Ernakulam : Cochin 
{
    ~Ernakulam() 
    { printf("Ernakulam\n"); } 
    
};

int main() {
   Tamilnadu * a = new Tamilnadu;
   delete a;


   Kerala * b = new Ernakulam;
   delete b;

   Ernakulam * b2 = new Ernakulam;
   delete b2;
}

