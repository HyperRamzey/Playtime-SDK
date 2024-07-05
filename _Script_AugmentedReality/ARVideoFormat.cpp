#include "..\FUObjectArray.hpp"
#include "ARVideoFormat.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AugmentedReality::ARVideoFormat::get_FPS() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_AugmentedReality::ARVideoFormat::get_Width() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_AugmentedReality::ARVideoFormat::get_Height() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_AugmentedReality::ARVideoFormat::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AugmentedReality.ARVideoFormat");
    return result;
}
