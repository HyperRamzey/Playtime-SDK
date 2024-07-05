#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "InputMotionData.hpp"
float& _Script_SteamCore::InputMotionData::get_RotQuatX() {
    return *(float*)((uintptr_t)this + 0x0);
}
float& _Script_SteamCore::InputMotionData::get_RotQuatW() {
    return *(float*)((uintptr_t)this + 0xc);
}
float& _Script_SteamCore::InputMotionData::get_RotQuatY() {
    return *(float*)((uintptr_t)this + 0x4);
}
float& _Script_SteamCore::InputMotionData::get_RotQuatZ() {
    return *(float*)((uintptr_t)this + 0x8);
}
float& _Script_SteamCore::InputMotionData::get_RotVelX() {
    return *(float*)((uintptr_t)this + 0x1c);
}
float& _Script_SteamCore::InputMotionData::get_PosAccelX() {
    return *(float*)((uintptr_t)this + 0x10);
}
float& _Script_SteamCore::InputMotionData::get_PosAccelZ() {
    return *(float*)((uintptr_t)this + 0x18);
}
float& _Script_SteamCore::InputMotionData::get_PosAccelY() {
    return *(float*)((uintptr_t)this + 0x14);
}
float& _Script_SteamCore::InputMotionData::get_RotVelY() {
    return *(float*)((uintptr_t)this + 0x20);
}
float& _Script_SteamCore::InputMotionData::get_RotVelZ() {
    return *(float*)((uintptr_t)this + 0x24);
}
_Script_CoreUObject::Class* _Script_SteamCore::InputMotionData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SteamCore.InputMotionData");
    return result;
}
