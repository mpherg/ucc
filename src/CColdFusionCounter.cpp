//! Code counter class methods for the ColdFusion language.
/*!
* \file CColdFusionCounter.cpp
*
* This file contains the code counter class methods for the ColdFusion language.
*/

#include "CColdFusionCounter.h"

/*!
* Constructs a CColdFusionCounter object.
*/
CColdFusionCounter::CColdFusionCounter()
{
	classtype = COLDFUSION;
	language_name = "ColdFusion";

	file_extension.push_back(".*cfm");

	BlockCommentStart.push_back("<!---");
	BlockCommentEnd.push_back("--->");

	data_name_list.push_back("cfapplication");
	data_name_list.push_back("cfapplet");
	data_name_list.push_back("cfargument");
	data_name_list.push_back("cfcomponent");
	data_name_list.push_back("cffunction");
	data_name_list.push_back("cfimport");
	data_name_list.push_back("cfinclude");
	data_name_list.push_back("cfinterface");
	data_name_list.push_back("cfproperty");
	data_name_list.push_back("cfset");

	exec_name_list.push_back("cfabort");
	exec_name_list.push_back("cfassociate");
	exec_name_list.push_back("cfbreak");
	exec_name_list.push_back("cfcache");
	exec_name_list.push_back("cfcase");
	exec_name_list.push_back("cfcatch");
	exec_name_list.push_back("cfcontent");
	exec_name_list.push_back("cfcontinue");
	exec_name_list.push_back("cfcookie");
	exec_name_list.push_back("cfdbinfo");
	exec_name_list.push_back("cfdefaultcase");
	exec_name_list.push_back("cfdirectory");
	exec_name_list.push_back("cfdiv");
	exec_name_list.push_back("cfdocument");
	exec_name_list.push_back("cfdump");
	exec_name_list.push_back("cfelse");
	exec_name_list.push_back("cfelseif");
	exec_name_list.push_back("cferror");
	exec_name_list.push_back("cfexchange");
	exec_name_list.push_back("cfexecute");
	exec_name_list.push_back("cfexit");
	exec_name_list.push_back("cffeed");
	exec_name_list.push_back("cffile");
	exec_name_list.push_back("cffinally");
	exec_name_list.push_back("cfflush");
	exec_name_list.push_back("cfform");
	exec_name_list.push_back("cfftp");
	exec_name_list.push_back("cfgrid");
	exec_name_list.push_back("cfheader");
	exec_name_list.push_back("cfhtmlhead");
	exec_name_list.push_back("cfhttp");
	exec_name_list.push_back("cfif");
	exec_name_list.push_back("cfimage");
	exec_name_list.push_back("cfindex");
	exec_name_list.push_back("cfinput");
	exec_name_list.push_back("cfinsert");
	exec_name_list.push_back("cfinvoke");
	exec_name_list.push_back("cflayout");
	exec_name_list.push_back("cfldap");
	exec_name_list.push_back("cflocation");
	exec_name_list.push_back("cflock");
	exec_name_list.push_back("cflog");
	exec_name_list.push_back("cflogin");
	exec_name_list.push_back("cflogout");
	exec_name_list.push_back("cfloop");
	exec_name_list.push_back("cfmail");
	exec_name_list.push_back("cfobject");
	exec_name_list.push_back("cfoutput");
	exec_name_list.push_back("cfparam");
	exec_name_list.push_back("cfpod");
	exec_name_list.push_back("cfpop");
	exec_name_list.push_back("cfpresentation");
	exec_name_list.push_back("cfprint");
	exec_name_list.push_back("cfprocessdirective");
	exec_name_list.push_back("cfprocparam");
	exec_name_list.push_back("cfprocresult");
	exec_name_list.push_back("cfquery");
	exec_name_list.push_back("cfregistry");
	exec_name_list.push_back("cfrethrow");
	exec_name_list.push_back("cfreturn");
	exec_name_list.push_back("cfsavecontent");
	exec_name_list.push_back("cfschedule");
	exec_name_list.push_back("cfscript");
	exec_name_list.push_back("cfsearch");
	exec_name_list.push_back("cfselect");
	exec_name_list.push_back("cfsetting");
	exec_name_list.push_back("cfsilent");
	exec_name_list.push_back("cfstoredproc");
	exec_name_list.push_back("cfswitch");
	exec_name_list.push_back("cfthread");
	exec_name_list.push_back("cfthrow");
	exec_name_list.push_back("cftimer");
	exec_name_list.push_back("cftrace");
	exec_name_list.push_back("cftransaction");
	exec_name_list.push_back("cftry");
	exec_name_list.push_back("cfupdate");

	math_func_list.push_back("abs");
	math_func_list.push_back("arrayavg");
	math_func_list.push_back("arraysum");
	math_func_list.push_back("ceiling");
	math_func_list.push_back("decrementvalue");
	math_func_list.push_back("exp");
	math_func_list.push_back("fix");
	math_func_list.push_back("incrementvalue");
	math_func_list.push_back("int");
	math_func_list.push_back("max");
	math_func_list.push_back("min");
	math_func_list.push_back("mod");
	math_func_list.push_back("pi");
	math_func_list.push_back("precisionevaluate");
	math_func_list.push_back("rand");
	math_func_list.push_back("randomize");
	math_func_list.push_back("randrange");
	math_func_list.push_back("round");
	math_func_list.push_back("sgn");
	math_func_list.push_back("sqr");

	trig_func_list.push_back("acos");
	trig_func_list.push_back("asin");
	trig_func_list.push_back("atn");
	trig_func_list.push_back("cos");
	trig_func_list.push_back("sin");
	trig_func_list.push_back("tan");

	log_func_list.push_back("log");
	log_func_list.push_back("log10");

	cmplx_calc_list.push_back("+");
	cmplx_calc_list.push_back("-");
	cmplx_calc_list.push_back("*");
	cmplx_calc_list.push_back("/");
	cmplx_calc_list.push_back("++");
	cmplx_calc_list.push_back("--");
	cmplx_calc_list.push_back("mod");
	cmplx_calc_list.push_back("%");
	cmplx_calc_list.push_back("^");

	cmplx_cond_list.push_back("cfcase");
	cmplx_cond_list.push_back("cfelse");
	cmplx_cond_list.push_back("cfelseif");
	cmplx_cond_list.push_back("cfif");
	cmplx_cond_list.push_back("cfloop");

	cmplx_logic_list.push_back("eq");
	cmplx_logic_list.push_back("neq");
	cmplx_logic_list.push_back("gt");
	cmplx_logic_list.push_back("gte");
	cmplx_logic_list.push_back("lt");
	cmplx_logic_list.push_back("lte");
	cmplx_logic_list.push_back("&&");
	cmplx_logic_list.push_back("||");
	cmplx_logic_list.push_back("not");
	cmplx_logic_list.push_back("and");
	cmplx_logic_list.push_back("or");
	cmplx_logic_list.push_back("xor");
	cmplx_logic_list.push_back("equiv");
	cmplx_logic_list.push_back("imp");
	cmplx_logic_list.push_back("is");

	cmplx_assign_list.push_back("=");
}
