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

			cout << "Cami�n: " << pid << " tomar� una pesa: "<< endl;
			cerr << "Cami�n: " << pid << " esperando pesa" << endl;
			sem.Wait();
			cerr << "Cami�n: " << pid << " Iniciando pesaje" << endl;
			cerr << "Cami�n: " << pid << " esperando 5 segundos del pesado" << endl;
			sleep(5);
			cout << "Cami�n: " << pid << " El valor recibido es " << i << endl;
			cerr << "Cami�n: " << pid << " la espera ha terminado" << endl;
			sem2.Signal();

	return 0;
}


