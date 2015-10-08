#ifndef PP_SCENEGRAPH_GLOBAL_H
#define PP_SCENEGRAPH_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(PP_SCENEGRAPH_LIBRARY)
#  define PP_SCENEGRAPHSHARED_EXPORT Q_DECL_EXPORT
#else
#  define PP_SCENEGRAPHSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // PP_SCENEGRAPH_GLOBAL_H