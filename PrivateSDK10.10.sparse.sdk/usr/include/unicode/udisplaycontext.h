/*
*****************************************************************************************
* Copyright (C) 2014, International Business Machines
* Corporation and others. All Rights Reserved.
*****************************************************************************************
*/

#ifndef UDISPLAYCONTEXT_H
#define UDISPLAYCONTEXT_H

#include "unicode/utypes.h"

#if !UCONFIG_NO_FORMATTING

/**
 * \file
 * \brief C API: Display context types (enum values)
 */

/**
 * Display context types, for getting values of a particular setting.
 * Note, the specific numeric values are internal and may change.
 * @stable ICU 51
 */
enum UDisplayContextType {
    /**
     * Type to retrieve the dialect handling setting, e.g.
     * UDISPCTX_STANDARD_NAMES or UDISPCTX_DIALECT_NAMES.
     * @stable ICU 51
     */
    UDISPCTX_TYPE_DIALECT_HANDLING = 0,
    /**
     * Type to retrieve the capitalization context setting, e.g.
     * UDISPCTX_CAPITALIZATION_NONE, UDISPCTX_CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE,
     * UDISPCTX_CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE, etc.
     * @stable ICU 51
     */
    UDISPCTX_TYPE_CAPITALIZATION = 1,

#ifndef U_HIDE_INTERNAL_API
    /**
     * Type to retrieve the capitalization context setting, e.g.
     * UDISPCTX_CAPITALIZATION_NONE, UDISPCTX_CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE,
     * UDISPCTX_CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE, etc.
     * @internal ICU 54
     */
    UADISPCTX_TYPE_LENGTH = 32,
#endif /* U_HIDE_INTERNAL_API */
};
/**
*  @stable ICU 51
*/
typedef enum UDisplayContextType UDisplayContextType;

/**
 * Display context settings.
 * Note, the specific numeric values are internal and may change.
 * @stable ICU 51
 */
enum UDisplayContext {
    /**
     * ================================
     * DIALECT_HANDLING can be set to one of UDISPCTX_STANDARD_NAMES or
     * UDISPCTX_DIALECT_NAMES. Use UDisplayContextType UDISPCTX_TYPE_DIALECT_HANDLING
     * to get the value.
     */
    /**
     * A possible setting for DIALECT_HANDLING:
     * use standard names when generating a locale name,
     * e.g. en_GB displays as 'English (United Kingdom)'.
     * @stable ICU 51
     */
    UDISPCTX_STANDARD_NAMES = (UDISPCTX_TYPE_DIALECT_HANDLING<<8) + 0,
    /**
     * A possible setting for DIALECT_HANDLING:
     * use dialect names, when generating a locale name,
     * e.g. en_GB displays as 'British English'.
     * @stable ICU 51
     */
    UDISPCTX_DIALECT_NAMES = (UDISPCTX_TYPE_DIALECT_HANDLING<<8) + 1,
    /**
     * ================================
     * CAPITALIZATION can be set to one of UDISPCTX_CAPITALIZATION_NONE,
     * UDISPCTX_CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE,
     * UDISPCTX_CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE,
     * UDISPCTX_CAPITALIZATION_FOR_UI_LIST_OR_MENU, or
     * UDISPCTX_CAPITALIZATION_FOR_STANDALONE.
     * Use UDisplayContextType UDISPCTX_TYPE_CAPITALIZATION to get the value.
     */
    /**
     * The capitalization context to be used is unknown (this is the default value).
     * @stable ICU 51
     */
    UDISPCTX_CAPITALIZATION_NONE = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 0,
    /**
     * The capitalization context if a date, date symbol or display name is to be
     * formatted with capitalization appropriate for the middle of a sentence.
     * @stable ICU 51
     */
    UDISPCTX_CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 1,
    /**
     * The capitalization context if a date, date symbol or display name is to be
     * formatted with capitalization appropriate for the beginning of a sentence.
     * @stable ICU 51
     */
    UDISPCTX_CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 2,
    /**
     * The capitalization context if a date, date symbol or display name is to be
     * formatted with capitalization appropriate for a user-interface list or menu item.
     * @stable ICU 51
     */
    UDISPCTX_CAPITALIZATION_FOR_UI_LIST_OR_MENU = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 3,
    /**
     * The capitalization context if a date, date symbol or display name is to be
     * formatted with capitalization appropriate for stand-alone usage such as an
     * isolated name on a calendar page.
     * @stable ICU 51
     */
    UDISPCTX_CAPITALIZATION_FOR_STANDALONE = (UDISPCTX_TYPE_CAPITALIZATION<<8) + 4,

#ifndef U_HIDE_INTERNAL_API
    /**
     * ================================
     * LENGTH can be set to one of UADISPCTX_LENGTH_STANDARD or
     * UADISPCTX_LENGTH_SHORT. Use UDisplayContextType UADISPCTX_TYPE_LENGTH
     * to get the value.
     */
    /**
     * A possible setting for LENGTH:
     * use standard length names when generating a locale name.
     * @internal ICU 54
     */
    UADISPCTX_LENGTH_STANDARD = (UADISPCTX_TYPE_LENGTH<<8) + 0,
    /**
     * A possible setting for DIALECT_HANDLING:
     * use short length names (if available) when generating a locale name
     * (in most cases short names are not available and the standard
     * name will be used).
     * @internal ICU 54
     */
    UADISPCTX_LENGTH_SHORT = (UADISPCTX_TYPE_LENGTH<<8) + 1,
#endif /* U_HIDE_INTERNAL_API */
};
/**
*  @stable ICU 51
*/
typedef enum UDisplayContext UDisplayContext;

#endif /* #if !UCONFIG_NO_FORMATTING */

#endif
