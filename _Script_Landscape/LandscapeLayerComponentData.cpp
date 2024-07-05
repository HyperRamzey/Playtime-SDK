#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "LandscapeLayerComponentData.hpp"
void* _Script_Landscape::LandscapeLayerComponentData::get_HeightmapData() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Landscape::LandscapeLayerComponentData::get_WeightmapData() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Landscape::LandscapeLayerComponentData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Landscape.LandscapeLayerComponentData");
    return result;
}
