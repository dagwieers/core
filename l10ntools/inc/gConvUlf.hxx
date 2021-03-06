/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of the LibreOffice project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * This file incorporates work covered by the following license notice:
 *
 *   Licensed to the Apache Software Foundation (ASF) under one or more
 *   contributor license agreements. See the NOTICE file distributed
 *   with this work for additional information regarding copyright
 *   ownership. The ASF licenses this file to you under the Apache
 *   License, Version 2.0 (the "License"); you may not use this file
 *   except in compliance with the License. You may obtain a copy of
 *   the License at http://www.apache.org/licenses/LICENSE-2.0 .
 */

#ifndef GCONULF_HXX
#define GCONULF_HXX
#include "gConv.hxx"



/*****************************************************************************
 *************************   G C O N U L F . H X X   *************************
 *****************************************************************************
 * This is the class header for .ulf conversion
 *****************************************************************************/



/********************   C L A S S   D E F I N I T I O N   ********************/
class convert_ulf : public convert_gen_impl
{
  public:
    convert_ulf(l10nMem& crMemory);
    virtual ~convert_ulf();

    void setKey(char *syyText);
    void setText(char *syyText, bool bIsEnUs);
    void setValue(char *syyText);

  private:
    std::string msKey;


    void execute() override;
    void handleLines();
};
#endif
