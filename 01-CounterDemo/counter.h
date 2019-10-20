/* cpp-examples by A.A.Shtanyuk */
/* counter.h - The definition of the Counter class */

#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter
{
public:
  Counter();
  Counter(int);
  ~Counter();
  void inc();
  void dec();
  void reset();
  void set(int);
  int  get() const;
private:
  int count;
};

#endif