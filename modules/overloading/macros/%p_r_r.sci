// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) INRIA
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2.1-en.txt

function f=%p_r_r(m,f)
    // f=%p_r_r(p1,p2) <=> f= p1*(p2^(-1))
    // p1 polynomial matrix
    // p2: rational matrix
    //!

    if prod(size(f("num")))<>1 then f=m*invr(f),return,end
    f=rlist(m*f("den"),ones(m)*f("num"),f("dt"))
endfunction
