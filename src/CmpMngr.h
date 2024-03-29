//! Compare manager class definition.
/*!
* \file CmpMngr.h
*
* This file contains the compare manager class definition.
*/

#ifndef CMPMNGR_H
#define CMPMNGR_H

#include "cc_main.h"

using namespace std;

//! Compare manager class.
/*!
* \class CmpMngr
*
* Defines the compare manager class.
*/
class CmpMngr
{
public:
	void Compare(srcLineVector* baseFileMap, srcLineVector* compFileMap, double match_threshold);

	unsigned int nAddedLines;		//!< Number of lines added
	unsigned int nDeletedLines;		//!< Number of lines deleted
	unsigned int nChangedLines;		//!< Number of lines changed
	unsigned int nNochangedLines;	//!< Number of lines unchanged

private:
	void FindModifiedLines(srcLineVector* aHm, srcLineVector* bHm);
	void FindUnmodifiedLines(srcLineVector *aHm, srcLineVector *bHm);
	bool SimilarLine(const string &baseLine, const string &compareLine);

	double MATCH_THRESHOLD;			//!< % threshold for matching, if greater then added/deleted instead of modified
};

//! List of strings.
/*!
* \typedef stringList
*
* Defines a list of strings.
*/
typedef list<string> stringList;

//! Map of string lists.
/*!
* \typedef stringSizeMap
*
* Defines a map of string lists.
*/
typedef map<int, stringList> stringSizeMap;

#endif
