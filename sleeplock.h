// Long-term locks for processes
#ifndef __SLEEPLOCK_H__
#define __SLEEPLOCK_H__

#include "types.h"
#include "spinlock.h"

struct sleeplock {
  uint locked;       // Is the lock held?
  struct spinlock lk; // spinlock protecting this sleep lock
  
  // For debugging:
  char *name;        // Name of lock.
  int pid;           // Process holding lock
};

#endif
