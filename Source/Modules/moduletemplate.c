/*
 * moduletemplate.c
 *
 * Created: 2014/06/17 10:46:53 AM
 *  Author: Chris
 */ 

#include "module.h"

//int templateinit(void *initparam);
int templatelcdcall(void *initparam);
int templateprocess(void *initparam);
int templatecleanup(void *initparam);

rfmod modtemplate = {
	RTIDLE,
	"templatemodule",
	//templateinit,
	templatelcdcall,
	templateprocess,
	templatecleanup
};

/*int templateinit(void *initparam){
	
	return 0;
}*/

int templatelcdcall(void *initparam){
	
	return 0;
}

int templateprocess(void *initparam){
	
	return 0;
}

int templatecleanup(void *initparam){
	
	return 0;
}