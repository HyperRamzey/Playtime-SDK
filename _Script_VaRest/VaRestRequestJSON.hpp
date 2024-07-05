#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\LatentActionInfo.hpp"
namespace _Script_VaRest {
struct VaRestJsonObject;
}
namespace _Script_VaRest {
struct VaRestJsonValue;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_VaRest {
#pragma pack(push, 1)
struct VaRestRequestJSON : public _Script_CoreUObject::Object {
    private: char pad_28[0x1a0]; public:
    void* get_OnRequestComplete();
    void* get_OnRequestFail();
    int32_t& get_ResponseSize();
    void* get_ResponseContent();
    bool get_bIsValidJsonResponse();
    void set_bIsValidJsonResponse(bool value);
    _Script_VaRest::VaRestJsonObject*& get_RequestJsonObj();
    _Script_VaRest::VaRestJsonObject*& get_ResponseJsonObj();
    _Script_VaRest::VaRestJsonValue*& get_ResponseJsonValue();
    static _Script_CoreUObject::Class* static_class();
    void SetVerb(void* Verb);
    void SetURL(void* URL);
    void SetStringRequestContent(void* Content);
    void SetResponseObject(_Script_VaRest::VaRestJsonObject* JsonObject);
    void SetRequestObject(_Script_VaRest::VaRestJsonObject* JsonObject);
    void SetHeader(void* HeaderName, void* HeaderValue);
    void SetCustomVerb(void* Verb);
    void SetContentType(void* ContentType);
    void SetBinaryRequestContent(void*& Content);
    void SetBinaryContentType(void* ContentType);
    void ResetResponseData();
    void ResetRequestData();
    void ResetData();
    int32_t RemoveTag(void* Tag);
    void ProcessURL(void* URL);
    bool HasTag(void* Tag);
    void* GetVerb();
    void* GetURL();
    void* GetStatus();
    _Script_VaRest::VaRestJsonValue* GetResponseValue();
    _Script_VaRest::VaRestJsonObject* GetResponseObject();
    void* GetResponseHeader(void* HeaderName);
    void* GetResponseContentAsString(bool bCacheResponseContent);
    int32_t GetResponseCode();
    _Script_VaRest::VaRestJsonObject* GetRequestObject();
    void* GetAllResponseHeaders();
    void ExecuteProcessRequest();
    void Cancel();
    void ApplyURL(void* URL, _Script_VaRest::VaRestJsonObject*& Result, _Script_CoreUObject::Object* WorldContextObject, _Script_Engine::LatentActionInfo LatentInfo);
    void AddTag(void* Tag);
}; // Size: 0x1c8
#pragma pack(pop)
}
