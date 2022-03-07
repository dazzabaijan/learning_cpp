#include <cstdio>
#include <string>

const std::string unk = "unknown";
const std::string clone_prefix = "clone-";

// -- interface --
class Animal {
    std::string a_type = "";
    std::string a_name = "";
    std::string a_sound = "";
public:
    // default constructor
    Animal();
    Animal(const std::string &type, const std::string &name, const std::string &sound);
    // copy constructor
    Animal(const Animal &); 

    // destructor
    ~Animal();
    // copy operator
    Animal &operator = (const Animal &);
    void print() const;
};

// -- implementation --
Animal::Animal() : a_type(unk), a_name(unk), a_sound(unk){
    puts("default constructor");
}

Animal::Animal(const std::string &type, const std::string &name, const std::string &sound)
: a_type(type), a_name(name), a_sound(sound) {
    puts("cosntructor with arguments");
}

Animal::Animal(const Animal &a) {
    puts("copy constructor");
    a_name = clone_prefix + a.a_name;
    a_type = a.a_type;
    a_sound = a.a_sound;
}

Animal::~Animal(){
    printf("destructor: %s the %s\n", a_name.c_str(), a_type.c_str());
    a_name = "";
    a_type = "";
    a_sound = "";
}

Animal &Animal::operator = (const Animal &o){
    puts("assignment operator");
    if(this != &o){
        a_name = clone_prefix + o.a_name;
        a_type = o.a_type;
        a_sound = o.a_sound;
    }
    return *this;
}

void Animal::print () const {
    printf("%s the %s says %s\n", a_name.c_str(), a_type.c_str(), a_sound.c_str());
}

int main() {
    // constructing with default constructor
    Animal a;
    a.print();

    // constructing with explicit strings
    const Animal b("goat", "bob", "baah");
    b.print();

    // constructing with copy constructor from b
    const Animal c = b;
    c.print();

    // using the assignment operator to assign c back to a
    a = c;
    a.print();

    puts("end of main");
    return 0;
}