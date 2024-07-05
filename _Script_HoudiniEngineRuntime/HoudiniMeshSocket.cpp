#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "HoudiniMeshSocket.hpp"
_Script_CoreUObject::Class* _Script_HoudiniEngineRuntime::HoudiniMeshSocket::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/HoudiniEngineRuntime.HoudiniMeshSocket");
    return result;
}
