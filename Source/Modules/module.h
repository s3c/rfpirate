/*
 * module.h
 *
 * Created: 2014/06/17 11:07:08 AM
 *  Author: Chris
 */ 


#ifndef MODULE_H_
#define MODULE_H_

#include "../rfpirate.h"

typedef struct {
	
	//char MODID;
	char RFTYPE; //Change to proper rftype, values only passed to this module if same current rftype
	char *modname; //name shown on LCD
	
	//int (*modinit)(void *);
	int (*modlcdinit)(void *);
	int (*modprocess)(void *);
	int (*modexit)(void *);
	
} rfmod;

#endif /* MODULETEMPLATE_H_ */