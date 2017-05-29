/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008 - INRIA - Vincent COUVERT
 *
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at
 * http://www.cecill.info/licences/Licence_CeCILL_V2.1-en.txt
 *
 */

/*-----------------------------------------------------------------------------------*/
#include "Scierror.h"
#include "localization.h"
#include "gw_matio.h"
/*-----------------------------------------------------------------------------------*/
int gw_matio(void)
{
    Scierror(999, _("Scilab matio module not installed.\n"));
    return 0;
}
/*-----------------------------------------------------------------------------------*/

