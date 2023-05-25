#include "cpu.h"
#include <ice_cpu.h>
#include <stdio.h>

using namespace godot;

void CPU::_register_methods() {
  register_method("_process", &CPU::_process);
  register_property<CPU, unsigned>("cores", &CPU::set_cores, &CPU::get_cores, 0);

}

CPU::CPU() {
}

CPU::~CPU() {
    // add your cleanup here
}

void CPU::_init(){
  ice_cpu_info cpu;
  ice_cpu_bool res = ice_cpu_get_info(&cpu);
  cores = cpu.cores;
  printf("cores: %d\n", cores);
}

unsigned CPU::get_cores(){
  return cores;
}

void CPU::set_cores(unsigned cores){
  return;
}

void CPU::_process(float delta){
}
