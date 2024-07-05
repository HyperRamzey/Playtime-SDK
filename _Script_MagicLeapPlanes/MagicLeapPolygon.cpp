#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MagicLeapPolygon.hpp"
void* _Script_MagicLeapPlanes::MagicLeapPolygon::get_Vertices() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_MagicLeapPlanes::MagicLeapPolygon::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MagicLeapPlanes.MagicLeapPolygon");
    return result;
}
