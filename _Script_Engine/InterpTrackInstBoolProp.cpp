#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InterpTrackInstBoolProp.hpp"
#include "InterpTrackInstProperty.hpp"
_Script_CoreUObject::Class* _Script_Engine::InterpTrackInstBoolProp::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.InterpTrackInstBoolProp");
    return result;
}
bool _Script_Engine::InterpTrackInstBoolProp::get_ResetBool() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
void _Script_Engine::InterpTrackInstBoolProp::set_ResetBool(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
