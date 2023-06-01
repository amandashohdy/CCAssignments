/////// MAKE SURE TO FULLY DOCUMENT THIS FILE //////

#ifndef NAMELIST_H_
#define NAMELIST_H_

#include <string>
#include "NameNode.h"
using namespace std;

class NameList {

	public:
		NameList() {
		   head = nullptr;
		   count = 0;
	   }

      void AddName(string aName); // student todo
      bool DeleteName(string aName); // student todo }

      int CountName(string aName) const; // student todo

      string DisplayNames() const;// student todo

      int Size() { return count; }
      
      void Clear();

	private:
		NameNode *head;
		int count;

};

#endif
