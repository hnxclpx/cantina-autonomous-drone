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



#ifndef SBK_QTPRINTSUPPORT_PYTHON_H
#define SBK_QTPRINTSUPPORT_PYTHON_H

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
#include <pyside2_qtwidgets_python.h>
#include <pyside2_qtgui_python.h>
#include <pyside2_qtcore_python.h>

// Binded library includes
#include <qprinterinfo.h>
#include <qprintengine.h>
#include <qprintpreviewwidget.h>
#include <qprintdialog.h>
#include <qprintpreviewdialog.h>
#include <qpagesetupdialog.h>
#include <qabstractprintdialog.h>
#include <qprinter.h>
// Conversion Includes - Primitive Types
#include <signalmanager.h>
#include <typeresolver.h>
#include <QString>
#include <qabstractitemmodel.h>
#include <QStringList>

// Conversion Includes - Container Types
#include <QMultiMap>
#include <QQueue>
#include <QVector>
#include <QList>
#include <QMap>
#include <QSet>
#include <QPair>
#include <QLinkedList>
#include <pysideconversions.h>
#include <QStack>

// Type indices
#define SBK_QPRINTERINFO_IDX                                         23
#define SBK_QPRINTENGINE_IDX                                         6
#define SBK_QPRINTENGINE_PRINTENGINEPROPERTYKEY_IDX                  7
#define SBK_QPRINTER_IDX                                             12
#define SBK_QPRINTER_PRINTERMODE_IDX                                 20
#define SBK_QPRINTER_ORIENTATION_IDX                                 15
#define SBK_QPRINTER_PAGEORDER_IDX                                   17
#define SBK_QPRINTER_COLORMODE_IDX                                   13
#define SBK_QPRINTER_PAPERSOURCE_IDX                                 18
#define SBK_QPRINTER_PRINTERSTATE_IDX                                21
#define SBK_QPRINTER_OUTPUTFORMAT_IDX                                16
#define SBK_QPRINTER_PRINTRANGE_IDX                                  19
#define SBK_QPRINTER_UNIT_IDX                                        22
#define SBK_QPRINTER_DUPLEXMODE_IDX                                  14
#define SBK_QPRINTPREVIEWWIDGET_IDX                                  9
#define SBK_QPRINTPREVIEWWIDGET_VIEWMODE_IDX                         10
#define SBK_QPRINTPREVIEWWIDGET_ZOOMMODE_IDX                         11
#define SBK_QPAGESETUPDIALOG_IDX                                     4
#define SBK_QPRINTPREVIEWDIALOG_IDX                                  8
#define SBK_QABSTRACTPRINTDIALOG_IDX                                 0
#define SBK_QABSTRACTPRINTDIALOG_PRINTRANGE_IDX                      2
#define SBK_QABSTRACTPRINTDIALOG_PRINTDIALOGOPTION_IDX               1
#define SBK_QFLAGS_QABSTRACTPRINTDIALOG_PRINTDIALOGOPTION__IDX       3
#define SBK_QPRINTDIALOG_IDX                                         5
#define SBK_QtPrintSupport_IDX_COUNT                                 24

// This variable stores all Python types exported by this module.
extern PyTypeObject** SbkPySide2_QtPrintSupportTypes;

// This variable stores all type converters exported by this module.
extern SbkConverter** SbkPySide2_QtPrintSupportTypeConverters;

// Converter indices
#define SBK_QTPRINTSUPPORT_QLIST_QPRINTERINFO_IDX                    0 // QList<QPrinterInfo >
#define SBK_QTPRINTSUPPORT_QLIST_QPRINTER_DUPLEXMODE_IDX             1 // QList<QPrinter::DuplexMode >
#define SBK_QTPRINTSUPPORT_QLIST_QPAGEDPAINTDEVICE_PAGESIZE_IDX      2 // QList<QPagedPaintDevice::PageSize >
#define SBK_QTPRINTSUPPORT_QLIST_INT_IDX                             3 // QList<int >
#define SBK_QTPRINTSUPPORT_QPAIR_QSTRING_QSIZEF_IDX                  4 // QPair<QString, QSizeF >
#define SBK_QTPRINTSUPPORT_QLIST_QPAIR_QSTRING_QSIZEF_IDX            5 // QList<QPair<QString, QSizeF > >
#define SBK_QTPRINTSUPPORT_QLIST_QACTIONPTR_IDX                      6 // QList<QAction * >
#define SBK_QTPRINTSUPPORT_QLIST_QWIDGETPTR_IDX                      7 // const QList<QWidget * > &
#define SBK_QTPRINTSUPPORT_QLIST_QVARIANT_IDX                        8 // QList<QVariant >
#define SBK_QTPRINTSUPPORT_QLIST_QSTRING_IDX                         9 // QList<QString >
#define SBK_QTPRINTSUPPORT_QMAP_QSTRING_QVARIANT_IDX                 10 // QMap<QString, QVariant >
#define SBK_QtPrintSupport_CONVERTERS_IDX_COUNT                      11

// Macros for type check

namespace Shiboken
{

// PyType functions, to get the PyObjectType for a type T
template<> inline PyTypeObject* SbkType< ::QPrinterInfo >() { return reinterpret_cast<PyTypeObject*>(SbkPySide2_QtPrintSupportTypes[SBK_QPRINTERINFO_IDX]); }
template<> inline PyTypeObject* SbkType< ::QPrintEngine::PrintEnginePropertyKey >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTENGINE_PRINTENGINEPROPERTYKEY_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrintEngine >() { return reinterpret_cast<PyTypeObject*>(SbkPySide2_QtPrintSupportTypes[SBK_QPRINTENGINE_IDX]); }
template<> inline PyTypeObject* SbkType< ::QPrinter::PrinterMode >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_PRINTERMODE_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrinter::Orientation >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_ORIENTATION_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrinter::PageOrder >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_PAGEORDER_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrinter::ColorMode >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_COLORMODE_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrinter::PaperSource >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_PAPERSOURCE_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrinter::PrinterState >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_PRINTERSTATE_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrinter::OutputFormat >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_OUTPUTFORMAT_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrinter::PrintRange >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_PRINTRANGE_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrinter::Unit >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_UNIT_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrinter::DuplexMode >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_DUPLEXMODE_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrinter >() { return reinterpret_cast<PyTypeObject*>(SbkPySide2_QtPrintSupportTypes[SBK_QPRINTER_IDX]); }
template<> inline PyTypeObject* SbkType< ::QPrintPreviewWidget::ViewMode >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTPREVIEWWIDGET_VIEWMODE_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrintPreviewWidget::ZoomMode >() { return SbkPySide2_QtPrintSupportTypes[SBK_QPRINTPREVIEWWIDGET_ZOOMMODE_IDX]; }
template<> inline PyTypeObject* SbkType< ::QPrintPreviewWidget >() { return reinterpret_cast<PyTypeObject*>(SbkPySide2_QtPrintSupportTypes[SBK_QPRINTPREVIEWWIDGET_IDX]); }
template<> inline PyTypeObject* SbkType< ::QPageSetupDialog >() { return reinterpret_cast<PyTypeObject*>(SbkPySide2_QtPrintSupportTypes[SBK_QPAGESETUPDIALOG_IDX]); }
template<> inline PyTypeObject* SbkType< ::QPrintPreviewDialog >() { return reinterpret_cast<PyTypeObject*>(SbkPySide2_QtPrintSupportTypes[SBK_QPRINTPREVIEWDIALOG_IDX]); }
template<> inline PyTypeObject* SbkType< ::QAbstractPrintDialog::PrintRange >() { return SbkPySide2_QtPrintSupportTypes[SBK_QABSTRACTPRINTDIALOG_PRINTRANGE_IDX]; }
template<> inline PyTypeObject* SbkType< ::QAbstractPrintDialog::PrintDialogOption >() { return SbkPySide2_QtPrintSupportTypes[SBK_QABSTRACTPRINTDIALOG_PRINTDIALOGOPTION_IDX]; }
template<> inline PyTypeObject* SbkType< ::QFlags<QAbstractPrintDialog::PrintDialogOption> >() { return SbkPySide2_QtPrintSupportTypes[SBK_QFLAGS_QABSTRACTPRINTDIALOG_PRINTDIALOGOPTION__IDX]; }
template<> inline PyTypeObject* SbkType< ::QAbstractPrintDialog >() { return reinterpret_cast<PyTypeObject*>(SbkPySide2_QtPrintSupportTypes[SBK_QABSTRACTPRINTDIALOG_IDX]); }
template<> inline PyTypeObject* SbkType< ::QPrintDialog >() { return reinterpret_cast<PyTypeObject*>(SbkPySide2_QtPrintSupportTypes[SBK_QPRINTDIALOG_IDX]); }

} // namespace Shiboken

#endif // SBK_QTPRINTSUPPORT_PYTHON_H
