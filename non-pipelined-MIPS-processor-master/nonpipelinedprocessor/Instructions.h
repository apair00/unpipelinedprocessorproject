#ifndef Instructions_H
#define Instructions_H
#include <string>
#include <vector>
using namespace std;
class Instruction {
private:
     int PCAddress;// first instruction is 0 then 1,2,3,4....
    string machinecode;// 32 bit machine code
     int opcode;//6 bit
     int rs; //5 bit
     int rt;//5 bit
     int rd; // 5 bit
     int shamt;//5 bit
     int funct;// 6 bit
    long int intermediate;
      int target;//26 bit
     int Type;// 'R' 'I' 'J'
    string InstructionName;//"add", "lw","addi".....
    
    
    
    
public:
    Instruction(string machinecode);
    void print(ofstream &output);
    int execute(int REGISTERS[], int MEMORY[]);// RETURNS PC ADDRESS(int) OF NEXT INSTRUCTON
    void reset();
    static int ObjectCount;
    vector<string> list;
};

#endif