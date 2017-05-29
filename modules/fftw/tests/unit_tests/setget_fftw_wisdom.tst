// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2007-2008 - INRIA
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- CLI SHELL MODE -->

//=================================
//return fftw wisdom
try
  txt=get_fftw_wisdom();
  assert_checkequal(size(txt),[3 1]);
  //=================================
  //set fftw wisdom
  set_fftw_wisdom(txt);
  //=================================
  //reset fftw wisdom
  fftw_forget_wisdom()
  //=================================
end
