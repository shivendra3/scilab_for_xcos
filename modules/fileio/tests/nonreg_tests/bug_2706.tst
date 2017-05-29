// =============================================================================
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2008 - INRIA - Sylvestre LEDRU <sylvestre.ledru@inria.fr>
//
//  This file is distributed under the same license as the Scilab package.
// =============================================================================

// <-- CLI SHELL MODE -->

// <-- Non-regression test for bug 2706 -->
//
// <-- Bugzilla URL -->
// http://bugzilla.scilab.org/show_bug.cgi?id=2706
//
// <-- Short Description -->
//    listfiles is giving wrong result under Linux on a file without extension

cd(TMPDIR);
mputl("","toto");
file_without_extension=listfiles("toto");
if file_without_extension == [] then pause,end
