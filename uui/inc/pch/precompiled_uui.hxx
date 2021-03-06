/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 * This file is part of the LibreOffice project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */

/*
 This file has been autogenerated by update_pch.sh. It is possible to edit it
 manually (such as when an include file has been moved/renamed/removed). All such
 manual changes will be rewritten by the next run of update_pch.sh (which presumably
 also fixes all possible problems, so it's usually better to use it).

 Generated on 2015-11-14 14:16:41 using:
 ./bin/update_pch uui uui --cutoff=4 --exclude:system --exclude:module --exclude:local

 If after updating build fails, use the following command to locate conflicting headers:
 ./bin/update_pch_bisect ./uui/inc/pch/precompiled_uui.hxx "/opt/lo/bin/make uui.build" --find-conflicts
*/

#include <cassert>
#include <cstddef>
#include <memory>
#include <new>
#include <ostream>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <boost/noncopyable.hpp>
#include <osl/conditn.hxx>
#include <osl/diagnose.h>
#include <osl/file.hxx>
#include <osl/interlck.h>
#include <osl/mutex.hxx>
#include <osl/thread.hxx>
#include <rtl/digest.h>
#include <rtl/instance.hxx>
#include <rtl/strbuf.hxx>
#include <rtl/string.h>
#include <rtl/string.hxx>
#include <rtl/stringutils.hxx>
#include <rtl/textenc.h>
#include <rtl/unload.h>
#include <rtl/ustrbuf.hxx>
#include <rtl/ustring.h>
#include <rtl/ustring.hxx>
#include <sal/config.h>
#include <sal/detail/log.h>
#include <sal/log.hxx>
#include <sal/macros.h>
#include <sal/saldllapi.h>
#include <sal/types.h>
#include <sal/typesizes.h>
#include <vcl/layout.hxx>
#include <vcl/msgbox.hxx>
#include <vcl/svapp.hxx>
#include <com/sun/star/lang/XMultiServiceFactory.hpp>
#include <com/sun/star/task/XInteractionAbort.hpp>
#include <com/sun/star/task/XInteractionApprove.hpp>
#include <com/sun/star/task/XInteractionRequest.hpp>
#include <com/sun/star/uno/Any.hxx>
#include <com/sun/star/uno/Reference.h>
#include <com/sun/star/uno/Reference.hxx>
#include <com/sun/star/uno/RuntimeException.hpp>
#include <com/sun/star/uno/Sequence.h>
#include <com/sun/star/uno/Sequence.hxx>
#include <com/sun/star/uno/XInterface.hpp>
#include <com/sun/star/uno/genfunc.hxx>
#include <comphelper/comphelperdllapi.h>
#include <comphelper/processfactory.hxx>
#include <cppu/cppudllapi.h>
#include <cppu/unotype.hxx>
#include <tools/solar.h>
#include <tools/toolsdllapi.h>
#include <typelib/typedescription.h>
#include <uno/data.h>

/* vim:set shiftwidth=4 softtabstop=4 expandtab: */
