#ifndef CPU_H
#define CPU_H

#include <Godot.hpp>
#include <Node.hpp>

namespace godot {

class CPU : public Node {
    GODOT_CLASS(CPU, Node)

private:
  unsigned cores;

public:
    static void _register_methods();

    CPU();
    ~CPU();

    void _init();
    void _process(float delta);
    unsigned get_cores();
    void set_cores(unsigned);
};
}

#endif
