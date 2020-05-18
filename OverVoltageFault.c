#include <stdlib.h>
#include <stdbool.h>
#include "Faults.h"
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

bool OverV(int MaxV, int ReadV){
	if (MaxV > ReadV){
		return False;
	}
	else {
		return True;
	}
}
