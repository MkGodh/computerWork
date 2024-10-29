#include <ram.h>
#include <cpu.h>
#include <disk.h>
#include <display.h>
#include <keyboard.h>
#include <iostream>

int main() {
 std::string command;

 std::cout << "Computer started" << std::endl;
 while(command != "exit") {
 std::cout << "Input a command: sum, save, load, input, display or exit to finish programm." << std::endl;
  std::cin >> command;
  if(command == "sum") {
   compute();
  }
  else if(command == "save") {
   save();
  }
  else if (command == "load") {
   load();
  }
  else if(command == "input") {
   input();
  }
  else if(command == "display") {
   display();
  }
  else if(command == "exit") {
   std::cout << "Computer finished his job.";
   break;
  }
  else{
   std::cout << "Wrong command! Try again" << std::endl;
   continue;
  }
 }

 return 0;
}
