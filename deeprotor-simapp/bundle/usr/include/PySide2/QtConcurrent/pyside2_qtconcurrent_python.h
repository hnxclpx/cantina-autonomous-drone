/*
 * This file is part of PySide: Python for Qt
 *
 * Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
 *
 * Contact: PySide team <contact@pyside.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */



#ifndef SBK_QTCONCURRENT_PYTHON_H
#define SBK_QTCONCURRENT_PYTHON_H

//workaround to access protected functions
#define protected public

#include <sbkpython.h>
#include <conversions.h>
#include <sbkenum.h>
#include <basewrapper.h>
#include <bindingmanager.h>
#include <memory>

#include <pysidesignal.h>
// Module Includes
#include <pyside2_qtcore_python.h>

// Binded library includes
#include <qtconcurrentexception.h>
#include <qtconcurrentreducekernel.h>
// Conversion Includes - Primitive Types
#include <signalmanager.h>
#include <qabstractitemmodel.h>
#include <QString>
#include <typeresolver.h>
#include <QStringList>

// Conversion Includes - Container Types
#include <QQueue>
#include <QMultiMap>
#include <QVector>
#include <QLinkedList>
#include <QPair>
#include <QStack>
#include <QList>
#include <pysideconversions.h>
#include <QMap>
#include <QSet>

// Type indices
#define SBK_QTCONCURRENT_IDX                                         1
#define SBK_QTCONCURRENT_REDUCEOPTION_IDX                            2
#define SBK_QFLAGS_QTCONCURRENT_REDUCEOPTION__IDX                    0
#define SBK_QtConcurrent_IDX_COUNT                                   3

// This variable stores all Python types exported by this module.
extern PyTypeObject** SbkPySide2_QtConcurrentTypes;

// This variable stores all type converters exported by this module.
extern SbkConverter** SbkPySide2_QtConcurrentTypeConverters;

// Converter indices
#define SBK_QTCONCURRENT_QLIST_QVARIANT_IDX                          0 // QList<QVariant >
#define SBK_QTCONCURRENT_QLIST_QSTRING_IDX                           1 // QList<QString >
#define SBK_QTCONCURRENT_QMAP_QSTRING_QVARIANT_IDX                   2 // QMap<QString, QVariant >
#define SBK_QtConcurrent_CONVERTERS_IDX_COUNT                        3

// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject* SbkType< ::QtConcurrent::ReduceOption >() { return SbkPySide2_QtConcurrentTypes[SBK_QTCONCURRENT_REDUCEOPTION_IDX]; }
template<> inline PyTypeObject* SbkType< ::QFlags<QtConcurrent::ReduceOption> >() { return SbkPySide2_QtConcurrentTypes[SBK_QFLAGS_QTCONCURRENT_REDUCEOPTION__IDX]; }

} // namespace Shiboken

#endif // SBK_QTCONCURRENT_PYTHON_H

