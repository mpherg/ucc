//! Code counter class methods for the VBScript language.
/*!
* \file CVbscriptCounter.cpp
*
* This file contains the code counter class methods for the VBScript language.
*/

#include "CVbscriptCounter.h"

#define CONTINUATION_CHAR '_'

/*!
* Constructs a CVbscriptCounter object.
*/
CVbscriptCounter::CVbscriptCounter()
{
	classtype = VBSCRIPT;
	language_name = "VBScript";

	file_extension.clear();
	file_extension.push_back(".vbs");
}

/*!
* Constructs a CVbsPhpCounter object.
*/
CVbsPhpCounter::CVbsPhpCounter()
{
	classtype = VBS_PHP;
	language_name = "VBScript/PHP";

	file_extension.clear();
	file_extension.push_back(".*vbsphp");
}

/*!
* Constructs a CVbsHtmlCounter object.
*/
CVbsHtmlCounter::CVbsHtmlCounter()
{
	classtype = VBS_HTML;
	language_name = "VBScript/HTML";

	file_extension.clear();
	file_extension.push_back(".*vbshtm");
}

/*!
* Constructs a CVbsXmlCounter object.
*/
CVbsXmlCounter::CVbsXmlCounter()
{
	classtype = VBS_XML;
	language_name = "VBScript/XML";

	file_extension.clear();
	file_extension.push_back(".*vbsxml");
}

/*!
* Constructs a CVbsJspCounter object.
*/
CVbsJspCounter::CVbsJspCounter()
{
	classtype = VBS_JSP;
	language_name = "VBScript/JSP";

	file_extension.clear();
	file_extension.push_back(".*vbsjsp");
}

/*!
* Constructs a CVbsAspServerCounter object.
*/
CVbsAspServerCounter::CVbsAspServerCounter()
{
	classtype = VBS_ASP_S;
	language_name = "VBScript/ASP Server";

	file_extension.clear();
	file_extension.push_back(".*vbsasps");
}

/*!
* Constructs a CVbsAspClientCounter object.
*/
CVbsAspClientCounter::CVbsAspClientCounter()
{
	classtype = VBS_ASP_C;
	language_name = "VBScript/ASP Client";

	file_extension.clear();
	file_extension.push_back(".*vbsaspc");
}

/*!
* Constructs a CVbsColdFusionCounter object.
*/
CVbsColdFusionCounter::CVbsColdFusionCounter()
{
	classtype = VBS_CFM;
	language_name = "VBScript/ColdFusion";

	file_extension.clear();
	file_extension.push_back(".*vbscfm");
}
