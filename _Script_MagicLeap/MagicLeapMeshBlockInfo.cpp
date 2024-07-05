#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapMeshBlockInfo.hpp"
void* _Script_MagicLeap::MagicLeapMeshBlockInfo::get_Timestamp() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_MagicLeap::MagicLeapMeshBlockInfo::get_BlockOrientation() {
    return (void*)((uintptr_t)this + 0x1c);
}
void* _Script_MagicLeap::MagicLeapMeshBlockInfo::get_BlockID() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MagicLeap::MagicLeapMeshBlockInfo::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeap.MagicLeapMeshBlockInfo");
    return result;
}
void* _Script_MagicLeap::MagicLeapMeshBlockInfo::get_BlockPosition() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_MagicLeap::MagicLeapMeshBlockInfo::get_BlockDimensions() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_MagicLeap::MagicLeapMeshBlockInfo::get_BlockState() {
    return (void*)((uintptr_t)this + 0x40);
}
