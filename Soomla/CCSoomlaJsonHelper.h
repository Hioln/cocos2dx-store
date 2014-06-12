//
// Created by Fedor Shubin on 6/22/13.
//



#ifndef __CCSoomlaJsonHelper_H_
#define __CCSoomlaJsonHelper_H_

#include <iostream>
#include "cocos2d.h"
#include "jansson.h"

/** \class CCSoomlaJsonHelper
	\brief A helper class to generate CCObjects from JSON objects and vice versa.

	A helper class to generate CCObjects from JSON strings and vice versa.
 */
class CCSoomlaJsonHelper {
 public:
	/**
	   Generate a CC object from a JSON object.
	   \param obj The object to use for generation
	 */
    static cocos2d::Ref *getCCObjectFromJson(json_t *obj);

	/**
	   Generate a JSON object from a CC object.
	   \param obj The object to use for generation
	*/
	static json_t *getJsonFromCCObject(cocos2d::Ref* obj);
};


#endif //__CCSoomlaJsonHelper_H_
