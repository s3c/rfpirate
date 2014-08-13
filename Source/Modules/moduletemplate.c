/*
 * moduletemplate.c
 *
 * Created: 2014/06/17 10:46:53 AM
 *  Author: jstephenson
 */ 

#include "module.h"

void templateInit(void);
void templateLcdCall(void);
void templateProcess(void);
void templateCleanup(void);

rfModuleS modTemplateSM = {
	RTIDLE,
	MODIDTEMPLATE,
	"templatemodule",
	templateInit,
	templateLcdCall,
	templateProcess,
	templateCleanup
};

void templateInit(void){
	
}

void templateLcdCall(void){
	
}

void templateProcess(void){
	
}

void templateCleanup(void){
	
}