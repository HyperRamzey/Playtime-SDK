#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "WebJSCallbackBase.hpp"
#include "WebJSResponse.hpp"
_Script_CoreUObject::Class* _Script_WebBrowser::WebJSResponse::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/WebBrowser.WebJSResponse");
    return result;
}
