// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2008-2008 - INRIA - Vincent COUVERT
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- TEST WITH GRAPHIC -->

// <-- Non-regression test for bug 2597 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=2597
//
// <-- Short Description -->
// After creating a plot, annotating it, saving it to a .scg file, and then later loading it back into a Scilab Graphic window, Scilab complains...
// Actually a bug in axis object save/load

f = gcf();
drawaxis();
xsave(TMPDIR+"/bug_2597.scg");
delete(f);

if execstr("load(TMPDIR+""/bug_2597.scg"");","errcatch")<>0 then pause;end

delete(gcf());
