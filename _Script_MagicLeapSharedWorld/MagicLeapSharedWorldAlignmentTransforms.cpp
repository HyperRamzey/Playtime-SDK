#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapSharedWorldAlignmentTransforms.hpp"
void* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldAlignmentTransforms::get_AlignmentTransforms() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MagicLeapSharedWorld::MagicLeapSharedWorldAlignmentTransforms::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms");
    return result;
}