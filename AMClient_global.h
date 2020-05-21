#ifndef AMCLIENT_GLOBAL_H
#define AMCLIENT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(AMCLIENT_LIBRARY)
#  define AMCLIENT_EXPORT Q_DECL_EXPORT
#else
#  define AMCLIENT_EXPORT Q_DECL_IMPORT
#endif

#endif // AMCLIENT_GLOBAL_H
