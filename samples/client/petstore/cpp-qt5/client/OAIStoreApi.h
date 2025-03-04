/**
 * OpenAPI Petstore
 * This is a sample server Petstore server. For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * The version of the OpenAPI document: 1.0.0
 * 
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef OAI_OAIStoreApi_H
#define OAI_OAIStoreApi_H

#include "OAIHttpRequest.h"

#include "OAIOrder.h"
#include <QMap>
#include <QString>

#include <QObject>

namespace OpenAPI {

class OAIStoreApi: public QObject {
    Q_OBJECT

public:
    OAIStoreApi();
    OAIStoreApi(const QString& host, const QString& basePath, const int toutMs = 0);
    ~OAIStoreApi();

    void setBasePath(const QString& basePath);
    void setHost(const QString& host);
    void setApiTimeOutMs(const int tout);
    void addHeaders(const QString& key, const QString& value);

    void deleteOrder(const QString& order_id);
    void getInventory();
    void getOrderById(const qint64& order_id);
    void placeOrder(const OAIOrder& oai_order);
    
private:
    QString basePath;
    QString host;
    int timeout;
    QMap<QString, QString> defaultHeaders;
    void deleteOrderCallback (OAIHttpRequestWorker * worker);
    void getInventoryCallback (OAIHttpRequestWorker * worker);
    void getOrderByIdCallback (OAIHttpRequestWorker * worker);
    void placeOrderCallback (OAIHttpRequestWorker * worker);
    
signals:
    void deleteOrderSignal();
    void getInventorySignal(QMap<QString, qint32> summary);
    void getOrderByIdSignal(OAIOrder summary);
    void placeOrderSignal(OAIOrder summary);
    
    void deleteOrderSignalFull(OAIHttpRequestWorker* worker);
    void getInventorySignalFull(OAIHttpRequestWorker* worker, QMap<QString, qint32> summary);
    void getOrderByIdSignalFull(OAIHttpRequestWorker* worker, OAIOrder summary);
    void placeOrderSignalFull(OAIHttpRequestWorker* worker, OAIOrder summary);
    
    void deleteOrderSignalE(QNetworkReply::NetworkError error_type, QString error_str);
    void getInventorySignalE(QMap<QString, qint32> summary, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrderByIdSignalE(OAIOrder summary, QNetworkReply::NetworkError error_type, QString error_str);
    void placeOrderSignalE(OAIOrder summary, QNetworkReply::NetworkError error_type, QString error_str);
    
    void deleteOrderSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getInventorySignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void getOrderByIdSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    void placeOrderSignalEFull(OAIHttpRequestWorker* worker, QNetworkReply::NetworkError error_type, QString error_str);
    
};

}
#endif
