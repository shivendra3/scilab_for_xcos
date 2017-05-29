/*
* Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
* Copyright (C) DIGITEO - 2009 - Allan CORNET
*
* This file must be used under the terms of the CeCILL.
* This source file is licensed as described in the file COPYING, which
* you should have received as part of this distribution.  The terms
* are also available at
* http://www.cecill.info/licences/Licence_CeCILL_V2.1-en.txt
*
*/

/*--------------------------------------------------------------------------*/
#ifndef __DYNLIB_INTEGER_H__
#define __DYNLIB_INTEGER_H__

#ifdef _MSC_VER
#ifdef INTEGER_EXPORTS
#define INTEGER_IMPEXP __declspec(dllexport)
#else
#define INTEGER_IMPEXP __declspec(dllimport)
#endif
#else
#define INTEGER_IMPEXP
#endif

#endif /* __DYNLIB_INTEGER_H__ */
/*--------------------------------------------------------------------------*/
