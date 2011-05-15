#include "clementine0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qobject.h>
#include <qpoint.h>
#include <qsize.h>
#include <qstandarditemmodel.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qwidget.h>
#include <radiomodel.h>
#include <radioservice.h>
#include <urlhandler.h>

void PythonQtWrapper_RadioModel::AddService(RadioModel* theWrappedObject, RadioService*  service)
{
  ( theWrappedObject->AddService(service));
}

bool  PythonQtWrapper_RadioModel::IsPlayable(RadioModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->IsPlayable(index));
}

void PythonQtWrapper_RadioModel::ReloadSettings(RadioModel* theWrappedObject)
{
  ( theWrappedObject->ReloadSettings());
}

void PythonQtWrapper_RadioModel::RemoveService(RadioModel* theWrappedObject, RadioService*  service)
{
  ( theWrappedObject->RemoveService(service));
}

RadioService*  PythonQtWrapper_RadioModel::static_RadioModel_ServiceByName(const QString&  name)
{
  return (RadioModel::ServiceByName(name));
}

RadioService*  PythonQtWrapper_RadioModel::ServiceForIndex(RadioModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( theWrappedObject->ServiceForIndex(index));
}

RadioService*  PythonQtWrapper_RadioModel::ServiceForItem(RadioModel* theWrappedObject, const QStandardItem*  item) const
{
  return ( theWrappedObject->ServiceForItem(item));
}

void PythonQtWrapper_RadioModel::ShowContextMenu(RadioModel* theWrappedObject, const QModelIndex&  merged_model_index, const QPoint&  global_pos)
{
  ( theWrappedObject->ShowContextMenu(merged_model_index, global_pos));
}

Qt::ItemFlags  PythonQtWrapper_RadioModel::flags(RadioModel* theWrappedObject, const QModelIndex&  index) const
{
  return ( ((PythonQtPublicPromoter_RadioModel*)theWrappedObject)->promoted_flags(index));
}

bool  PythonQtWrapper_RadioModel::hasChildren(RadioModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_RadioModel*)theWrappedObject)->promoted_hasChildren(parent));
}

QMimeData*  PythonQtWrapper_RadioModel::mimeData(RadioModel* theWrappedObject, const QList<QModelIndex >&  indexes) const
{
  return ( ((PythonQtPublicPromoter_RadioModel*)theWrappedObject)->promoted_mimeData(indexes));
}

QStringList  PythonQtWrapper_RadioModel::mimeTypes(RadioModel* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_RadioModel*)theWrappedObject)->promoted_mimeTypes());
}

int  PythonQtWrapper_RadioModel::rowCount(RadioModel* theWrappedObject, const QModelIndex&  parent) const
{
  return ( ((PythonQtPublicPromoter_RadioModel*)theWrappedObject)->promoted_rowCount(parent));
}



QStandardItem*  PythonQtShell_RadioService::CreateRootItem()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "CreateRootItem");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QStandardItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QStandardItem* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("CreateRootItem", methodInfo, result);
        } else {
          returnValue = *((QStandardItem**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return 0;
}
QModelIndex  PythonQtShell_RadioService::GetCurrentIndex()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "GetCurrentIndex");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QModelIndex"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QModelIndex returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("GetCurrentIndex", methodInfo, result);
        } else {
          returnValue = *((QModelIndex*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QModelIndex();
}
QWidget*  PythonQtShell_RadioService::HeaderWidget() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "HeaderWidget");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QWidget*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QWidget* returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("HeaderWidget", methodInfo, result);
        } else {
          returnValue = *((QWidget**)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return RadioService::HeaderWidget();
}
QString  PythonQtShell_RadioService::Icon()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "Icon");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("Icon", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return RadioService::Icon();
}
void PythonQtShell_RadioService::ItemDoubleClicked(QStandardItem*  item)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "ItemDoubleClicked");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QStandardItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&item};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  RadioService::ItemDoubleClicked(item);
}
void PythonQtShell_RadioService::LazyPopulate(QStandardItem*  parent)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "LazyPopulate");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QStandardItem*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&parent};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  
}
void PythonQtShell_RadioService::ReloadSettings()
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "ReloadSettings");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={""};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  RadioService::ReloadSettings();
}
void PythonQtShell_RadioService::ShowContextMenu(const QModelIndex&  index, const QPoint&  global_pos)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "ShowContextMenu");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "const QModelIndex&" , "const QPoint&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
    void* args[3] = {NULL, (void*)&index, (void*)&global_pos};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  RadioService::ShowContextMenu(index, global_pos);
}
void PythonQtShell_RadioService::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  RadioService::childEvent(arg__1);
}
void PythonQtShell_RadioService::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  RadioService::customEvent(arg__1);
}
bool  PythonQtShell_RadioService::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return RadioService::event(arg__1);
}
bool  PythonQtShell_RadioService::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return RadioService::eventFilter(arg__1, arg__2);
}
void PythonQtShell_RadioService::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  RadioService::timerEvent(arg__1);
}
RadioService* PythonQtWrapper_RadioService::new_RadioService(const QString&  name, RadioModel*  model)
{ 
return new PythonQtShell_RadioService(name, model); }

QWidget*  PythonQtWrapper_RadioService::HeaderWidget(RadioService* theWrappedObject) const
{
  return ( ((PythonQtPublicPromoter_RadioService*)theWrappedObject)->promoted_HeaderWidget());
}

QString  PythonQtWrapper_RadioService::Icon(RadioService* theWrappedObject)
{
  return ( ((PythonQtPublicPromoter_RadioService*)theWrappedObject)->promoted_Icon());
}

void PythonQtWrapper_RadioService::ItemDoubleClicked(RadioService* theWrappedObject, QStandardItem*  item)
{
  ( ((PythonQtPublicPromoter_RadioService*)theWrappedObject)->promoted_ItemDoubleClicked(item));
}

void PythonQtWrapper_RadioService::ReloadSettings(RadioService* theWrappedObject)
{
  ( ((PythonQtPublicPromoter_RadioService*)theWrappedObject)->promoted_ReloadSettings());
}

void PythonQtWrapper_RadioService::ShowContextMenu(RadioService* theWrappedObject, const QModelIndex&  index, const QPoint&  global_pos)
{
  ( ((PythonQtPublicPromoter_RadioService*)theWrappedObject)->promoted_ShowContextMenu(index, global_pos));
}

RadioModel*  PythonQtWrapper_RadioService::model(RadioService* theWrappedObject) const
{
  return ( theWrappedObject->model());
}

QString  PythonQtWrapper_RadioService::name(RadioService* theWrappedObject) const
{
  return ( theWrappedObject->name());
}



UrlHandler::LoadResult  PythonQtShell_UrlHandler::LoadNext(const QUrl&  url)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "LoadNext");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"UrlHandler::LoadResult" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      UrlHandler::LoadResult returnValue;
    void* args[2] = {NULL, (void*)&url};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("LoadNext", methodInfo, result);
        } else {
          returnValue = *((UrlHandler::LoadResult*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return UrlHandler::LoadNext(url);
}
UrlHandler::LoadResult  PythonQtShell_UrlHandler::StartLoading(const QUrl&  url)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "StartLoading");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"UrlHandler::LoadResult" , "const QUrl&"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      UrlHandler::LoadResult returnValue;
    void* args[2] = {NULL, (void*)&url};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("StartLoading", methodInfo, result);
        } else {
          returnValue = *((UrlHandler::LoadResult*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return UrlHandler::StartLoading(url);
}
void PythonQtShell_UrlHandler::childEvent(QChildEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "childEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QChildEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  UrlHandler::childEvent(arg__1);
}
void PythonQtShell_UrlHandler::customEvent(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "customEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  UrlHandler::customEvent(arg__1);
}
bool  PythonQtShell_UrlHandler::event(QEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "event");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
      bool returnValue;
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("event", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return UrlHandler::event(arg__1);
}
bool  PythonQtShell_UrlHandler::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "eventFilter");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"bool" , "QObject*" , "QEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(3, argumentList);
      bool returnValue;
    void* args[3] = {NULL, (void*)&arg__1, (void*)&arg__2};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("eventFilter", methodInfo, result);
        } else {
          returnValue = *((bool*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return UrlHandler::eventFilter(arg__1, arg__2);
}
QString  PythonQtShell_UrlHandler::scheme() const
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "scheme");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"QString"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(1, argumentList);
      QString returnValue;
    void* args[1] = {NULL};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) {
      args[0] = PythonQtConv::ConvertPythonToQt(methodInfo->parameters().at(0), result, false, NULL, &returnValue);
      if (args[0]!=&returnValue) {
        if (args[0]==NULL) {
          PythonQt::priv()->handleVirtualOverloadReturnError("scheme", methodInfo, result);
        } else {
          returnValue = *((QString*)args[0]);
        }
      }
    }
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return returnValue;
  }
}
  return QString();
}
void PythonQtShell_UrlHandler::timerEvent(QTimerEvent*  arg__1)
{
if (_wrapper) {
  PyObject* obj = PyObject_GetAttrString((PyObject*)_wrapper, "timerEvent");
  PyErr_Clear();
  if (obj && !PythonQtSlotFunction_Check(obj)) {
    static const char* argumentList[] ={"" , "QTimerEvent*"};
    static const PythonQtMethodInfo* methodInfo = PythonQtMethodInfo::getCachedMethodInfoFromArgumentList(2, argumentList);
    void* args[2] = {NULL, (void*)&arg__1};
    PyObject* result = PythonQtSignalTarget::call(obj, methodInfo, args, true);
    if (result) { Py_DECREF(result); } 
    Py_DECREF(obj);
    return;
  }
}
  UrlHandler::timerEvent(arg__1);
}
UrlHandler* PythonQtWrapper_UrlHandler::new_UrlHandler(QObject*  parent)
{ 
return new PythonQtShell_UrlHandler(parent); }

UrlHandler::LoadResult  PythonQtWrapper_UrlHandler::LoadNext(UrlHandler* theWrappedObject, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_UrlHandler*)theWrappedObject)->promoted_LoadNext(url));
}

UrlHandler::LoadResult  PythonQtWrapper_UrlHandler::StartLoading(UrlHandler* theWrappedObject, const QUrl&  url)
{
  return ( ((PythonQtPublicPromoter_UrlHandler*)theWrappedObject)->promoted_StartLoading(url));
}



UrlHandler::LoadResult* PythonQtWrapper_UrlHandler_LoadResult::new_UrlHandler_LoadResult(const QUrl&  original_url, UrlHandler::LoadResult::Type  type, const QUrl&  media_url)
{ 
return new PythonQtShell_UrlHandler_LoadResult(original_url, type, media_url); }

