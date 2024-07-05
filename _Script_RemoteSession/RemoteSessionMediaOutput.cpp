#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MediaIOCore\MediaOutput.hpp"
#include "RemoteSessionMediaOutput.hpp"
_Script_CoreUObject::Class* _Script_RemoteSession::RemoteSessionMediaOutput::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RemoteSession.RemoteSessionMediaOutput");
    return result;
}
