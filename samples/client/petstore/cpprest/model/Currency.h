/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.3-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Currency.h
 *
 * some description 
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Currency_H_
#define IO_SWAGGER_CLIENT_MODEL_Currency_H_


#include "../ModelBase.h"


namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// some description 
/// </summary>
class  Currency
    : public ModelBase
{
public:
    Currency();
    virtual ~Currency();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Currency members


protected:
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Currency_H_ */
