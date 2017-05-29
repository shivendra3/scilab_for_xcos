/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.7
 *
 * Do not make changes to this file unless you know what you are doing--modify
 * the SWIG interface file instead.
 * ----------------------------------------------------------------------------- */

package org.scilab.modules.localization;


/**
  * @author Calixte DENIZET
  * @copyright Scilab Enterprises - 2012
  */
public class WindowsDefaultLanguage {

    /**
      * Constructor
      */
    protected WindowsDefaultLanguage() {
        throw new UnsupportedOperationException();
    }

    /**
    * Set and save the language in the registry (Windows only)
    * @param[in] lang the language to set and save.
    */
    public static void setdefaultlanguage(String lang) {
        WindowsDefaultLanguageJNI.setdefaultlanguage(lang);
    }


    /**
    * Get the language from the registry (Windows only)
    * @return the default language.
    */
    public static String getdefaultlanguage() {
        return WindowsDefaultLanguageJNI.getdefaultlanguage();
    }

}
