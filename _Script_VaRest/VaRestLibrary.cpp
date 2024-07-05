#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
#include "VaRestLibrary.hpp"
#include "VaRestSettings.hpp"
#include "VaRestURL.hpp"
void* _Script_VaRest::VaRestLibrary::GetVaRestVersion() {
    return;
}
_Script_CoreUObject::Class* _Script_VaRest::VaRestLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/VaRest.VaRestLibrary");
    return result;
}
void* _Script_VaRest::VaRestLibrary::StringToSha1(void* StringToHash) {
    return;
}
_Script_VaRest::VaRestURL _Script_VaRest::VaRestLibrary::GetWorldURL(_Script_CoreUObject::Object* WorldContextObject) {
    return;
}
void* _Script_VaRest::VaRestLibrary::StringToMd5(void* StringToHash) {
    return;
}
void* _Script_VaRest::VaRestLibrary::PercentEncode(void* Source) {
    return;
}
_Script_VaRest::VaRestSettings* _Script_VaRest::VaRestLibrary::GetVaRestSettings() {
    return;
}
void* _Script_VaRest::VaRestLibrary::HTTPStatusIntToEnum(int32_t StatusCode) {
    return;
}
bool _Script_VaRest::VaRestLibrary::Base64EncodeData(void*& Data, void*& Dest) {
    return;
}
void* _Script_VaRest::VaRestLibrary::Base64Encode(void* Source) {
    return;
}
bool _Script_VaRest::VaRestLibrary::Base64DecodeData(void* Source, void*& Dest) {
    return;
}
bool _Script_VaRest::VaRestLibrary::Base64Decode(void* Source, void*& Dest) {
    return;
}
