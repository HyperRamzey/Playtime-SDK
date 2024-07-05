#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapMeshBlockRequest.hpp"
void* _Script_MagicLeap::MagicLeapMeshBlockRequest::get_BlockID() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapMeshBlockRequest::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeap.MagicLeapMeshBlockRequest");
    return result;
}
void* _Script_MagicLeap::MagicLeapMeshBlockRequest::get_LevelOfDetail() {
    return (void*)((uintptr_t)this + 0x10);
}
