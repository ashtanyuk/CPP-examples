// Пример технологии "Письмо в конверте". Взято из интернета:
// http://cpp-reference.ru/articles/virtual-constructor/
// http://cpp-reference.ru/patterns/creational-patterns/

#include <iostream> 
#include <vector>
#include <assert>
 
// Идентификаторы всех родов войск
enum Warrior_ID { Infantryman_ID, Archer_ID, Horseman_ID };
 
class Warrior
{
  public:   
    Warrior(): p(0) { }
    Warrior( Warrior_ID id );
    virtual void info() { p->info(); }
    virtual ~Warrior() { delete p;  p=0; }    
  private: 
    Warrior* p;
};
 
class Infantryman: public Warrior
{
  public:           
    void info() { cout << "Infantryman" << endl; }          
  private:
    Infantryman(): Warrior() {}           
    Infantryman(Infantryman&);
    Infantryman operator=(Infantryman&);
    friend class Warrior;
};
 
class Archer: public Warrior
{
  public:       
    void info() { cout << "Archer" << endl; }    
  private:
    Archer(): Warrior() {}
    Archer(Archer&);
    Archer operator=(Archer&);
    friend class Warrior;
};
 
class Horseman: public Warrior
{    
  public:           
    void info() { cout << "Horseman" << endl; }       
  private:
    Horseman(): Warrior() {}    
    Horseman(Horseman&);
    Horseman operator=(Horseman&);
    friend class Warrior;
};
 
Warrior::Warrior( Warrior_ID id ) 
{
    if (id == Infantryman_ID) p = new Infantryman;
    else if (id == Archer_ID) p = new Archer;
    else if (id == Horseman_ID) p = new Horseman;
    else assert( false);
}    
 
 
int main()
{    
    vector<Warrior*> v;
    v.push_back( new Warrior( Infantryman_ID));
    v.push_back( new Warrior( Archer_ID));
    v.push_back( new Warrior( Horseman_ID));
     
    for(int i=0; i<v.size(); i++)
        v[i]->info();
    // ...
}