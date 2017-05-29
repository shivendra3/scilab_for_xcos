// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2011 - DIGITEO - Allan CORNET
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================
//
// <-- CLI SHELL MODE -->
//
// <-- Non-regression test for bug 10320 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=10320
//
// <-- Short Description -->
// libname argument of ilib_for_link did not work


ilib_verbose(0);
chdir(TMPDIR);
f1 = ['int ext1c(int *n, double *a, double *b, double *c)'
      '{int k;'
      '  for (k = 0; k < *n; ++k) '
      '      c[k] = a[k] + b[k];'
      '  return(0);}'];

mputl(f1, 'fun1.c');
name = ilib_for_link('ext1c','fun1.c',[],"c", "", "", "toto");
refname = "lib" + "toto" + getdynlibext();
assert_checkequal(name, refname);
exec('loader.sce');


