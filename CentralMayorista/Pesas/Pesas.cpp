#ifndef __SIMPLESEMAPHORE_H_
#include <SimpleSemaphore.h>
#define __SIMPLESEMAPHORE_H_
#endif

#ifndef __SHAREDMEMORY_H_
#include <SharedMemory.h>
#define __SHAREDMEMORY_H_
#endif

#ifndef __IOSTREAM__
#include <iostream>
#define __IOSTREAM__
#endif

#ifndef __UNISTD_H_
#include <unistd.h>
#define __UNISTD_H_
#endif

using std::cout;
using std::cerr;
using std::endl;

int main() {
	SimpleSemaphore sem("/sem",0);
	SimpleSemaphore sem2("/sem2");
	SharedMemory<int> sm("/sm");
	int &i = sm();

	int pid = getpid();
		for (int cont = 0; cont <3; cont++) {
			cerr << "Esperando por buffer" << endl;
			sem2.Wait();
			sleep(5);
			i++;
			cout << "Pesa disponble: "  << i << endl;
			sem.Signal();
		}
	return 0;
}

