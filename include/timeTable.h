#ifndef _TIMETABLE_H_
#define _TIMETABLE_H_

class TimeTable
{
 public:
  TimeTable();
  virtual ~TimeTable();
};

class L1TimeTable:public TimeTable
{
 public:
  L1TimeTable();
  virtual ~L1TimeTable();
};

class L2TimeTable:public TimeTable
{
 public:
  L2TimeTable();
  virtual ~L2TimeTable();
};

#endif /* _TIMETABLE_H_*/




