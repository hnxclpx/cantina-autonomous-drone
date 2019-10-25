
#ifndef VTKFILTERSPARALLELGEOMETRY_EXPORT_H
#define VTKFILTERSPARALLELGEOMETRY_EXPORT_H

#ifdef VTKFILTERSPARALLELGEOMETRY_STATIC_DEFINE
#  define VTKFILTERSPARALLELGEOMETRY_EXPORT
#  define VTKFILTERSPARALLELGEOMETRY_NO_EXPORT
#else
#  ifndef VTKFILTERSPARALLELGEOMETRY_EXPORT
#    ifdef vtkFiltersParallelGeometry_EXPORTS
        /* We are building this library */
#      define VTKFILTERSPARALLELGEOMETRY_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define VTKFILTERSPARALLELGEOMETRY_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef VTKFILTERSPARALLELGEOMETRY_NO_EXPORT
#    define VTKFILTERSPARALLELGEOMETRY_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef VTKFILTERSPARALLELGEOMETRY_DEPRECATED
#  define VTKFILTERSPARALLELGEOMETRY_DEPRECATED __attribute__ ((__deprecated__))
#  define VTKFILTERSPARALLELGEOMETRY_DEPRECATED_EXPORT VTKFILTERSPARALLELGEOMETRY_EXPORT __attribute__ ((__deprecated__))
#  define VTKFILTERSPARALLELGEOMETRY_DEPRECATED_NO_EXPORT VTKFILTERSPARALLELGEOMETRY_NO_EXPORT __attribute__ ((__deprecated__))
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKFILTERSPARALLELGEOMETRY_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersGeometryModule.h"

#endif
