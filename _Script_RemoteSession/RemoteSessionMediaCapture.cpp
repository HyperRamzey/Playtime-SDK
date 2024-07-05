#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MediaIOCore\MediaCapture.hpp"
#include "RemoteSessionMediaCapture.hpp"
_Script_CoreUObject::Class* _Script_RemoteSession::RemoteSessionMediaCapture::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RemoteSession.RemoteSessionMediaCapture");
    return result;
}
